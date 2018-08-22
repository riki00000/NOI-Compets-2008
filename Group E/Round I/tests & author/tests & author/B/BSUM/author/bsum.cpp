#include <iostream>
using namespace std;
int count1(long a)
{int s=0;
 while (a)
 {s++;
  a&=(a-1);
 }
 return s;
}
long sum(long n)
{long s=0;
 for (long i=1;i<=n;i++) s+=count1(i);
 return s;
}
long sum1(long n)
{int k=0;
 long s,t=0;
 while (t<=n) {t=(t<<1)|1; k++;}
 t>>=1;
 k--;
 s=k*((long)1<<(k-1));
 for (long i=t+1;i<=n;i++) s+=count1(i);
 return s;
}
int main(void)
{long n;
 cin>>n;
// cout<<sum(n)<<endl;
 cout<<sum1(n)<<endl;
 return 0;
}
