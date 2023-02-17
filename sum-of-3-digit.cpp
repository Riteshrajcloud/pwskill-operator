//First Solution
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,rem,sum=0;
 cin>>n;
 while (n>0){
     rem=n%10;
     sum+=rem;
     n/=10;
 }
 cout<<sum;
}

//Second Solution
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,fd,sd,td,sum;
 cin>>n;
 fd=n/100;
 n%=100;
 sd=n/10;
 td=n%10;
 sum=fd+sd+td;
 cout<<sum;
}
