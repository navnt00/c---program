#include<iostream>
using namespace std;
int main(){

    int array[]={1,3,5,8};

    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;

    int array2[4];
    cout<<array2[0]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[4]<<endl;
    cout<<array2[7]<<endl;
    
}