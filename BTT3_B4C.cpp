#include <iostream>
using namespace std;
int main () {
	int m,n;
	cin >> m >> n;
	char a[m][n];
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			if(a[i][j]=='.') {
				a[i][j]+=2;
				if(a[i-1][j-1]=='*') {
					a[i][j]+=1;
				}
				if(a[i][j-1]=='*') {
					a[i][j]+=1;
				}
				if(a[i-1][j]=='*') {
					a[i][j]+=1;
				}
				if(a[i+1][j-1]=='*') {
					a[i][j]+=1;
				}
				if(a[i-1][j+1]=='*') {
					a[i][j]+=1;
				}
				if(a[i][j+1]=='*') {
					a[i][j]+=1;
				}
				if(a[i+1][j]=='*') {
					a[i][j]+=1;
				}
				if(a[i+1][j+1]=='*') {
					a[i][j]+=1;
				}
			}
		}
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
