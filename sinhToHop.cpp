/*tổ hợp chập k của n
ở phần tử thứ i, sô lớn nhất mà nó có
thể đạt đc là n-k+i. 
ví dụ a1a2a3, tổ hợp chập 3 của 6
thì a2 số lớn nhất nó đạt đc là 6-3+2-5
ta xét từ trái sang, nếu nó ptu đó
max thì --i, tìm ptu đầu tiên chưa max.
cộng ptu đó 1 đơn vị, rồi sắp xếp các ptu sau 
tăng dần theo ptu vừa tăng.
ví dụ
chập 3 của 6
123
124
125
126
134
135
136
145
146
156
234
...
*/
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