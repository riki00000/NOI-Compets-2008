#include <iostream>
using namespace std;
int M1,N1,M2,N2;
int arr(int M,int W,char *r)
{int i=0;
 r[i++]='1';M--;
 if (!M) {r[i++]='0';
          W--;
          if (!W) {r[i]=0; return 1;}
          return 0;
         }
 while (M>0 && W>0)
 {r[i++]='0';W--;
  if (W) {r[i++]='0';W--;}
  r[i++]='1';M--;
  if (M) {r[i++]='1';M--;}
 }
 if (W) return 0;
 while (M--) r[i++]='1';
 r[i]=0;
 return 1;
}
int main(void)
{char b[256];
 cin>>M1>>N1;
 cin>>M2>>N2;
 if (arr(M1,N1,b)) cout<<b<<endl; else cout<<"NO\n";
 if (arr(M2,N2,b)) cout<<b<<endl; else cout<<"NO\n";
 return 0;
}
