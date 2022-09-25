#include <iostream>
#include <vector>

using namespace std;




int main(){
		

	vector<int> vec{4, 2, 3, 9, 7, 5, 6, 7, 1, 3};

	int target = 4; //find the 4th greater element

	sort(vec.begin(), vec.end(), greater<int>());
	// vec.erase(unique(vec.begin(), vec.end()), vec.end());


	cout << vec[target-1] << endl;

	// cout << "Test passed!" << endl;
	return 0;
}