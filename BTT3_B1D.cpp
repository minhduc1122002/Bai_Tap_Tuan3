#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double sum=0,PS=0,TB;
    double a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    TB=sum/n;
    for (int i=0;i<n;i++) {
    	PS=PS+(a[i]-TB)*(a[i]-TB);
	}
    cout << TB << endl << PS/n;
    return 0;
}
