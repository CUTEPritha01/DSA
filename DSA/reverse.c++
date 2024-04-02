#include<iostream>
using namespace std;
void reversevalue(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
         swap(arr[start],arr[end]);
         start++;
         end--;
    }
}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[]={7,9,8,6,5,3};
    int N=6;
    reversevalue(arr,N);
    printarray(arr,N);
}

