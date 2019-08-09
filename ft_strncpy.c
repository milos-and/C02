/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 20:52:56 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 14:08:35 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	flag;

	i = -1;
	flag = 0;
	while (++i < n)
	{
		if (!flag)
		{
			flag = (*(src + i) == '\0') ? 1 : 0;
			*(dest + i) = *(src + i);
		}
		else
			*(dest + i) = '\0';
	}
	return (dest);
}
