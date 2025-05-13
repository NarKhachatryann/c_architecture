#include <stdio.h>

int isUpper(char ch);
int isLower(char ch);
int isDigit(char ch);
int isSpace(char ch);
int isAlpha(char ch);

int main(){

	int(*fptr[5])(char) = {isUpper, isLower,isDigit,isSpace,isAlpha};

	const char* str = "This 5 sentences are for Check1";
	int lower = 0;
	int upper = 0;
	int digit = 0;
	int space = 0;
	int alpha = 0;
	printf("%s\n", str);

	while(*str != '\0'){

		upper += fptr[0](*str);
		lower += fptr[1](*str);
		digit += fptr[2](*str);
		space += fptr[3](*str);
		alpha += fptr[4](*str);
		++str;
	}

	printf("Upper = %d\n",upper);
	printf("Lower = %d\n",lower);
	printf("Digit = %d\n",digit);
	printf("Space = %d\n",space);
	printf("Alpha = %d\n",alpha);

}

int isUpper(char ch){
	if(ch >= 'A' && ch <= 'Z')
		{
	return 1;
		}
	return 0;
	}

int isLower(char ch){
	if(ch >= 'a' && ch <= 'z'){
	return 1;
	}
	return 0;
	}

int isDigit(char ch){
	if(ch >= '0' && ch <= '9'){
	return 1;
	}
	return 0;
	}

int isSpace(char ch){
	if(ch == ' '){
	return 1;
	}
	return 0;
	}

int isAlpha(char ch){
	if(isLower || isUpper){
	return 1;
	}
	return 0;
	}

