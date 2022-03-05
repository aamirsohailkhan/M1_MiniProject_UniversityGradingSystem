/**
 * @file main.c
 * @author K A Amirasohail (sohailkalkapur@gail.com)
 * @brief  UNIVERSITY has the following grading policy:
  *.Every student receives relative grade in the inclusive range from 0 to 100 *
  any grade less than 40 is a failing grade
  *professor X at the university likes to round each student according to these rules
  *if the difference between the grade and next multiple of 5 is less than 3,round grade upto the next multiple of 5
  *if the value of grade is less than 38,no rounding occurs as a result will still be a failing grade,for example,the grade=82.5 will be rounded to 83 but grade=38 will no be rounded because the rounding would result in a number that is less than 40.
  *given the initial value of for each of X students , write code to automate the rounding process to complete the function solve that takes an integer array of all grades and return an integer consisting of the rounded grades
  *for each grade,round it according to the rules above and print the result on a new line.
  *also make sure that a complete detail of student is read in final output statement.
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "functions.h"


float a;
//floating function used for decimals 
char name[30];
//this represents the name of the professor
char student_name[60];
//this represents the name of the student 
void grades();

// A void function performs a task, and then control returns back to the caller--but, it does not return a value.

void grade_next();
//function chooses to round to the next digit

void grade_5();
//function chooses to round to the nearest next multiple of 5

void both();
//function chooses to round the decimal and round it to next multiple of 5

int main()


{
	int x;
	//integer function used for whole numbers
	
	printf("X UNIVERSITY\n");
	
	
	
	printf("please enter your name professor: \n NAME:");
	
	//prints the name of the professor 
	
	scanf("%s",name);
	//scans the name of the professor using scan f statement 
	
	printf("enter the name of the student/n");
	//askes the user to enter student's name
	
	scanf("%s",student_name);
	//scans the input
	
	printf("\n");
	
	printf("the name of the student is %s",student_name);
	//the name of the student is displayed
	
	printf("\n");
	//for the new line we use /n command
	printf("welcome professor:%s\n",name);
	
	
	printf("\n");
	
	printf("\ndo u wish to check the grading policy?\n");
	//displays the grading policy of the university
	printf("\n");
	
	printf("(if yes,press 1 else 0)\n");
	
	printf("\n");
	
	scanf("%d",&x);
	
	printf("\n");
	
	switch(x)
	{
		case 0:printf("\n-----------THANKYOU COME AGAIN------------\n");
		
		exit(0);
		
		case 1:grades();
		
		break;
		
		default:printf("sorry professor we could not understand your command\ncan you plz pardon me and enter a valid command?\n");
		//askes the professor to re-enter the choice
		break;
		
	}
	return 0;
	
}




void grades()
{
	int b;
	
	for(;;)
	{
		printf("\n\nRESPECTED PROFESSOR: %s\n",name);
		
		printf("choose the following grading system:\n");
		
		printf("1.GRADE TO THE NEXT DECIMAL\n");
		
		
		printf("2.GRADE TO THE NEXT MULTIPLE OF 5\n");
		
		printf("3.BOTH THE SYSTEMS\n");
		
		printf("4.EXIT\nchoice:\n"); 
		
		scanf("%d",&b);
		
		switch(b)
		{
			case 1:printf("\nplease enter the present grade score of the student\nGRADE:");
			
			scanf("%f",&a);
			
			grade_next();
			
			break;
			
			case 2:printf("\nplease enter the present grade score of the student\nGRADE:");
			
			scanf("%f",&a);
			
			grade_5();
			
			break;
			
			case 3:printf("\nplease enter the present grade score of the student\nGRADE:");
			
			scanf("%f",&a);
			
			both();
			
			break;
			
			case 4:printf("\n---------THANKYOU, COME AGAIN-------------\n");
			
			exit(0);
			
			
			
			default:printf("sorry professor we could not understand your command\ncan you plz pardon me and enter a valid command?\n");
			
			break;
		}
	}
}




void grade_next()
{
	int c;
	
	if(a>=38)
	
	{
		int d=(int)a;
		
		float e=a-d;
		
		if(e>=0.5)
		{
			int b=(int)a;
			
			c=b+1;
			
			printf("THE GRADE OF THE STUDENT IS :%d\n",c);
			
			printf("THE STUDENT RESULT : 'PASS'\n");
		}
		if(e<0.5)
		
		{
		int b=(int)a;
		
		printf("THE GRADE OF THE STUDENT IS :%d\n",b);
		
		printf("THE STUDENT RESULT : 'PASS'\n");
		
	}
}
else
{
	printf("THE GRADE OF THE STUDENT IS :%.2f\n",a);
	
	printf("THE STUDENT RESULT: 'FAIL'\n");
	
}
}




void grade_5()
{
	int c,g;
	
	int f,h;
	
	if(a>=38)
	{
		int d=(int)a;
		
		float e=a-d;
		
		f=d%5;
		
		c=(d-f)+5;
		
		g=c-d;
		
		h=d-f;
		
		if(g<3)
		{
			printf("THE GRADE OF THE STUDENT IS :%d\n",c);
			
			printf("THE STUDENT RESULT : 'PASS'\n");
			
		}
		
		
		
		
	else
	{
	c=(d-f)+5;
	
	printf("THE GRADE OF THE STUDENT IS :%d\n",h);
	
	printf("THE STUDENT RESULT : 'PASS'\n");
			
	}
	}
	if(a<38)
	{
	printf("THE GRADE OF THE STUDENT IS :%.2f\n",a);
	
	printf("THE STUDENT RESULT : 'FAIL'\n");
}
}



void both()
{
	printf("1.THE GRADE TO NEXt\n");
	
	grade_next();
	
	printf("\n2.THE GRADE TO MULTIPLE OF 5\n");
	
	grade_5();
}

