#include <stdio.h>
#include <string.h>

int main()
{
	char string[10][10];
	int i,j,k,n,c;
	scanf("%d",&n);
	
	for(c=0;c<n;c++)		
    	scanf("%s",&string[c]);
    
    for(c=0;c<n;c++){
	
    	int l=strlen(string[c]);
	    for(i=0,j=0;i<l;i++,j++){
	    	
	    	if(string[c][i]==string[c][i+1]){
	    		string[c][j]=string[c][i];
	    		//i++;
	    		
	    		for(k=i;k<l;k++){
	    			if(string[c][k]!=string[c][k+1])
	    				break; 	
						
					i++;	   		
				}
				
	    	}
	    	else{
	    		string[c][j]=string[c][i];
	    	}
	    }
	    string[c][j++]=string[c][i];
    	string[c][j]='\0';
	}	
    
    for(c=0;c<n;c++)
    	printf("%s\n",&string[c]);
    
    return 0;
}

