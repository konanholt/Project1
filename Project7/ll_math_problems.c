#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct problem {
	int num1;
	int num2;
	char operator;
	float user_answer;
	float correct_answer;
	float difference;
	struct problem *next;
};

struct problem *curr=NULL, *head=NULL, *tail=NULL;

void buildProblem() {
	struct problem *new_problem = malloc(sizeof(struct problem));
	srand (time(NULL));
	if(head == NULL) {
		head = new_problem;
	}
	if(tail != NULL) {
		tail->next = new_problem;
	}
	tail = new_problem;
	new_problem->next = NULL;
	new_problem->num1 = rand() % 10 + 1;
	printf("new_problem->num1 = %d\n", new_problem->num1);
	new_problem->num2 = rand() % 10 + 1;
	switch(rand() % 4) {
        	case 0 :
			new_problem->correct_answer = new_problem->num1 + new_problem->num2;
			new_problem->operator = '+';
			break;
        	case 1 :
			new_problem->correct_answer = new_problem->num1 - new_problem->num2;
			new_problem->operator = '-';
			break;
        	case 2 :
			new_problem->correct_answer = new_problem->num1 / new_problem->num2;
			new_problem->operator = '/';
			break;
        	case 3 :
			new_problem->correct_answer = new_problem->num1 * new_problem->num2;
			new_problem->operator = '*';
			break;
		default : 
			printf("Hey, wha happen?!");
			break;
	}
	printf("%d %c %d\n", new_problem->num1, new_problem->operator, new_problem->num2);
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
			buildProblem();
			current_problem++;
		}
		return 0;
	}
