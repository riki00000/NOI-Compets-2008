#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int freadint(FILE *f, char *b, int bsize, int cnt, int ressize, void *res)
{union {char c;
	int i;
	long l;} r;
 int i,p;
 char *e;
 b[0]=0;
 do
  fgets(b,bsize,f);
 while (*b=='\n');
 if (!b) return 0;
 for (i=0;i<bsize&&b[i]&&b[i]!='\n';i++);
 b[i]=' ';
 b[i+1]=0;
 p=0;
 for (i=0;i<cnt;i++)
 {while (b[p]==' '||b[p]=='\t') p++;
  r.l=strtol(&b[p],&e,10);
  if (*e!=' ' && *e!='\t') return 0;
  switch (ressize)
  {case 1:((char *)res)[i]=r.c; break;
   case 2:((int *)res)[i]=r.i; break;
   case 4:((long *)res)[i]=r.l; break;
   default: return 0;
  }
  p=e-b;
 }
 return 1;
}

int check(int m,int w, char *r)
{int i,l,m1=0,w1=0;
 if (m==1 && w==1) return !strcmp(r,"01")||!strcmp(r,"10");
 if (m<w || m==w && (m&1)) return !strcmp(r,"NO");
 l=strlen(r);
 r[l]=r[0];
 if (r[l]=='1') m++;
 if (r[l]=='0') w++;
 for (i=0;i<=l;i++)
  switch (r[i])
  {case '1':{w1=0;
             m--; if (m<0) return 0;
             m1++;
             break;
            }
   case '0':{if (i>1 && m1==1) return 0;
             m1=0;
             w--; if (w<0) return 0;
             w1++; if (w1>2) return 0;
             break;
            }
   default: return 0;
  }
 return !m && !w;
}

int main(int argc, char *argv[])
{FILE *f;
 char buf[16],res[256];
 int a[2],b[2],i;

 if (argc!=4)
 {printf("Argument error\n");
  return 0;
 }
 if (!(f = fopen(argv[1], "r")))      // input file
 {printf("Cannot open input.\n");
  return 0;
 }
 if (!freadint(f,buf,6,2,2,a)||a[0]<1||a[0]>100||a[1]<1||a[1]>100)
 {printf("Wrong input file.\n");
  fclose(f);
  return 0;
 }
 if (!freadint(f,buf,6,2,2,b)||b[0]<1||b[0]>100||b[1]<1||b[1]>100)
 {printf("Wrong input file.\n");
  fclose(f);
  return 0;
 }
 fclose(f);
/*
 if (!(f = fopen(argv[3], "r")))    // solution file
 {printf("Cannot open solution.\n");
  fclose(f);
  return 0;
 }
*/
 if (!(f = fopen(argv[2], "r")))    // competitor file
 {printf("0\nCannot open result.\n");
  fclose(f);
  return 0;
 }
 if (!fgets(res,201,f))
 {fclose(f);
  printf("0\nEmpty output file.\n");
  return 0;
 }
 res[strlen(res)-1]=0;
 if (!check(a[0],a[1],res))
 {fclose(f);
  printf("0\nWrong table 1.\n");
  return 0;
 }
 if (!fgets(res,201,f))
 {fclose(f);
  printf("0\n No table 2.\n");
  return 0;
 }
 res[strlen(res)-1]=0;
 if (!check(b[0],b[1],res))
 {fclose(f);
  printf("0\nWrong table 2.\n");
  return 0;
 }
 fclose(f);
 printf("10\nCorrect solution.\n");
 return 0;
}
