#include<cstdio>
#include<cstdlib>

int a,b,c;
int v[6];

int main()
{
  scanf("%d%d%d", &a, &b, &c);
  
  v[0]=a+b;
  v[1]=a*b;
  v[2]=a+a;
  v[3]=b+b;
  v[4]=a*a;
  v[5]=b*b;
  
  int d=abs(v[0]-c);
  for(int i=1;i<=5;i++) 
   { int r=abs(v[i]-c);
     if(r<d) d=r;
   }
   
  int t=999999;
  for(int i=0;i<=5;i++)
  if(abs(v[i]-c)==d)
  if(t>v[i]) t=v[i];
   
  printf("%d\n",t);
    
}
