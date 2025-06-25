// Grade Calculator
// Rudra Thakkar
// 25-06-2025

#include <stdio.h>

int main()
{
	int marks;
	char grade;
	printf("Enter marks: \n");
	scanf("%d", &marks);

	grade = marks >= 90 && marks <= 100
			? 'A'
			: marks >= 80 && marks <= 90
			? 'B'
			: marks >= 70 && marks <= 80
			? 'C'
			: marks >= 60 && marks <= 80
			? 'D'
			: marks >= 50 && marks <= 60
			? 'E'
			: 'F';

	printf("Your grade is %c\n", grade);

	switch (grade)
	{
	case 'A':
		printf("Congrats You Scored Well!\n");
		break;
	case 'B':
		printf("You are Excellent\n");
		break;
	case 'C':
		printf("You are Good\n");
		break;
	case 'D':
		printf("Try hard\n");
		break;
	case 'E':
		printf("You need to work robustly on your skill\n");
		break;
	default:
		printf("You are failed\n");
	}

	grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'? printf("Congrats you are eligible for next level\n")
	: printf("Please try again\n");

	return 0;
}