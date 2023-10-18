#include <stdio.h>
main()
{
int s1,d1,s2,d2,s3,d3,x=1,y=1;
scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);
if(s1<s2&&s2<d1||s1<d2&&d2<d1||s1<s3&&s3<d1||s1<d3&&d3<d1){
	x=x+1;
}
if(s2<s1&&s1<d2||s2<d1&&d1<d2||s2<s3&&s3<d2||s2<d3&&d3<d2){
	x=x+1;
}
if(s3<s2&&s2<d3||s3<d2&&d2<d3||s3<s1&&s1<d3||s3<d1&&d1<d3){
	x=x+1;
}
if(s1==s2&&s2==s3&&d1==d2&&d2==d3){
	x=3;
}
printf("%d",x);
}


