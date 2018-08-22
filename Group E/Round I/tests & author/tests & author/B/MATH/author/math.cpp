#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int x, int y)
{ return x > y; }

int main()

{ int n, k;
  cin >> n >> k;
  int a[32];
  for(int i=0; i<n; i++)
    cin >> a[i];
  sort(a+1, a+n, comp);
  int s = a[0];
  for(int i=1; i<=n-k-1; i++)
    s = s + a[i];
  for(int i=n-k; i<n; i++)
    s = s - a[i];
  cout << s << endl;
  return 0;
}
