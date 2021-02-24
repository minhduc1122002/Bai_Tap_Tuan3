#include<iostream>
using namespace std;
int main() {
	string s1,s2;
	cin >> s1;
	for(int i=0;i<s1.length();i++) {
		s2=s2+s1[i];
	}
	if(s2==s1) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
