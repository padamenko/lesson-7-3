#include <stdio.h>

int isSqrt(int n)
{
    for(int i = 1; n > 0; i += 2) 
	{
		n -= i;
	}
    if(!n)
    {
    	return 1;
	}
	else
	{
		return 0;
	}
}
int sqrtCount(int x, int y, int z)
{
  int count = 0;
  int temp;
  temp = isSqrt(x);
  if (temp)
  {
    count++;
  }

  temp = isSqrt(y);

  if (temp)
  {
    count++;
  }

  temp = isSqrt(z);

  if (temp)
  {
    count++;
  }

  return count;
}

void sqrtCount(int x, int y, int z, int *c) 
{ 
	*c = sqrtCount(x, y, z); 
}

void sqrtCount(int x, int y, int z, int &c) 
{ 
	c = sqrtCount(x, y, z); 
}

int main() {
	int x, y, z;
	int c = 0;
	printf("Enter the first value: ");
	scanf("%i",&x);
	printf("\n");
	
	printf("Enter the second value: ");
	scanf("%i",&y);
	printf("\n");
	
	printf("Enter the third value: ");
	scanf("%i",&z);
	printf("\n");
	
	
	printf("Number of matching numbers: %i", sqrtCount(x, y, z));
	sqrtCount(x, y, z, &c);
	printf("\n");
	printf("Number of matching numbers: %i", c);
	sqrtCount(x, y, z, c);
	printf("\n");
	printf("Number of matching numbers: %i", c);	
	
	return 1;
}
