#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n";
    //1 5 9 13.....
    cin>>n;
    for(int i=1;i<=4*n-3;i=i+4){
        cout<<i<<endl;
    }
}
