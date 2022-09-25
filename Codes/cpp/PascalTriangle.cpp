#include <iostream>


int** PascalTriangle(int numrows = 43){

	int** values= new int* [numrows];
	for(int i=0; i<numrows; i++){
		values[i] = new int [i+1];
		values[i][0]=1;
		for(int j=1; j<i; j++){
			values[i][j] = values[i-1][j-1] + values[i-1][j];
		}
		values[i][i]=1;
	}
	return values;

}


int main(){

	int n = 6;
	int** ans = PascalTriangle(n);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j <= i ; j++){
			std::cout << ans[i][j] << " ";
		}
		std::cout<< std::endl;
	}

	return 0;	
}