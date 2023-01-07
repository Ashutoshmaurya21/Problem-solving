#include<iostream>
using namespace std;

int binaryseach(int arr[],int size,int target){
    int first=0;
    int end=size-1;
    int mid=(first+end)/2;
    while(first<=end){
         int mid=(first+end)/2;
       
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            first=mid+1;
        }
        else{
            end=mid-1;
        }
       
    }
    return -1;
}




int main(){
    
    int even[7]={2,4,6,8,10,12,14};
    int odd[9]={1,3,5,7,9,11,13,15,17};
    
    int indexeven=binaryseach(even,7,10);
    cout<<indexeven<<endl;
     int index1even=binaryseach(even,7,12);
    cout<<index1even<<endl;
    int indexodd=binaryseach(odd,9,10);
    cout<<indexodd;
    
    return 0;
    
    
}
