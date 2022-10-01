/*wap to find the max num among three num*/

#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter Value for x: \n");
	scanf("%d", &x);
	printf("Enter Value for y: \n");
	scanf("%d", &y);
	printf("Enter Value for z: \n");
	scanf("%d", &z);

	if(x>y && x>z){
		printf("max num is %d \n", x);
	}
	if(y>x && y>z){
		printf("max num is %d  \n", y);
	}
	if(z>x && z>y){
		printf("max num is %d  \n", z);

	}


}
