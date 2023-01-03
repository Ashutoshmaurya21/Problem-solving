#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b&&a>c){
	        cout<<"Alice";
	    }
	    else if(b>a&&b>c){
	        cout<<"Bob";
	        
	    }else
	    {
	        cout<<"Charlie";
	    }
	    cout<<endl;
	}
}
