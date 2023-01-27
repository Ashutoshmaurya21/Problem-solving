#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b,r,q;
	    cin>>a>>b;
	    r=(a*10/100)+a;
	    q=a-b;
	    cout<<r-q<<endl;
	    
	}
	return 0;
}
