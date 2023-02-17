#include<bits/stdc++.h>
using namespace std;
bool equal(int num1,int num2){
    if(num1<num2 && num1<50){
        return true;
    }
    return false;
}
int main(){
    int a,b;
    cout<<"enter two number:";
    cin>>a>>b;
    cout<<equal(a,b);
}
