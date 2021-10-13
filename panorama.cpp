#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin>>n>>m;

  while (++n)
  {
    bool can = true;
    for (int i=2; i<n; i++)
    {
      if (n % i == 0)
      {
        can = false;
        break;
      }
    }
    if (can)
    {
      if (n == m) cout << "YES";
      else cout << "NO";
      break;
    }
  }

  return 0;
}