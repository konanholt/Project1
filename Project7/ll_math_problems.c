#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct problem {
	int num1;
	char operator;
	int num2;
	float user_answer;
	float correct_answer;
	float difference;
};

struct problem *curr, *head, *tail;

struct problem* addProblem() {
	struct problem *new_problem = malloc(sizeof(struct problem));
	srand (time(NULL));
	new_problem->num1 = rand() % 10 + 1;
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
	return(tail);
//	new_problem->user_answer
//	new_problem->difference
}
	bool is_less_than_ten = false;
	while ( is_less_than_ten != true ) {
            printf("How many problems do you want to solve? (Please choose 1-10)");
            scanf("%d", &user_answer);
			if(user_answer <= 10) {
        	is_less_than_ten = true;
        } else {
            printf ("You chose %d. Please choose 10 problems or fewer.\n", user_answer);
        	is_less_than_ten = false;
    	}
    } 

int solveProblem(curr->num1, curr->num, curr->operator) {
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

