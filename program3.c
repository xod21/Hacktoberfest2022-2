/* WAP in which acc to the month number print the number of days in that month*/

#include<stdio.h>
void main(){
	int x;
	printf("Enter the month: \n");
	scanf("%d", &x);

	switch(x){
		case 1:
			printf("January month has 31 Days \n");
			break;
		case 2:
			printf("February month has 28 Days \n");
			break;
		
		case 3:
			printf("March month has 31 Days \n");
			break;
		
		case 4:
			printf("April month has 30 Days \n");
			break;
		
		case 5:
			printf("May month has 31 Days \n");
			break;
		
		case 6:
			printf("June month has 30 Days \n");
			break;
		
		case 7:
			printf("July month has 31 Days \n");
			break;
		
		case 8:
			printf("August month has 31 Days \n");
			break;
		
		case 9:
			printf("September month has 30 Days \n");
			break;
		
		case 10:
			printf("Octomber month has 31 Days \n");
			break;
		
		case 11:
			printf("November month has 30 Days \n");
			break;
		case 12:
			printf("December month has 31 Days \n");
			break;
		
		

	}

}
