#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;
    if(a<=70){
        cout<<0;
    }
    else if(a<=100){
        cout<<500;
    }
    else{
        cout<<2000;
    }
    cout<<endl;
}
	return 0;
}
