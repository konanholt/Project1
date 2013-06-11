#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int solveProblem(first_number, second_number, operator) {
	if(operator == '+') {
		return (first_number + second_number);
	} else if (operator == '/') {
		return (first_number / second_number);
	} else if (operator == '-') {
                return (first_number - second_number);
	} else if (operator == '*') {
                return (first_number * second_number);
	} else {
		printf("Sorry!");
	}
}

int main(void) {
	int amount_correct, user_answer;
	bool is_less_than_ten;
	int i = 1;
	amount_correct = 0;
	
	do {
	        printf("How many problems do you want to solve? (Please choose 1-10)");
		scanf("%d", &user_answer);
		if(user_answer <= 10) {
			is_less_than_ten = true;
		} else {
			printf ("You chose %d. Please choose 10 problems or fewer.\n", user_answer); 
			is_less_than_ten = false;
		}
	} while ( is_less_than_ten != true );
	
	int number_of_problems = user_answer;
        int first_number[number_of_problems];
        int second_number[number_of_problems];
        char operators[number_of_problems];
        char current_operator[4];
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '*';
	operators[3] = '/';
	int current_problem = 0;
        int answers[number_of_problems];
	while ((current_problem) <= number_of_problems) {
		current_problem++;
                if(number_of_problems != 1 || current_problem != 1) {
			if(number_of_problems == current_problem) {
	                        printf("Last Question!");
	                } else {
//	                	printf("%d: %d\n", (number_of_problems - 1) , current_problem);
	                	printf("%d questions left\n", (number_of_problems - 1) - current_problem);
	                }
		}
		srand (time(NULL));
		current_operator[current_problem] = operators[rand() % 4];
		first_number[current_problem] = rand() % 10 + 1;
		second_number[current_problem] = rand() % 10 + 1;
								
		printf("Question # %d. Solve this math problem: %d %c %d? \n", (current_problem), first_number[current_problem - 1],current_operator[current_problem - 1], second_number[current_problem - 1]);
		scanf("%d", &answers[current_problem - 1]);
		
		if(answers[current_problem - 1] == solveProblem(first_number[current_problem - 1], second_number[current_problem - 1], current_operator[current_problem - 1])) { 
                        amount_correct++;
                        printf ("Correct!\n");
		} else { 
			printf ("Incorrect\n");
		}
	}
	printf("Final Score: %d out of %d.\nThanks for playing!\n", amount_correct, number_of_problems);
	current_problem = 0;
	do {
		printf("Problem #%d (%d %c %d)\n", current_problem+1, first_number[current_problem], current_operator[current_problem], second_number[current_problem]);
		current_problem++;
	} while ((current_problem+1) <= number_of_problems);	
}
