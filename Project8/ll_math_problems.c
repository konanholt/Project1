#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

	printf("%d %c %d\n", new_problem->num1, new_problem->operator, new_problem->num2);
	scanf("%lf", &new_problem->user_answer);
	if(new_problem->user_answer == new_problem->correct_answer) {
		printf("Correct!");
	} else {
		printf("Incorrect. The correct answer was %f", new_problem->correct_answer);
	}
//	new_problem->user_answer
//	new_problem->difference
}
/*
	int solveProblem(struct problem *curr) {
	        if(curr->operator == '+') {
	                return (curr->num1 + curr->num2);
	        } else if (curr->operator == '/') {
	                return (curr->num1 / curr->num2);
	        } else if (curr->operator == '-') {
	                return (curr->num1 - curr->num2);
	        } else if (curr->operator == '*') {
	                return (curr->num1 * curr->num2);
	        } else {        
	                printf("Sorry!");
	                return 0;
	        }               
	}       
*/	
	int main() {
		int number_of_problems;
		printf("How many problems do you want to solve? (Please choose 1-10)");
		scanf("%d", &number_of_problems);
		while ( number_of_problems > 10 ) {
       	     		printf ("You chose %d. Please choose 10 problems or fewer.\n", number_of_problems);
			printf("How many problems do you want to solve? (Please choose 1-10)");
			scanf("%d", &number_of_problems);
		} 
		int current_problem = 1;
		while ( current_problem <= number_of_problems ) {
			printf(" On to question #%d\n", current_problem);
			buildProblem();
			current_problem++;
		}
		return 0;
	}
