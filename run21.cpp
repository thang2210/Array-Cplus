//Dãy số ưu thế


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
    int t;
    int c =0 , l = 0;
    vector<int> res;
    while(cin >> t){
        res.push_back(t);
        if (t % 2 == 0) c++;
        else l++;
    }
    if ((res.size() % 2 == 0 && c > l) || res.size() % 2 == 1 && c < l) cout << "yes";
    else cout << "Np";
}
