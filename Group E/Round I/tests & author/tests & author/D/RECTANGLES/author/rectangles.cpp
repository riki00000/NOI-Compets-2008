#include<iostream>

using namespace std;

int main()
{ int S, a, sum = 0;
  cin >> S;
  for(int a=1; a*a <= S; a++)
    if (S % a == 0) sum++;
  cout << sum << endl;
  return 0;
}
