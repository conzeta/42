/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lolo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:35:20 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 11:53:40 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

void	errors(int indicator)
{
	if (indicator == 1)
		write(1, "map error\n", 10);
	else if (indicator == 2)
		write(1, "error", 5);

}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] > '\0')
		i++;
	return (i);
}

//Procesar primera línea. Número de líneas.
int	pfirstline(int fd, char *buffer1, int buffsz, char *defchars)
{
	char	c;
	int		i;
	int		br;
	int		len;
	int		ret;

	i = 0;
	br = 1;
	ret = 0;
	while (i < (buffsz - 1) && br == 1 && c != '\n')
	{
		br = read(fd, &c, 1);
		buffer1[i++] = c;
	}
	buffer1[i] = '\0';
	len = ft_strlen(buffer1);
	i = 0;
	br = 0;
	while (i <= (len - 4) && buffer1[i] >= '0' && buffer1[i] <= '9')
		ret = ret * 10 + (buffer1[i++] - 48);
	while (br <= 2)
		defchars[br++] = buffer1[i++];
	return (ret);
}

//Calcular longitud 2a linea. Dar fd semiposicionado!
int	lengthline(int fd)
{
	char	c;
	int		i;
	int		br;

	i = 0;
/* 	c = 0; */
	br = 1;
	while (br == 1 && c == '\n')
		br = read(fd, &c, 1);
	while (br == 1 && c != '\n')
	{
		br = read(fd, &c, 1);
		i++;
	}
	return (i - 1);
}

void	printmap(char *mapbuff, int fd, int x, int y)
{
	char	c;
	int		br;

	c = 0;
	br = 1;
	while (br == 1 && c != '\n')
		br = read(fd, &c, 1);
	br = read(fd, mapbuff, (x + 1) * y);
	mapbuff[(x + 1) * y] = '\0';
}

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

/* void	printmap(char **mapmatrix, int fd, int x, int y)
{
	char	c;
	int		br;
	int		f;

	c = 0;
	br = 1;
	f = 0;
	while (br == 1 && c != '\n')
		br = read(fd, &c, 1);
	while (f < y)
	{
		br = read(fd, mapmatrix[f], x + 1);//inicializar tamaño de cada fila?
		mapmatrix[f][x] = '\0';
		f++;
	} */
/* 	
	//imprimir de prueba
	int i = 0;

	while (i < y)
	{
		printf("%s\n", mapmatrix[i]);
		i++;
	}
	
} */

/* int	validate(char *mapbuff, int i, int ind, char *defchars, int x)
{
	int	diag;
	int	u;

	diag = i + ind * (x + 1) + ind; //diagonal a evaluar
	if (mapbuff[u] == defchars[0])
	{
		u = diag;
		while (u >= i + ind)
		{
			if (mapbuff[u] == defchars[1])
				return (0);
			u = u - ind * (x + 1);
		}
		u = diag;
		while (u >= i + ind * (x + 1))
		{
			if (mapbuff[u] == defchars[1])
				return (0);
			u--;
		}
		return (1);
	}
	else
		return (0);
} */

/* void	searchmap(char *mapbuff, int x, int y, char *defchars)
{
	int	i;
	int	mxdim;
	int	imx;
	int	ind;

	i = 0;
	imx = 0;
	mxdim = 0;
	ind = 1;
	while (validate(mapbuff, i, ind, defchars, x) == 1)
	{
		ind++;int	nd;
	int	diag[2];
	int	u;

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

void	processmap(char *mapname)
{
	int		fd;
	int		x;
	int		y;
	char	linebuffer[1024];
	char	**mapmatrix;
	char	defchars[4];

	fd = open(mapname, O_RDONLY);
	y = pfirstline(fd, linebuffer, 1024, defchars);
	x = lengthline(fd);
	close(fd);
	fd = open(mapname, O_RDONLY);
	char	mapbuffer[(x + 1) * y + 1];
	printmap(mapbuffer, fd, x, y);
	mapmatrix = printmatrix(buildmatrix(x, y), mapbuffer, x, y);
/* 	searchmap(mapbuff, x, y, defchars); */
/* 	close(fd);
} */

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		//????
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			processmap(argv[i]);
			i++;
		}
	}
	else
		errors(2);
	return (0);
}
