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

void genNext() {
    int i=n-1;
    while(i>=1&&arr[i]>arr[i+1]) {
        --i;
    }
    int k=n;
    while(arr[k]<arr[i]) {
        k--;
    }
    swap(arr[k],arr[i]);
    reverse(arr+i+1,arr+n+1);
}
int main() {
    init();
    display();
    while(!isLast()){
        genNext();
        display();
    }
}