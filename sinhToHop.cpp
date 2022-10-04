#include<bits/stdc++.h>
using namespace std;
int arr[100],n,k;
void init() {
    cin>>n>>k;
    for(int i=1;i<=k;++i) {
        arr[i]=i;
    }
}
bool isLast() {
    for(int i=1;i<=k;++i) {
        if(arr[i]!=n-k+i) {
            return false;
        }
    }
    return true;
}
void display() {
     for(int i=1;i<=k;++i) {
        cout<<arr[i];
     }
     cout<<endl; 
}
void genNext() {
    int i=k;
    while(i>=1&&arr[i]==n-k+i) {
        --i;
    }
    ++arr[i];
    for(int j=i+1;j<=k;++j) arr[j]=arr[i]+j-i;
}
int main() {
    init();
    display();
    while(!isLast()){
        genNext();
        display();
    }
}