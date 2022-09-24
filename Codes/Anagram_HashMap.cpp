#include <iostream>
#include <unordered_map>

using namespace std;




// sort(s.begin(), s.end());
// sort(t.begin(), t.end());
// int res = s.compare(t);
// if(res == 0) return true;
// else return false;


int main(){
		
	string s1 = "nameless";
	string s2 = "salesmen";

	int n = s1.size();

	if(n != s2.size()){
		cout << "It is not an anagram" << endl;
		return 1;
	} 

	//could also be an map
	unordered_map<char, int> mymap1;
	unordered_map<char, int> mymap2;
	for(int i=0; i<n; i++){
		mymap1[s1[i]]++;
		mymap2[s2[i]]++;
	}

	if(mymap1==mymap2) cout << "It is an anagram" << endl;
	else cout << "It is NOT an anagram" << endl;


	// cout << "Test passed!" << endl;
	return 0;
}