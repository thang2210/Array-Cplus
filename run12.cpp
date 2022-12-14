// Cho một dãy số nguyên chưa biết trước số lượng phần tử, hãy đếm tần xuất hiện của các số nguyên tố trong dãy và in ra theo thứ tự xuất hiện trong dãy




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


bool nt(int n){
    for (int i =2 ;i <= sqrt(n) ; i++){
        if (n % i == 0) return false;
    }
    return n>1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    map<int,int> v;
    while(cin >> t){
        if (nt(t)) v[t]++;
    }
    for (auto x : v){
        cout << x.first << " " << x.second << endl;
    }
}
