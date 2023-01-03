#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b,c,d;
	    cin>>a>>b;
	    c=10*a;
	    d=(10*b)/2;
	   if(c==d){
	       cout<<"ANY";
	   }
	   else if(c>d){
	       cout<<"FIRST";
	   }
	   else{
	       cout<<"SECOND";
	   }
	    cout<<endl;
	}
	return 0;
}
