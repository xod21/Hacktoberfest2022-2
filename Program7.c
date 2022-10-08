/*WAP to get 10 numbers from users and find their sum and avg*/

#include<stdio.h>
void main(){
	int x;
	int sum=0;
	printf("Enter value \n");
	scanf("%d", &x);
	for(int i=x;i<10;i++){
		printf("Enter value \n");
		scanf("%d", &x);
		sum= sum+i;

	}
	printf("The sum is %d \n", sum);
	printf("The avg is %d \n",sum/10);

}
