#include <iostream> 
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>
#include <map>  
  
#define base 10
 
const int size=20000;
 
using namespace std;
 
char s[size];
 
int i;
 
struct Long{
 
    int a[size];
 
    void operator /= (const int &x)
    {
        int r=0,y;
         
                 
                 
        for (int i=1; i<=a[0]; i++)  
            {
                y=r*10+a[i];
                a[i]=y/x;
                r=y%x;
                            
            }
 
        reverse(a+1,a+a[0]+1);
 
        while (a[a[0]]==0&&a[0]>1) a[0]--;
         
        reverse(a+1,a+a[0]+1);
                         
    }
 
    bool operator < (const Long &x)
    {
        for (int i=0;i<=a[0];i++)
            {
                if (a[i]<x.a[i]) return 1;
                if (a[i]>x.a[i]) return 0;          
            }
 
        return 0;   
    }
 
    bool operator == (const Long &x)
    {
        for (int i=0;i<=a[0];i++)
                if (a[i]!=x.a[i]) return 0;
                 
        return 1;   
    }
 
};             
Long p,t,x;
 
void write(Long t)
{  
    for (int i=1;i<=t.a[0];i++)
        printf("%d",t.a[i]); 
}
 
 
int main()
{
  
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  
    char s[100000];
 
    scanf("%s", s);
    p.a[0]=strlen(s);
 
    for (i=0; i<p.a[0]; i++)
        p.a[i+1]=s[i]-48;
 
    scanf("%s", s);
     
    t.a[0]=strlen(s);
 
    for (i=0; i<t.a[0]; i++)
        t.a[i+1]=s[i]-48;
        
    int san=0;
    for (i=1;i<=t.a[0];i++)
        san=san*10+t.a[i];
 
    p/=san;
    write(p);
    
                 
    fclose(stdin);
    fclose(stdout);
  
    return 0;
  
}
