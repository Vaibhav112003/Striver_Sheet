#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void merge(int arr[] , int s , int e){

int mid = (s+e)/2;
int len1 = mid-s+1;
int len2 = e-mid;

int *first = new int[len1];
int *second = new int[len2];

int arrayindex = s;
for(int i = 0; i<len1; i++){
    first[i] = arr[arrayindex++];
}
arrayindex = mid+1;
for(int i = 0; i<len2; i++){
    second[i] = arr[arrayindex++];

}


int index1 = 0 , index2 = 0;
arrayindex = s;

while(index1<len1 && index2<len2){
    if(first[index1] < second[index2]){
        arr[arrayindex++] = first[index1++];
    }
    else{
        arr[arrayindex++] = second[index2++];
    }
}

while(index1 < len1){
    arr[arrayindex++] = first[index1++];

}
while(index2 < len2){
    arr[arrayindex++] = second[index2++];

}


delete[] first;
delete[] second;

}
void countpairs(int arr[] , int low  , int mid , int high){
  int right = mid+1;
  for(int i = low; i<=mid; i++){
    while(right<=high && arr[i] > 2*arr[right]){
        right++;
    }
    cnt += (right-(mid+1));
  }
}
void twosum(int arr[] , int s , int e){

    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    twosum(arr , s , mid);
    twosum(arr , mid+1 , e);
    countpairs(arr , s , mid , e);
    merge(arr , s , e);


}
int team(int arr[] , int n){
    twosum(arr , 0 , n-1);
    return cnt;
}

int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];

}


cout<<team(arr , n);
    return 0;
}