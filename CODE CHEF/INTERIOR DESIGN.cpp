#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
while(n--){
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=a+b;
    y=c+d;
    if(x>=y){
        cout<<y;
    }
    else{
        cout<<x;
        
    }
    cout<<endl;
}
	return 0;
}
