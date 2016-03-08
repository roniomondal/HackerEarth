#include <stdio.h>
#include <string.h>

int main()
{
	char string[10];
	int i,j,k;
    scanf("%s",&string);
    
    int l=strlen(string);
    
    for(i=0,k=0;i<l;i++,k++){
    	for(j=i+1;j<l;j++){
    		if(string[i]!=string[j])
    			break; 		   		
		}
    }
   
    
    printf("%s",&string);
    
    return 0;
}

