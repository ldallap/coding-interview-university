#include <iostream>

class Primes{
private:
	int N;
	bool *mask;
public:
	Primes(int n){
		N = n+1;
		mask = new bool[N];
		std::memset(mask,true,N);
	}
	~Primes(){
		delete [] mask;
	}
	void PrimeNumbers(){

		for(int i = 2; i*i<=N; i++){
			if(mask[i]){
				for(int j = 2*i; j<=N; j = j + i)
					mask[j] = false;
			}

		}

		for(int i = 2; i <= N; i++){
			if(mask[i]) std::cout << i << std::endl;
		}
	}

};

int main(){

	Primes PrimeNumber(22);
	PrimeNumber.PrimeNumbers();

	return 0;
}