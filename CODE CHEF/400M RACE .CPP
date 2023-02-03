#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int u,v,o,x;
	    cin>>u>>v>>o;
	    x=min(u,min(v,o));
	    if(x==u){
	        cout<<"alice";
	    }
	    if(x==v){
	        cout<<"bob";
	    }
	    if(x==o){
	        cout<<"charlie";
	    }
	    cout<<endl;
	}
	return 0;
}
