#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 while(n--){
     int a,count=0;
     cin>>a;
     int arr[a];
    for(int i=0;i<a;i++){
        
         cin>>arr[i];
         if(arr[i]>=1000)
             count++;
         
         
     }
     cout<<count<<endl;
 }
	return 0;
}
