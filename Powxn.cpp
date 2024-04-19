#include<bits/stdc++.h>
using namespace std;

double  pow(double x, int n){
 if(n==0){
    return 1;

 }

double  ans = 1;
long long nn = n;

if(nn<0){
    nn = -nn;

}

for(long long i = 0;i<nn; i++){
    ans = ans*x;
}
if(n<0){
    ans = 1/ans;
}

return ans;
}
int main()
{
        
    double x;
    cin>>x;
    int n;
    cin>>n;

    cout<<pow(x,n);

    return 0;
} // namespace name
