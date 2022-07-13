#include "str_len.hpp"

char* concat(char* arr_1, char* arr_2){
	
	for(int i = 0, j = str_len(arr_1); i <= str_len(arr_2); ++i)
		*(arr_1 + j++) = arr_2[i];
	
	return arr_1;
	
}
