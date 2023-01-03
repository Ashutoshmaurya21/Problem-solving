#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"ANY";
        }
        else if(a<b){
            cout<<"FIRST";
        }
        else{
            cout<<"SECOND";
        }
        cout<<endl;
    }
    
}
