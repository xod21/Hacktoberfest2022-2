/* WAP that takes a num from 0-5 and prints its spelling 
if The number is greater than 5 print entered num is greater than 5
ip= */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the Number: \n");
	scanf("%d", &x);

	if(x>=0 && x<=5){
	switch(x){
		case 0:
			printf("Zero \n");
			break;
		case 1:
			printf("One \n");
			break;
		case 2:
			printf("Two \n");
			break;
		case 3:
			printf("Three \n");
			break;
		case 4:
			printf("Four \n");
			break;
		case 5:
			printf("Five \n");
			break;
		// default:
		// 	printf("Number is Greater than 5 \n" );
		}
	}
	else if(x<0 ){
		printf("Wrong input \n");
	}
	else{
		printf("Number is Greater than 5 \n" );
	}
}
