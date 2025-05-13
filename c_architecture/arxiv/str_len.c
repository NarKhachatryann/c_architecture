#ifndef STR_LEN_C
#define STR_LEN_C
#include <stdio.h>
size_t my_strlen(const char* str)
{
		if(str == NULL){
				printf("Invalid pointer\n");
				return 0;
		}
		size_t length = 0;
		while(*str != '\0'){
				++length;
				++str;
		}
		return length;
}

#endif
