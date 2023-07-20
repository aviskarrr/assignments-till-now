#include<stdio.h>
int main(){
	int x;
	float y;
	printf("Enter Value of x = ");
	scanf("%d",&x);
	if(x>2){
		y = 3*x+5;
	}
	else{
		y = 2.4*x+3;
	}
	
	printf("Value of Y = %f",y);
	return 0;
}
