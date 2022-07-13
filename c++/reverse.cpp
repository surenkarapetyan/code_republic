#include "str_len.hpp"

char*const& reverse(char* const& str){

	if(str_len(str) == 1) return str;
	uint32_t size = str_len(str);
	for(int i = 0, j = str_len(str)-1; i < size/2; ++i){
	
		str[i] ^= str[j];
		str[j] ^= str[i];
		str[i] ^= str[j];
		--j;
	}	
	return str;
}
