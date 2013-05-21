#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
	int amount_correct, first_number, second_number, user_answer;
	bool is_less_than_ten;
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
	int i = 1;
	amount_correct = 0;
	
	do {
		srand (time(NULL));
		first_number = rand() % 10 + 1;
		second_number = rand() % 10 +1;
	
		printf("Question # %d. Solve this math problem: %d + %d? \n", i, first_number, second_number);
		scanf("%d", &user_answer);
		if(user_answer == (first_number + second_number)) { 
			printf ("Correct!");
                        amount_correct++;
		 } else { 
			puts ("Incorrect");
		}
		i++;
		
	} while (i <= number_of_problems);
	printf("Final Score: %d/%d. Thanks for playing!\n", amount_correct, number_of_problems);
}

