//Cho một mảng các số nguyên, sắp xếp các phần tử trong mảng sao cho, các phần tử lẻ đứng trước và giảm dần, các phần tử chẵn đứng sau và tăng dần. Xem thêm ví dụ để hiểu rõ hơn yêu cầu.



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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    vector<int> c , l;
    for (int i =0 ; i < n ;i++){
        cin >> a[i];
        if (a[i] % 2 == 0) c.push_back(a[i]);
        else l.push_back(a[i]);
    }
    sort(begin(l) , end(l) , greater<int> ());
    sort(begin(c) , end(c));
    for (auto x : l) cout << x << " ";
    for (auto x : c) cout << x << " ";

}
