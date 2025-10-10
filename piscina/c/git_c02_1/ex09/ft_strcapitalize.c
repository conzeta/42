/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 23:37:17 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/18 10:32:31 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
int	ft_isalphanumeric(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_isupper(char c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_islower(char c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	changeornot(char *str, char prevchar)
{
	if (ft_isalphanumeric (prevchar) == 1)
	{
		if (ft_isupper(*str) == 1)
		{
			*str = *str + 32;
		}
	}
	else if (ft_isalphanumeric (prevchar) == 0)
	{
		if (ft_islower(*str) == 1)
		{
			*str = *str - 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*s0;
	int		i;

	s0 = str;
	i = 0;
	while (*str != '\0')
	{
		if (i == 0 && (*str > 96 && *str < 123))
		{
			*str = *str - 32;
		}
		else if (i != 0)
		{
			changeornot(str, *(str - 1));
		}
		str++;
		i++;
	}
	return (s0);
}

/* int	main(void)
{
	char ms1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ iudgidgi";
	char ms2[] = "PRUeBas";
	char ms3[] = "ABC XYZ";
	char ms4[] = "ABC!";
	char ms5[] = "RIIF42";

	printf("%s\n", ft_strcapitalize(ms1));
	printf("%s\n", ft_strcapitalize(ms2));
	printf("%s\n", ft_strcapitalize(ms3));
	printf("%s\n", ft_strcapitalize(ms4));
	printf("%s\n", ft_strcapitalize(ms5));
} */