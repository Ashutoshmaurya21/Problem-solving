#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b,c,r,s,t;
	    cin>>a>>b>>c;
	    if((a<b&&b<c)||(a>b&&b>c)){
	        r=abs(c-a);
	        cout<<r;
	    }
	    else if((b<a&&a<c)||(b>a&&a>c)){
	        s=abs(c-b);
	        cout<<s;
	}
	else {
	        t=abs(b-a);
	        cout<<t;
	}
	cout<<endl;
	
}
return 0;
}
