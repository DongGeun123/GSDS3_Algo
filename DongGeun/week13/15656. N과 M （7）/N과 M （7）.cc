#include <bits/stdc++.h>
using namespace std;
int arr[10];
int res[10];
int n,m;
bool isused[10];

void func(int k)
{
    if (k==m)
    {
        for (int i=0;i<m;i++)
        {
            cout<<res[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for (int i=0;i<n;i++)
    {
        if(!isused[i])
        {
            res[k]=arr[i];
            //isused[i]=1;
            func(k+1);
            isused[i]=0;
        }
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    cin >> n>>m;
    for (int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    func(0);
}
