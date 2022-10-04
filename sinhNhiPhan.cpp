#include<bits/stdc++.h>
using namespace std;
int arr[100],n;
void init() {
    cin>>n;
    for(int i=1;i<=n;++i) {
        arr[i]=0;
    }
}
bool isLast() {
    for(int i=1;i<=n;++i) {
        if(arr[i]!=1) {
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
void genNext() {
    int i=n;
    while(i>=1&&arr[i]==1) {
        arr[i]=0;
        --i;
    }
    arr[i]=1;
}
int main() {
    init();
    display();
    while(!isLast()){
        genNext();
        display();
    }
}