#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b,c,d;
	    cin>>a>>b>>c;
	    d=a+b+c;
	    if(a>=10 &&b>=10&& c>=10 && d>=100){
	        cout<<"PASS";
	    }else{
	        cout<<"FAIL";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
