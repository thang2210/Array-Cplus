// Trộn 2 dãy và sắp xếp


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
    int a[n] , b[n];
    for (auto &x : a){
        cin >> x;
    }
    for (auto &x : b){
        cin >> x;
    }
    sort(a , a+n );
    sort(b , b + n , greater<int>());
   /* for (int  i =0 ;i < n ; i++){
        cout << a[i] << " " << b[i] << " ";
    }*/
    int i =0 , j =0;
    while (i < n && j < n){
        cout << a[i] << " " << b[j] << " ";
        i++; j++;
    }
}
