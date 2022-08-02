function sum_of_digits(number){

	if(!(number%10)) return number;

	let sum = 0;
	while(number){
		
		sum += number%10;
		number = Math.floor(number/10);

	}
	return sum ;

}

function sub_of_mul_and_sum(number){
	
	if(!(number%10)) return 0;
	let sum = sum_of_digits(number);
	let mul = 1;
	while(number){
	
		if(!(number%10)){
			mul = 0;
			break;
		}else {
			mul *= number%10;
			number = Math.floor(number/10);
		}

	}

	return mul - sum;

}

function odd_numbers(begin, end){

	if((end-begin+1)%2 === 0){
		return (end-begin+1)/2;
	}else if( begin%2 ){
		return Math.ceil((end - begin + 1)/2);
	}else return Math.floor((end - begin + 1)/2);
	
}

console.log(odd_numbers(1,9));















