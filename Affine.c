// Name-Aman Kumar Kanojia
// Roll no.-201851014


#include <stdio.h>
#include <stdlib.h>

int inverse(int a)
{
	for(int i = 1; i < 27; ++i)
	{
		if((a*i)%26 == 1)
			return i;
	}
	return 0;
}

void Encryption(char arr[], int n, int a, int b)
{
	printf("The cipher text is- ");
	for(int i = 0; i < n; ++i)
	{
		if(islower(arr[i]))
		{
			arr[i] = arr[i] - 'a';
			arr[i] = (a*arr[i] + b)%26;
			arr[i] = arr[i] + 'a';
		}
		else
		{
			arr[i] = arr[i] - 'A';
			arr[i] = (a*arr[i] + b)%26;
			arr[i] = (arr[i] + 'A');
		}
		printf("%c", arr[i]);
	}
	printf("\n");
}

void Decryption(char arr[], int n, int a, int b)
{
	printf("The decrypted text is- ");
	int ainv = inverse(a);
	for(int i = 0; i < n; ++i)
	{
		if(islower(arr[i]))
		{
			arr[i] = arr[i] - 'a';
			arr[i] = (ainv*(arr[i] + 26 - b)) % 26;
			arr[i] = arr[i] + 'a';
		}
		else
		{
			arr[i] = arr[i] - 'A';
                        arr[i] = (ainv*(arr[i] + 26 - b)) % 26;
                        arr[i] = arr[i] + 'A';
		}

		printf("%c", arr[i]);
	}
	printf("\n");
}

int main()
{
	int n;
	printf("Enter the length of string- ");
	scanf("%d", &n);
	getchar();
	char arr[n+1];
	printf("Enter the plain text- ");
	scanf("%s", arr);
	int a, b;
	int flag = 0;

	while(flag == 0)
	{
		printf("Enter a and b- ");
		scanf("%d %d", &a, &b);

		if(inverse(a))
			flag = 1;
		else
			printf("Please choose valid a.\n");

	}
	Encryption(arr, n, a, b);
	Decryption(arr, n, a, b);
}
