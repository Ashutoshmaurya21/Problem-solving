#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a<3){
	        cout<<"LIGHT";
	    }
	    else if(a>=7){
	        cout<<"HEAVY";
	    }
	    else{
	        cout<<"MODERATE";
	    }
	    cout<<endl;
	}
	return 0;
}
