

#include <stdlib.h>

char	**buildmatrix(int x, int y)
{
	char	**matrix;
	int		i;

	matrix = malloc(y);
	i = 0;
	while (i < y)
	{
		matrix[i] = malloc(sizeof(char) * (x + 1));
		i++;
	}
	return (matrix);
}

char	**printmatrix(char **matrix, char *str, int x, int y)
{
	int	f;
	int	i;

	f = 0;
	while (f < y)
	{
		i = 0;
		while (i <= x)
		{
			matrix[f][i] = *str;
			if (matrix[f][i] == '\n')
				matrix[f][i] = '\0';
			str++;
			i++;
		}
		f++;
	}
	return (matrix);
}

/* #include <stdio.h>
int main(void)
{
char str[] = "...\n...\n.o.";
char **matriz;
matriz = create_matriz(3,3);
matriz = file_matriz(matriz, str, 3, 3);

int i;
i = 0;
while (i < 3)
{
printf("%s\n", matriz[i]);
i++;
}
free(matriz);
} */