#include <iostream>
using namespace std;
int main() {
    int n,s;
    cin >> n >> s;
    int max=s,min=s,x=0,d=0;
    if(s%2) {
    	d++; 
	} 
	else {
		x+=s;
	}
    for (int i=1;i<n;i++) {
        cin >> s;
        if(s>max) {
        	max=s;
		}
        if(s<min) {
        	min=s;
		}
        if(s%2) {
        	d++;
		} 
		else {
			x+=s;
		}
    }
    cout << min << endl << max << endl << x << endl << d;
    return 0;
}
