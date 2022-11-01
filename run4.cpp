//Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu phim đứng thành một hàng lớn. Mỗi người trong số họ có một tờ tiền mệnh giá 100, 50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có thể bán vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và bán vé theo đúng thứ tự mọi người trong hàng không?


#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

bool check(int a[] , int n){
    int c1 = 0 , c2 =0;
    for (int i =0; i < n ;i++){
        if (a[i] == 25) c1++;
        else if (a[i] == 50) {
            if (c1 == 0) return false;
            c1--;
            c2++;
        } else {
            if (c1 == 0 || (c1 * 25 + c2 * 50)) return false;
            else if (c1 != 0){
                c1-=2;
                c2--;
            } else c1 -= 3;
        }
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (auto &x : a) {
        cin >> x;
    }
    if (check(a , n)) cout << "YES";
    else cout << "NO";
}
