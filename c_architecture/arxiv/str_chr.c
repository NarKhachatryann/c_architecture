#ifndef STR_CHR_C
#define STR_CHR_C
#include <stdio.h>
char* my_strchr(const char* str, char character)
{
		if(str == NULL){
			printf("Invalid pointer\n");
				return NULL;
		}
		while(*str != '\0' || *str != character){
				++str;
		}
		if(*str == character){
				return (char*)str;
		}
		return NULL;

}
#endif
