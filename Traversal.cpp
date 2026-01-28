#include<iostream>
using namespace std;
int main(){
    const int max=50;
    int a[max],size,i;
    cout<<"Enter Size of Array :";
    cin>>size;
    if(size<1 || size>50){
        cout<<"Please enter size between 0 and 51(both excluding) ";
        return 0;
    }
    cout<<"Enter Elements of Array :"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Dispaying Array Elements :"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}