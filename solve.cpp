#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,l;cin>>n>>l;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
     double maxdist=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
       maxdist=max(maxdist,(v[i+1]-v[i]));
    }
    double maxi=INT_MIN;
    maxi=max(maxi,max(v[0]-0,l-v[n-1]));
    double ans=maxdist/2;
    cout<<max(maxi,ans);
}


