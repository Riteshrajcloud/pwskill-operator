#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,sd,fd,td,ftd,fid;
 cin>>n;
 fd=n/10000;
 n=n%10000;
 sd=n/1000;
 n=n%1000;
 td=n/100;
 n=n%100;
 ftd=n/10;
 fid=n%10;
 cout<<fd+ftd;
}
