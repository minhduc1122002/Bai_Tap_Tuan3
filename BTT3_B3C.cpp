#include<iostream>
using namespace std;
bool check(int s1) {
	int s2=s1;
	int s3=0;
	while(s2>0) {
		int temp=s2%10;
		s3=temp+s3*10;
		s2=s2/10;
	}
	if(s3==s1) {
		return 1;
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) {
		int a,b;
		cin >> a >> b;
		int dem=0;
		for(int j=a;j<=b;j++) {
			if(check(j)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
