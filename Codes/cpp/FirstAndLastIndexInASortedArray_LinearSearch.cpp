#include <iostream>
#include <array>

using namespace std;




// sort(s.begin(), s.end());
// sort(t.begin(), t.end());
// int res = s.compare(t);
// if(res == 0) return true;
// else return false;


int main(){

	array<int, 10> arr = {2,4,5,5,5,5,5,7,9,9};

	int target = 5;
		
	int start = 0;
	int end = 0;

	int N = sizeof(arr)/sizeof(arr[0]);

	for(int i=0; i<N; i++){
		if(arr[i] == target){
			start = i;
			while( i+1 < N & arr[i+1]==target){
				i++;
			}
			end = i;
		}
	}
	cout << start << " " << end << endl;

	return 0;
}