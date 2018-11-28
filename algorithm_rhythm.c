//header//

#include "fillit.h"

int		ft_in_space(int *pieces, int x, int y, int size)
{
	if ((y + pieces[0]) < size && (y + pieces[2]) < size &&
		   (y + pieces[4]) < size && (y + pieces[6]) < size)
	{
		if ((x + pieces[1]) < size && (x + pieces[3]) < size &&
		   (x + pieces[5]) < size && (x + pieces[7]) < size)
			return (1);
		return (0);
	}
	else
		return (0);
}

int		ft_issafe(char **space, int *pieces, int x, int y)
{
	if (space[y + pieces[0]][x + pieces[1]] == '.' &&
		   space[y + pieces[2]][x + pieces[3]] == '.' &&
		   space[y + pieces[4]][x + pieces[5]] == '.' &&
		   space[y + pieces[6]][x + pieces[7]] == '.'/* &&
		   ft_space_left(space)*/)
		return (1);
	else
		return (0);
}

void	ft_update_space(char **space, int *pieces, int x, int y)
{
	space[y + pieces[0]][x + pieces[1]] = pieces[8] + 'A';
	space[y + pieces[2]][x + pieces[3]] = pieces[8] + 'A';
	space[y + pieces[4]][x + pieces[5]] = pieces[8] + 'A';
	space[y + pieces[6]][x + pieces[7]] = pieces[8] + 'A';
}

void	ft_backtrack(char **space, int *pieces, int x, int y)
{
	space[y + pieces[0]][x + pieces[1]] = '.';
	space[y + pieces[2]][x + pieces[3]] = '.';
	space[y + pieces[4]][x + pieces[5]] = '.';
	space[y + pieces[6]][x + pieces[7]] = '.';
}

//int		ft_space_left(char **space);

/*int		ft_count(char **space, int y, int x)
{
	int count;

	count = 0;
	if (space[y][x] == '.')
		count++;
	if (space[y + 1][x] == '.')
		count++;	
	if (space[y][x + 1] == '.')
		count++;	
	if (space[y + 1][x + 1] == '.')
		count++;	
	if (space[y - 1][x] == '.')
		count++;	
	if (space[y][x - 1] == '.')
		count++;	
	if (space[y - 1][x - 1] == '.')
		count++;	
	if (space[y + 1][x - 1] == '.')
		count++;	
	if (space[y - 1][x + 1] == '.')
		count++;
	return (count);
}*/

/*int		ft_space_left(char **space)
{
	int y;
	int x;
	int count;
	int len;

	y = 1;
	count = 0;
	len = ft_strlen(space[y]) - 1;
	while (y < len)
	{
		x = 1;
		while (x < len)
		{
			if (space[y][x] == '.')
				count = ft_count(space, y, x);
			if (count > 3)
				return (count);
			x++;
		}
		y++;
	}
	return (0);
}*/
