#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a>=2*b){
	        cout<<"yes";
	        
	    }
	    else{
	        cout<<"no";
	    }
	    cout<<endl;
	}
	return 0;
}
