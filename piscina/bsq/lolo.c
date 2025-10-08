/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lolo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:35:20 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 03:02:20 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

void	errors(int indicator)
{
	if (indicator == 1)
		write(1, "map error\n", 11);
	else if (indicator == 2)
		write(1, "error", 6);

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
	c = 0;
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
/* 	while (br == 1 && c == '\n')
		br = read(fd, &c, 1); */
	br = read(fd, mapbuff, (x + 1) * y);
	mapbuff[(x + 1) * y] = '\0';
}

int	validate(char *mapbuff, int i, int ind, char *defchars, int x)
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
}

void	searchmap(char *mapbuff, int x, int y, char *defchars)
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
		ind++;
	}
	

	
}

void	processmap(char *mapname)
{
	int		fd;
	int		x;
	int		y;
	char	*linebuffer;
	char	*mapbuff;
	char	defchars[4];

	linebuffer = malloc(1024);
	fd = open(mapname, O_RDONLY);
	y = pfirstline(fd, linebuffer, 1024, defchars);
	x = lengthline(fd);
	close(fd);
	free(linebuffer);
	fd = open(mapname, O_RDONLY);
	mapbuff = malloc((x + 1) * y + 1);
	printmap(mapbuff, fd, x, y);
	searchmap(mapbuff, x, y, defchars);
	close(fd);
}

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
