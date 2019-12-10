#include <stdio.h>
#include <string.h>
void main()
{
	int i,j,n=4;
	char *name[] = {"Visual C++","MySQL","Visual BASIC","Java"};
	char *tp;
	for(i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
			if(strcmp(name[i],name[j])>0)
			{
				tp =name[i];
				name[i]=name[j];
				name[j]=tp;
		
			}
		//for(i=0;i<n;i++) puts(name[i]);

	
	
	}


	for(i=0;i<n;i++) puts(name[i]);


}