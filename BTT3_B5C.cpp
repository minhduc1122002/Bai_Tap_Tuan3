#include<iostream>
using namespace std;
int main() {
	int x,y;
	cin >> x >> y;
	int a[x][y];
	int z=1;
	int temp_x=x;
	int temp_y=y;
	int u=0;
	while(z<=x*y) {
		for (int j=u;j<temp_y;j++) {
			a[u][j]=z;
			z++;
		}
        for (int i=u+1;i<temp_x;i++) {
			a[i][temp_y-1]=z;
			z++;
		}
        for (int k=temp_y-1-1;k>=u;k--) {
			a[temp_x-1][k]=z;
			z++;
		}
        for (int l=temp_x-1-1;l>u;l--) {
			a[l][u]=z;
			z++;
		}
        u++;
        temp_x--;
        temp_y--;
	}
	for(int i=0;i<x;i++) {
		for(int j=0;j<y;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
