#include<iostream>
#include<limits.h>
using namespace std;
int setmini(int a[],int n){
    int mini= INT_MAX;
    for( int i=0;i<n;i++){
       if (a[i]< mini){
        mini=a[i];
       }
    }
  return mini;
}

int setmax(int a[],int n){
    int max= INT_MIN;
    for( int i=0;i<n;i++){
       if (a[i]> max){
        max=a[i];
       }
    }
    return max;
}



int main(){
    int a[]={2,3,8,1,9,7,8};
    int N=7;
    cout<<setmini(a,N)<<endl;
    cout<<setmax(a,N)<<endl;

}

