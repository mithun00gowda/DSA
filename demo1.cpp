#include <iostream>

int main(){
	int a,b ;
	
	std::string tab[10] {"zero","one","two","three","four","five","sixth", "seven", "eight", "nine"};
	std::cin >> a ;
	std::cin >> b ; 
	
	for(int k=a;k<b+1;k++){
		if ( k >= 1 && k <= 9 ){
			std::cout << tab[k] << std::endl; 
		}
		else if ( k % 2 == 0){
			std::cout << "even" << std::endl;
		}
		else if ( k % 2 != 0){
			std::cout << "odd" << std::endl;
		}
	}

	return 0;

}