struct problem {
	int num1;
	int num2;
	char operator;
	double user_answer;
	double correct_answer;
	double difference;
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
			new_problem->correct_answer = (float) new_problem->num1 / (float) new_problem->num2;
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
	#ifdef FOO
		new_problem->num1 = 7;
		new_problem->num2 = 2;
		new_problem->operator = '+';
		new_problem->user_answer = 9;
		new_problem->correct_answer = new_problem->num1 + new_problem->num2;
		if((float) new_problem->num2 == 0) {
		      	printf("Cannot divide by zero. Changing num2\n");
			new_problem->num2 = 1;
		}
		if(new_problem->user_answer != new_problem->correct_answer) {
			printf("Projected answer (%f) not equal to correct answer (%f)\n", new_problem->user_answer, new_problem->correct_answer);
		}
	#endif
	printf("%d %c %d\n", new_problem->num1, new_problem->operator, new_problem->num2);
	#ifndef FOO
		scanf("%lf", &new_problem->user_answer);
	#endif
	if(new_problem->user_answer == new_problem->correct_answer) {
		printf("Correct!\n");
	} else {
		printf("Incorrect. The correct answer was %f\n", new_problem->correct_answer);
	}
//	new_problem->user_answer
//	new_problem->difference
}

