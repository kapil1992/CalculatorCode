#include <stdio.h>

int StringLength(char *str){
	int count = 0;
	while(*str++ != '\0') {
		count++;
	}
	return count;
}

int main(){
	char str[100] = "";
	printf("Enter the string : ");
	scanf("%s", str);
	printf("length is : %d\n", StringLength(str));
	return 0;
}
