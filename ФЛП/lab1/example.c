#include <stdio.h>

int check_factorial_iterate(int number){
	if(number < 0) 
		return 0;
	if(number == 0) 
		return 1;
	int i = 1;
	int n = 1;
	for(;n<number;n*=i,i++){
		
		if(number%i != 0)
			return 0;
	}
	return 1;
}

int check_factorial_recursive(int number, int i){
	if(number < 0) 
		return 0;	
	if(number == 0)
		return 1;

	if(number == 1)
		return 1;
	
	if( number%i != 0)
		return 0;
	else		
		return check_factorial_recursive(number/i,i+1);
	
}

int main(){
	int number = 362881;

	if(check_factorial_iterate(number))
		printf("%s\n","yes");
	else
		printf("%s\n","no");

	if(check_factorial_recursive(number,1))
		printf("%s\n","yes");
	else
		printf("%s\n","no");

	return 0;
}
