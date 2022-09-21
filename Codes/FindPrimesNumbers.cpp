#include <iostream>

/*Prime numbers are those divisible by one and itself only
Ex: 2,3,5,7,9,11*/

void printPrimes(int n){
	bool prime[n+1];

	for(int i = 2; i <= n ; i++) prime[i] = true;

	for(int j = 2; j*j <= n ; j++){
		if(prime[j]){
			for( int i = 2*j ; i <= n; i = i + j){ /*walk in length of yourself till you are less than n*/
				// std:: cout << i << "\t" << j << "\t" << i + j << std::endl; // Uncomment this line to understand the algo
				prime[i] = false;
			}
		}
	}

	for(int i=2; i<=n; i++) if(prime[i]) std::cout << i << std::endl;

}





int main(){

	printPrimes(30);

	return 0;
}

