#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	int sum_of_time=0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int j=0;
	while(j<n) {
		for(int i=j+1;i<n;i++) {
			sum_of_time+=a[j];
		}
		j++;
	}
	cout << sum_of_time;
	return 0;
}
