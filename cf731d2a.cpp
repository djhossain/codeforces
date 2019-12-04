#include<stdio.h>
#include<string.h>
char max(char a, char b)
{
	if(a>b)
	return a;
	else
	return b;
}
char min(char a, char b)
{
	if(a<b)
	return a;
	else
	return b;
}
int main()
{
	char a[101];
	int mx,mn,c=0,i,st;
	scanf("%s",a);
	st=strlen(a);
	mx=max(a[0],'a');
	mn=min(a[0],'a');
	c+=min((mx-mn),(mn+26-mx));
	for(i=1;i<st;i++)
	{
	mx=max(a[i],a[i-1]);
	mn=min(a[i],a[i-1]);
	c+=min((mx-mn),(mn+26-mx));
	}
	printf("%d\n",c);
	return 0;
}
