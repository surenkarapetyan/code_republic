let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

function bin_search_it(arr, number){

	let begin = arr[0], 
		end = arr.length-1,
		mid = Math.floor(arr.length/2);
	if(number === arr[mid]) return true;
	
	while(begin !== end){
		if(number > mid){
			begin = mid;
			mid   = (begin+end)/2;
		}else if(number < mid){
			end = mid;
			mid = (begin+end)/2;
		}else return true;
	}
	return false;
	
}

function bin_search_rec(arr, number){

	mid = Math.floor(arr.length/2);

	if(arr.length === 1 & arr[0] !== number){
		return false;
	}

	if(arr[mid] === number){
		return true;
	}else if(arr[mid] > number){
		return bin_search_rec(arr.slice(0, mid), number);
	}else if(arr[mid] < number){
		return bin_search_rec(arr.slice(mid), number);
	}		
	
}

console.log(bin_search_it(arr, 9));
console.log(bin_search_rec(arr, 13));

