#include "str_len.hpp"

char*const& shift(char*const& arr, int number){

	if(number == 0) return arr;
	
	bool flag = false;

	if(number > 0) flag = true;  
	
	if(flag){
		for(int i = 0, j = str_len(arr)-1; i < (str_len(arr)-1)*number; ++i){

			arr[j]   ^= arr[j-1];
			arr[j-1] ^= arr[j];
			arr[j]   ^= arr[j-1];
			--j;	
			if(!j) j = str_len(arr)-1; 
		}

		return arr;
	}else {
		for(int i = 0, j = 0; i < (str_len(arr)-1)*number*(-1); ++i){

			arr[j]   ^= arr[j+1];
			arr[j+1] ^= arr[j];
			arr[j]   ^= arr[j+1];
			++j;	
			if(j == (str_len(arr)-1)) j = 0; 
		}

		return arr;

	}
}

