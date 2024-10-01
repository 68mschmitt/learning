#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int isUnique( char str[] )
{
	int sizeOfArray = strlen(str);
	printf("%d\n", sizeOfArray);
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

int isUniqueStandard( char str[] )
{
	int size = strlen(str);
	bool set[128] = { false };
	for (int i = 0; i < size; i++)
	{
		if (set[str[i]]) return 0;
		set[str[i]] = true;
	}

	return 1;
}

int main()
{
	char str[25];
	printf("Enter a string to check for unique values: ");
	scanf("%s", str);
	printf("%d\n", isUniqueStandard( str ));
	return 0;
}
