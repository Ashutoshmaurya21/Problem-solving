#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(b>a){
	    cout<<abs(b-a);}
	    else{
	        cout<<0;
	    }
	    cout<<endl;
	}
	return 0;
}
