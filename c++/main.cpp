#include <iostream>
#include "str_len.hpp" 
#include "reverse.hpp"
#include "concat.hpp"
#include "shift.hpp"
#include "replace.hpp"

int main(){
	
	char str[] = "Hello my TA";
	
	char arr1[] = "Code ";
	char arr2[] = "Republic";
	
	char arr3[] = "123456789";
	
	std::cout << "Your length = "           << str_len(str)      << std::endl;
	std::cout << "Your reversed version = " << reverse(str)      << std::endl;
  	std::cout << "concat: "                 << concat(arr1,arr2) << std::endl;
	std::cout << "replace: "                << replace(arr1,'s') << std::endl;
	std::cout << "shift: "                  << shift(arr3,2)     << std::endl;

	return 0;

}

