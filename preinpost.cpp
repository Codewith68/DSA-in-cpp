#include<iostream>
using namespace std;
void pip (int n){
if(n==0) return;
cout<<"pre"<<n<<endl;
pip(n-1);
cout<<"in"<<n<<endl;
pip(n-1);
cout<<"post"<<n<<endl;
}
 main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    pip(n);
}