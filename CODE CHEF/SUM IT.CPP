#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
	return 0;
}
