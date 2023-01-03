#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a<b){
	        cout<<"YES";
	    }
	    else{
	        cout<<"No";
	    }
	    cout<<endl;
	}
	return 0;
}
