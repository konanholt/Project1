#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int first_number, second_number, user_answer;
	
	srand (time(NULL));
	first_number = rand() % 10 + 1;
	second_number = rand() % 10 +1;
	
	printf("Solve this math problem: %d + %d? \n", first_number, second_number);
	scanf("%d", &user_answer);
	if(user_answer == (first_number + second_number)) puts ("Correct!");
	else puts ("Incorrect");
}

