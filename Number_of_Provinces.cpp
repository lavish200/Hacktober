//Created by HARDIK MITTAL
/*
Problem : There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

Return the total number of provinces.

Input: n = 3, isConnected = [[1,1,0],[1,1,0],[0,0,1]]
Output: 2

Input: n = 3, isConnected = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3
*/
#include <bits/stdc++.h>
#define ll long long
#define vl vector <ll>
#define PB push_back
#define MP make_pair
using namespace std;

int findCircleNum(vector<vector<int>>& isConnected)
{
    long long int i,j,n=isConnected[0].size();
    long long int cont=0;
    vector<long long int> node[n+1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if((i!=j)&&(isConnected[i-1][j-1]==1))
            {
                node[i].push_back(j);
                node[j].push_back(i);
            }
        }
    }

    bool vis[n+1];
    memset(vis,0,sizeof(vis));
    queue<long long int> q;

    for(i=1; i<=n; i++)
    {
        if(vis[i]==false)
        {
            cont++;
            vis[i]=true;
            q.push(i);
            while(!q.empty())
            {
                int par = q.front();
                q.pop();

                for(auto x: node[par])
                {
                    if(vis[x]==false)
                    {
                        q.push(x);
                        vis[x]=true;
                    }
                }
            }
        }
    }

    return cont;
}

void solve()
{
    int i,j,n;
    cin>>n; //Enter total number of cities

    vector<vector<int>> isConnected(n);
    for(i=0;i<n;i++)
    {
        isConnected[i].resize(n);
        for(j=0;j<n;j++)
        {
            cin>>isConnected[i][j]; //Input only 1 or 0
        }
    }

    int result = findCircleNum(isConnected);
    cout<<result<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases=1;
    while(test_cases--)
    {
        solve();
    }
    return 0;
}
