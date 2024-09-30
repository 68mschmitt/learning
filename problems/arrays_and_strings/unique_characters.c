#include <stdio.h>

int isUnique( char str[] )
{
	int sizeOfArray = *(&str + 1) - str;
	int checker = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		int val = str[i] - 'a';
		if ((checker & (1 << val) > 0))
		{
			return 0;
		}
		checker |= (1 << val);
	}
	return 1;
}

int main()
{
	char str[25];
	printf("Enter a string to check for unique values: ");
	scanf("%s", str);
	printf("%d\n", isUnique( str ));
	return 0;
}
