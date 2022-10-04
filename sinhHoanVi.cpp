#include<bits/stdc++.h>
using namespace std;
int arr[100],n;
void init() {
    cin>>n;
    for(int i=1;i<=n;++i) {
        arr[i]=i;
    }
}
bool isLast() {
    for(int i=1;i<=n;++i) {
        if(arr[i]!=n-i+1) {
            return false;
        }
    }
    return true;
}
void display() {
     for(int i=1;i<=n;++i) {
        cout<<arr[i];
     }
     cout<<endl; 
}
void Swap(int &a,int &b) {
    int temp=a;
    a=b;
    b=temp;
}
void Reverse(int i) {
    for(int j=i;j<=(n+i)/2;++j) {
        Swap(arr[j],arr[n+i-j]);
    }
}
void genNext() {
    int i=n-1;
    while(i>=1&&arr[i]>arr[i+1]) {
        --i;
    }
    int k=n;
    while(arr[k]<arr[i]) {
        k--;
    }
    Swap(arr[k],arr[i]);
    Reverse(i+1);
}
int main() {
    init();
    display();
    while(!isLast()){
        genNext();
        display();
    }
}