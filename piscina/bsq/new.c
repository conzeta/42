

int	findsq(int *pos, char **matriz)
{
	int	nd;
	int	diag[2];
	int	u;

	nd = 1;
	diag[0] = pos[0] + nd;
	diag[1] = pos[1] + nd;
	while ()
	{
		//evaluar fila
		u = diag[0];
		while (u >= pos[0])
		{
			u--;
		}

		nd++;
	}
}

void	move_matriz(char **matriz, int x, int y)
{
	int	maxsq;
	int	pos[2];

	pos[0] = 0;
	while (pos[0] < y)
	{
		pos[1] = 0;
		while (pos[1] < x)
		{
			maxsq = findsq(pos, matriz);
			pos[1]++;
		}
		pos[0]++;
	}


}