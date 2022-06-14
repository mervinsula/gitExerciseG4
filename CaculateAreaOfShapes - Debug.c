/*
* This program calculates the area of a circle, Equilateral Triangle,
* Square, and rectangle.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>


/*
* These are prototype for the functions.
*/
void calAreaOfCircle();
void calAreaOfTriangle();
void calAreaOfSquare();
void calAreaOfRectangle();
 
int main() {
	char choice[4];
	
/*
* 					-- Do while loop --
* This block of code is for displaying menu option. The program
* continue to display until the user entered 'X' for closing
* the program.
*/
	do {
		system("cls");


		printf("Choose to caculate:\n");
		printf("[A] Caculate Area of Circle.\n");
		printf("[B] Calculate Area of Equilateral Triangle.\n");
		printf("[C] Calculate Area of Square.\n");
		printf("[D] Calculate Area of Rectangle.\n");
		printf("[X] Exit\n\n");
		
		printf("Enter choice: ");
		fflush(stdin);
		scanf("%s", &choice[0]);
		
		if(toupper(choice[0]) == 'X') {
			printf("Closing the program...");
		}else if (toupper(choice[0]) == 'A') {
			calAreaOfCircle();
		}else if (toupper(choice[0]) == 'B') {
			calAreaOfTriangle();
		}else if (toupper(choice[0]) == 'C') {
			calAreaOfSquare();
		}else if (toupper(choice[0]) == 'D') {
			calAreaOfRectangle();
		}else{
			printf("Invalid input.\nPress 'Enter'");
			getch();
			
		}
		
	}while (toupper(choice[0]) != 'X');
	
   return 0;
}

/*
* This function calculates the area of a circle.
*/
void calAreaOfCircle() {
   float radius area;
   printf("\nEnter the radius of Circle : ");
   scanf("%d", &radius);
 
   area = 3.14 * (radius * radius);
   printf("\nArea of Circle : %.2f", area);
   
   getch();
}

/*
* This function calculates the area of an equilateral triangle.
*/
void calAreaOfTriangle(){
   int side;
   float area, r_4;
 
   r_4 = sqrt(3) / 4;
 
   printf("\nEnter the Length of Side : ");
   scanf("%d", &side);
 
   area = r_4 * side * side;
 
   printf("\nArea of Equilateral Triangle : %f", area);
   getch();
}

/*
* This function calculates the area of a square.
*/
void calAreaOfSquare(){
   Int side, area;
 
   printf("\nEnter the Length of Side : ");
   scanf("%d", &side);
 
   area = side * side;
   printf("\nArea of Square : %d", areas);
   getch();
}

/*
* This function calculates the area of a rectangle.
*/
void calAreaOfRectangle(){
	   int length, breadth, area;
 
   printf("\nEnter the Length of Rectangle : ");
   scanf("%", &length);
 
   printf("\nEnter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
 
   area = length * breadth;
   printf("\nArea of Rectangle : %d", AREA);
      getch();
}