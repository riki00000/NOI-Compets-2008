#include<iostream>

using namespace std;

struct Fract
{ long long p,q; };


int nod(long long a, long long b)
{ long long r = a%b;
  
  while(r > 0)
  { a = b;
    b = r;
    r = a%b;
  }
  
  return b;
}    
  
int main()
{   int k, n;
    cin >> k >> n;
    Fract s, x; 
    s.p = 0;
    s.q = 1;
    for(int a=k; a<n; a++)
      for(int b=a+1; b<=n; b++)
        if (nod(a,b) == 1)
          {x.p = a;
           x.q = b;
           long long p = s.p*x.q + s.q*x.p;
           long long q = s.q*x.q;
           int d = nod(p,q);
           s.p = p/d;
           s.q = q/d;
          }
    cout << s.p << "/" << s.q << endl;
    return 0;
}
          
          
          
          
          
          
