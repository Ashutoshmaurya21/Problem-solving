#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b;
	    c=a+200;
	    if(a<=b && b<=c){
	        cout<<"YES";
	        
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
