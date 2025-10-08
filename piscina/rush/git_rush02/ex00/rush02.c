#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	wrerror(void)
{
	write(1, "Error\n", 6);
}

char	*ft_strcpy(char *dest, char *src, int i0)
{
	int	i;

	i = i0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n, unsigned int i0)
{
	unsigned int	i;

	i = i0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char *processdict(char *dictname)
{
	int				fd;
	unsigned long 	bytesRead;
	unsigned int	dsize;
	char 			*mybuffer;
	
	dsize = 2000;
	mybuffer = malloc(dsize);
	fd = open(dictname, O_RDONLY);
	bytesRead = read(fd, mybuffer, dsize);
	close(fd);
	return (mybuffer);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i2;
	int		l2;

	l2 = 0;
	while (to_find[l2] != '\0')
	{
		l2++;
	}
	if (l2 == 0)
		return (str);
	i2 = 0;
	while (*str != '\0')
	{
		if (*str == to_find[i2])
		{
			if (i2 == l2 - 1)
				return (str - (l2 -1));
			i2++;
		}
		else
			i2 = 0;
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str > '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/* int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
} */
/* char	ft_int_to_char(int n)
{
	return ('0' + n);
} */

/* char	*ft_charnbr(int nb, int len, int i)
{
	char	toprint;
	int		maxvalint;
	char	charnb[len + 1];
	int		i;

	i = len;
	maxvalint = 2147483647;
	if ((nb <= maxvalint) && (nb >= -maxvalint))
	{
		if (nb < 9)
		{
			ft_putnbr(nb / 10, len, i - 1);
		}
		toprint = ft_int_to_char(nb % 10);
		charnb[i] = toprint;
	}
} */

void search(char *dictionary, char *number)
{
	char *found;

	found = ft_strstr(dictionary, ft_strcat(number, ":"));
	if (found == 0)
		found = ft_strstr(dictionary, ft_strcat(number, " "));
	if (found == 0)
		wrerror();

	while (*found != '\0')
	{
		while (*found >= '0' && *found <= '9')
			found++;
		while (*found == ' ' || *found == ':')
			found++;
		while (*found > 31 && *found < 127)
		{
			write(1, found, 1);
			found++;
		}
		break;
	}
}
int	next3mult(int num)
{
	while (num % 3 != 0)
		num++;
	return (num);	
}

/* 	int		ign;
	char	newnb[((ft_strlen(number) - 1)/ 3) * 3];

	if (ft_strlen(number) <= 3)
	{

	}
	else
	{
		ign = ft_strlen(number) % 3;

		logic(dictionary, ft_strcpy(newnb, number, ign))
	} */

void	three_process(char *dictionary, char *ebox)
{
	char	digit;

	if (ebox[0] != '0')
	{
		digit = ebox[0];
		search(dictionary, &digit);
		search(dictionary, "100");
	}
		if (ebox[1] != '1' && ebox[1] != '0')
		{
			digit = ebox[2];
			search(dictionary, ft_strcat(&digit, "0"));
			search(dictionary, &digit);
		}
		else
		{
			search(dictionary, &ebox[1]); //igual error
		}
}
void unit(char *bigbox, int i, char *dictionary)
{
	int	nn;
	int	y;

	nn = ft_strlen(bigbox) - (i + 2);

	char tosearch[nn + 2];
	tosearch[0] = 1;
	y = 1;
	while (y < nn + 1)
	{
		tosearch[y] = '0';
		y++;
	}
	tosearch[y] = '\0';
	search(dictionary, tosearch);
}

void	logic(char *dictionary, char *number)
{
	char bigbox[next3mult(ft_strlen(number)) + 1];
	int nn;
	int i;
	char ebox[4];

	nn = next3mult(ft_strlen(number)) - ft_strlen(number);
	i = 0;
	while (i < nn)
	{
		bigbox[i] = '0';
		i++;
	}
	ft_strcpy(bigbox, number, nn - 1);
	i = 0;
	while (i < next3mult(ft_strlen(number)))
	{
		ft_strncpy(ebox, number, i + 2, i);
		three_process(dictionary, ebox);
		unit(bigbox, i, dictionary);
		i += 3;
	}

}

int	main(int argc, char **argv)
{
	char *dictionary;
	char number[500];
	char name[] = "numbers.dict";

	if (argc == 2)
	{
		dictionary = processdict(name);
		ft_strcpy(number, *(argv + 1), 0);
	}
	else if (argc == 3)
	{
		dictionary = processdict(*(argv + 1));
		ft_strcpy(number, *(argv + 2), 0);
	}
	else
		wrerror();
	logic(dictionary, number);
	free (dictionary);
	return (0);
}
