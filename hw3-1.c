#include <stdio.h>
main()
{
int x,y,z=1;
scanf("%d",&x);
for(int i=2;i<x;i++){
	y=x%i;
	if(y==0){
		printf("no"); 
		i=x;
	}
	if(i==x-1){
		printf("yes");
	}
}
if(x==2){
		printf("yes");
		
	}
}

