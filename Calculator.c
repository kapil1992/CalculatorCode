#include <stdio.h>

void add(int a, int b){
	printf("Sum of %d and %d is : %d\n", a, b, (a+b));
}

void sub(int a, int b){
	printf("Subtraction of %d and %d is : %d\n", a, b, (a-b));
}

void mul(int a, int b){
	printf("Multiplication of %d and %d is : %d\n", a, b, (a*b));
}

void div(int a, int b){
	printf("Division of %d and %d is : %d\n", a, b, (a/b));
}

int main(){
	char ch;
	int a, b;
	printf("1.Addition\n
		2.Subtraction\n
		3.Multiplication\n
		4.Division\n");
	printf("Enter your choice : ");
	scanf("%d", &ch);
	printf("Enter number for operation\n");
	scanf("%d%d", &a, &b);
	do{
	  switch(ch){
	    case 1: add(a,b); break
	    case 2: sub(a,b); break
	    case 3: mul(a,b); break
	    case 4: div(a,b); break
	    default: printf("Wrong choice\n");
	  }
	}while(ch > 0);
	return 0;
}
