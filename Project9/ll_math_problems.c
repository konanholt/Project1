#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "math.h"

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
