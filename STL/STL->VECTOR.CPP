#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>v;
    
    vector<int>a(4,1);
    
    vector<int>last(a);
    for(int i:last){
        cout<<i<<" ";
    }
    
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;
     v.push_back(2);
      cout<<"capacity->"<<v.capacity()<<endl;
      v.push_back(3);
       cout<<"capacity->"<<v.capacity()<<endl;
       cout<<"size->"<<v.size()<<endl;
       v.pop_back();
        cout<<"size->"<<v.size()<<endl;
        cout<<"first->"<<v.front()<<endl;
        cout<<"first->"<<v.back()<<endl;
        cout<<"which index->"<<v.at(1)<<endl;
        for(int i:v){
            cout<<i<<" ";
            
        }
       
       
}
