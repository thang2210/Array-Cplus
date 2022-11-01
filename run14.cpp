// Cho một dãy các số nguyên dương không quá 9 chữ số, mỗi số cách nhau vài khoảng trống, có thể xuống dòng. Hãy tìm các số không giảm (các chữ số theo thứ tự từ trái qua phải tạo thành dãy không giảm) và đếm số lần xuất hiện của các số đó.



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



bool check(int n){
    int tm = n  % 10; n /= 10;
    while (n != 0){
        int r = n % 10;
        if (r > tm) return false;
        tm = r;
        n /= 10;
    }
    return true;
}


bool cmp(pair<int,int> a , pair<int,int> b){
    if (a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    map<int,int> a;
    //vector<int> v;
    while(cin >> t){
        if (check(t)) a[t]++;
    }
    vector<pair<int,int>> res;
    for (auto x : a){
        res.push_back({x.first , x.second});

    }
    sort(res.begin() , res.end() , cmp);
    for (auto x : res){
        cout << x.first << " " << x.second << endl;
    }
}
