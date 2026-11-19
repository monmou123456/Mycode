#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector <long long> p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    long long g=0;
    
    for(int i=0;i<n-1;i++)
    {
 long long  k=abs(p[i]-p[i+1]);
    g=__gcd(g,k);
    }
    if(g==0)
    {
        cout<<1<<" 0"<<endl;
    }
    else{long long  m=(g-p[0]%g)%g;
    cout<<g<<" "<<m<<endl;
    }

}



