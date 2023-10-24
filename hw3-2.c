#include <stdio.h>
int main()
{
int s1,d1,s2,d2,s3,d3,x=0,a=0,b=0,c=0,d=0,e=0;
scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);

if(d1<=s2&&b!=1){
	x=x+1;b=1;c=3;
}if(d2<=s1&&b!=1){
	x=x+1;b=1;c=3;
}if(d3<=s2&&b!=1){
	x=x+1;b=1;c=2;
}if(d2<=s3&&b!=1){
	x=x+1;b=1;c=2;
}if(d1<=s3&&b!=1){
	x=x+1;b=1;c=1;
}if(d3<=s1&&b!=1){
	x=x+1;b=1;c=1;
}
if(c==3&&(s1<=s3&&s3<=d1||s2<=s3&&s3<=d2)){
	x=x+1;
	d=1;
}
if(c==2&&(s3<=s1&&s1<=d3||s2<=s1&&s1<=d2)){
	x=x+1;d=1;
}
if(c==1&&(s1<=s2&&s2<=d1||s3<=s2&&s2<=d3)){
	x=x+1;d=1;
}
if(d!=1){
	x=2;
	if(d1==s2&&s1==d3||d2==s3&&s2==d1||s1==d3&&d2==s3){
		x=1;
	}
	if(c<1){
	if(s1<=s2&&s2<=d1||s1<=d2&&d2<=d1||s1<=s3&&s3<=d1||s1<=d3&&d3<=d1){
	
	a=a+1;
}
if(s2<=s1&&s1<=d2||s2<=d1&&d1<=d2||s2<=s3&&s3<=d2||s2<=d3&&d3<=d2){
	
	a=a+1;
}
if(s3<=s2&&s2<=d3||s3<=d2&&d2<=d3||s3<=s1&&s1<=d3||s3<=d1&&d1<=d3){
	
a=a+1;
}
if(a>=2){
	x=3;
}

}}


 
printf("%d",x);
}
