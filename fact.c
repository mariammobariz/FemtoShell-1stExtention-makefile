#include <stdio.h>

int fact(int x)
	{
		int result = 1;
		for(int i=x; i!=0 ; i--)
			{
				result = result * i;
			}
		return result;
	}
