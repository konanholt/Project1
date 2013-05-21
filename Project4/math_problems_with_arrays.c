#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

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
        char operator[number_of_problems];
        int current_problem = 0;
        int answers[number_of_problems];
	
	do {
		srand (time(NULL));
		first_number[current_problem] = rand() % 10 + 1;
		second_number[current_problem] = rand() % 10 + 1;
		operator[current_problem] = '+';
								
		printf("Question # %d. Solve this math problem: %d + %d? \n", (current_problem + 1), first_number[current_problem], second_number[current_problem]);
		scanf("%d", &answers[current_problem]);
		
		if(answers[current_problem] == (first_number[current_problem] + second_number[current_problem])) { 
			printf ("Correct!");
                        amount_correct++;
		 } else { 
			printf ("Incorrect");
		}
		current_problem++;
	} while ((current_problem + 1) <= number_of_problems);
	printf("Final Score: %d/%d.\nThanks for playing!\n", amount_correct, number_of_problems);
	current_problem = 0;
	do {
		printf("Problem #%d (%d %c %d)\n", current_problem+1, first_number[current_problem], operator[0], second_number[current_problem]);
		current_problem++;
	} while ((current_problem+1) <= number_of_problems);	
}

