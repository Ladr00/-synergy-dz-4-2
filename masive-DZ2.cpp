#include <stdio.h>

main()
{

	//ввод с клавиатуры. 
	int n;
	int mas [ 100 ];
	printf("kol element ");
	scanf("%i", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%i", &mas [ i ]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%4i", mas [ i ]);
	}
	
}
