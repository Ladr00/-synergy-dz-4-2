#include <stdio.h>

main()
{
	
	// Ввести 7 чисел массива.
	int mas [ 7 ];
	printf("vvedite 7 chisel\n ");
	
	for (int i = 0; i < 7; i ++)
	{
		scanf("%i", &mas [ i ]);
	}

	for (int i = 0; i < 7; i ++)
	{
		printf("%3i", mas [ i ]);
	}
	

	
}
