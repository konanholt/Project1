struct problem {
	int num1;
	int num2;
	char operator;
	double user_answer;
	double correct_answer;
	double difference;
	struct problem *next;
};

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

