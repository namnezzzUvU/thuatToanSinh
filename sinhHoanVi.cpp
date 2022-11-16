/* ví dụ, 
2 7 6 9 8 5 4 3 1
xét từ trái sang, tìm chỗ đầu tiên mà
arr[i]<arr[i+1] : ở đây là 6<9,i=3<i=4
đánh dấu arr[i]: ở đây là 6,i=3
lại xét từ bên trái sang, tìm
phần tử đầu tiên lớn hơn arr[i]
đó, ở đây là 6. Ta tìm đc 8,
đổi chỗ 6 với 8 cho nhau
sau đó reverse từ i=3+1, ở đây đã là 8.
đến hết. ta được dãy:
2 7 8 1 3 4 5 6 9
tiếp tục, 
2 7 8 1 3 4 5 9 6
*/
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