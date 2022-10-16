/* WAP to check whether the input is a leap year or not
input 2000
op leap
ip 1999
op not a leap year

*/

#include<stdio.h>
int main(){
	int x;
	printf("Enter Year: \n");
	scanf("%d", &x);

	if(x%400==0 && x%100!=0){
		printf("It is a Leap Year \n");
	}
	if(x%4==0 && x%100==0){
		printf("It is a Leap Year \n");
	}
	
	else{
		printf("It is not a Leap Year \n");
	}
return 0;
}
