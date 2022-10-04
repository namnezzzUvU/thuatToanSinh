/*đếm từ phải sang, nếu =1 thì giảm dần
bit đầu tiên khác 1 thì ta giảm bit
đó đi 1 đơn vị,đánh dấu=k. đếm số các số 1 vừa giảm dần lúc nãy rồi cộng thêm 1 = p,
gán biến cnt=k,rồi ta tìm số dư và thương của p đối với k. in ra đằng sau.
*/
#include <bits/stdc++.h>
using namespace std;
int arr[1000], n, cnt;
void init()
{
    cin >> n;
    arr[1] = n;
    cnt = 1;
}
bool isLast()
{
    for (int i = 1; i <= n; ++i)
    {
        if (arr[i] != 1)
        {
            return false;
        }
    }
    return true;
}
void display()
{
    for (int i = 1; i <= cnt; ++i)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
} 
void genNext() {
    int i=cnt;
    while(i>=1&&arr[i]==1) {
        i--;
    }
    --arr[i];
    int p=cnt-i+1;
    cnt=i;
    int sodu=p%arr[i];
    int thuong=p/arr[i];
    if(thuong!=0) {
        for(int j=1;j<=thuong;++j) {
            ++cnt;
            arr[cnt]=arr[i];
        }
    }
    if(sodu!=0) {
        ++cnt;
        arr[cnt]=sodu;
    }
}
int main() {
    init();
    display();
    while(!isLast()) {
        genNext();
        display();
    }
}