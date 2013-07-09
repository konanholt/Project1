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
		return 0;
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
	int current_problem = 1;
        double answers[number_of_problems];
	while ((current_problem) <= number_of_problems) {
                if(number_of_problems > 1 || current_problem > 1) {
			if(number_of_problems == current_problem) {
	                        printf("Last Question!");
	                } else if (number_of_problems != current_problem){
//	                	printf("%d: %d\n", number_of_problems , current_problem);
	                	printf("%d questions left\n", number_of_problems - (current_problem - 1));
	                }
		}
		srand (time(NULL));
		current_operator[current_problem - 1] = operators[rand() % 4];
		first_number[current_problem - 1] = rand() % 10 + 1;
		second_number[current_problem - 1] = rand() % 10 + 1;
								
		printf("Question # %d. Solve this math problem: %d %c %d? \n", (current_problem), first_number[current_problem - 1],current_operator[current_problem - 1], second_number[current_problem - 1]);
		scanf("%lf", &answers[current_problem - 1]);
		
		if(answers[current_problem - 1] == solveProblem(first_number[current_problem - 1], second_number[current_problem - 1], current_operator[current_problem - 1])) { 
                        amount_correct++;
                        printf ("Correct!\n");
		} else { 
			printf ("Incorrect\n");
		}
		current_problem++;
	}
	printf("Final Score: %d out of %d.\nThanks for playing!\n", amount_correct, number_of_problems);
	current_problem = 0;
	do {
		double answer = solveProblem(first_number[current_problem], second_number[current_problem], current_operator[current_problem]);
		double difference;
		
		if(answer != answers[current_problem]) {
			if( answer > answers[current_problem]) {
                        	printf("Problem #%d (%d %c %d) = %.2f – Off by %.2f\n", current_problem+1, first_number[current_problem], current_operator[current_problem], second_number[current_problem], answer, difference );
				difference = answer - answers[current_problem];
			} else {
				printf("Problem #%d (%d %c %d) = %.2f\n", current_problem+1, first_number[current_problem], current_operator[current_problem], second_number[current_problem], answer );
				difference = answers[current_problem] - answer;
			}
			printf("User Answer: %.2f; Correct Answer: %.2f; Difference: %.2f\n", answers[current_problem], answer, difference);
		} else {
			difference = 0;
		}
		
		current_problem++;
	} while ((current_problem+1) <= number_of_problems);	
}

