#include <stdio.h>
main()
{
int x,y,z=1;
scanf("%d",&x);
for(int i=2;i<x;i++){
	y=x%i;
	if(y==0){
		printf("NO"); 
		i=x;
	}
	if(i==x-1){
		printf("YES");
	}
}
if(x==2){
		printf("YES");
		
	}
}

