// Name-Aman Kumar Kanojia
// Roll no.-201851014

#include<stdio.h>
int main()
{
	printf("Enter the number of length of string- ");
    int n;
    char c[100],ch;
	scanf("%d",&n);
	printf("Enter string- ");
	scanf("%s",c);
	for(int i=0;c[i]!='\0';i++)
	{
		ch=c[i];
		if(ch>='a' && ch<='z')
		{
			ch=ch+3;	
			if(ch>'z')
			{
				ch=ch-'z'+'a'-1;

			}
			c[i]=ch;
		}
		else if(ch>='A' && ch<='Z')
		{
			ch=ch+3;	
			if(ch>'Z')
			{
				ch=ch-'Z'+'A'-1;
			}
			c[i]=ch;
		}
	}
	printf("Encrypted String-");
	printf("%s\n",c);
	for(int i=0;c[i]!='\0';i++)
	{
		ch=c[i];	
		if(ch>='a' && ch<='z')
		{
			ch=ch-3;	
			if(ch<'a')
			{
				ch=ch+'z'-'a'+1;
			}
			c[i] = ch;
		}
		else if(ch>='A'&& ch<='Z')
		{
			ch=ch-3;	
			if(ch<'A')
			{
				ch=ch+'Z'-'A'+1;
			}
			c[i]=ch;
		}
	}
	printf("Decrypted String-");
	printf("%s\n",c);
}