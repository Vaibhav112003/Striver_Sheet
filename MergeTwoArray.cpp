#include<bits/stdc++.h>
using namespace std;

void mergearray(int num1[] , int num2[] , int n1 , int n2 , long long int num3[]){


int i = 0;
int j = 0;
int index = 0;
while(i<n1 && j<n2){
    if(num1[i] <= num2[j]){
        num3[index] = num1[i];
       
        i++;
        index++;
    }
    else{
         num3[index] = num2[j];
         
         j++;
         index++;
    }
}
while(i<n1){
    num3[index++] = num1[i++];
}
while(j<n2){
    num3[index++] = num2[j++];
}


}

int main(){

int n1;
cin>>n1;

int n2;
cin>>n2;

int num1[n1];
int num2[n2];
long long int num3[n1+n2];
for(int i = 0; i<n1; i++){
    cin>>num1[i];
}
for(int i = 0; i<n2; i++){
    cin>>num2[i];
}

mergearray(num1 , num2 ,n1 ,n2 , num3);
int c = n1+n2;
for(int i = 0; i<c; i++){
    cout<<num3[i]<<" ";
}
    return 0;
}