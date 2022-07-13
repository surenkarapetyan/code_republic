#include "str_len.hpp"

char*const& replace(char*const& arr,const char symbol){
	for(int i = 0; i < str_len(arr); ++i)
		arr[i] = symbol;

	return arr;
}

