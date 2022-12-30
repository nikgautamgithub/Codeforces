/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥
*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<queue>
#include<stack>



//Swastik Sharma
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int,int>
#define vi                      vector<int>
#define mii                     unordered_map<int,int>
#define me(i,start,end)         for(int i =start; i<end; ++i)
#define she(i,start,end)        for(int i =end-1; i>=start; --i)
#define all(v)                  v.begin() , v.end()
#define w(x)                    int x;cin>>x;while(x--)

using namespace std;


bool comp(ll int&a, ll int &c) {return a>c;}

void solve()
{
    //your code goes here
    ll int n,m;
    cin>>n>>m;
    
    vector<ll int> a(n);
    for(ll int &val : a)cin>>val;

    vector<ll int> b(m);
    for(ll int &val : b) cin>>val;

    sort(all(b),comp);

    for(ll int i = 0; i<min(n,m); ++i)
    {
        auto a_it = min_element(all(a));

        auto b_it = max_element(all(b));

        ll int a_ind = a_it - a.begin();
        ll int b_ind = b_it - b.begin();

        a[a_ind] = b[b_ind];
        b.erase(b_it);
    }
    ll int sum = 0;
    cout<<accumulate(all(a),sum)<<endl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }return 0;
}
