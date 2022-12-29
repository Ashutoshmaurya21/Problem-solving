#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	   if(a>=b){
	       cout<<a-b;
	   }
	   else
	   {
	   cout<<0;
	   }
	   cout<<endl;
	}
	return 0;
}
