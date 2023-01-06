#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
for(int i=0;i<n;i++){
    float a,b,c;
    float r;
    cin>>a>>b>>c;
    r=(a+b)/2;
    if(r>c)
        cout<<"YES";
        else
        cout<<"NO";
   cout<<endl;
}

	return 0;
}
