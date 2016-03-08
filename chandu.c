#include <stdio.h>
#include <string.h>
#define si(n) scanf("%d",&n)
#define ss(s) scanf("%s",&s)


 
int main()
{
   int n,i,l,j;
   char s[10][10],t;
   
   si(n);
   for(j=0;j<n;j++){
   		scanf("%s",&s[j]);
   		l=strlen(s[j]);
   		for(i=0;i<l/2;i++){
   			t=s[j][i];
   			s[j][i]=s[j][l-i-1];
   			s[j][l-i-1]=t;
   		}
   }
   
   for(j=0;j<n;j++){
   		printf("%s\n",s[j]);
   }
   
}

