#include<iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			a[i][j]=0;
		}
	}
	int z=2,x=0,y=n/2;
	a[x][y]=1;
	while(z<=n*n) {
		x--;
		y++;
		if(x==-1) {
			x=n-1;
		}
		if(y==n) {
			y=0;
		}
		if(a[x][y]!=0) {
			y--;
			x+=2;
			if(y==-1) {
				y=n-1;
			}
			if(x==n) {
				x=0;
			}
			if(x==n+1) {
				x=1;
			}
		}
		a[x][y]=z;
		z++;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
