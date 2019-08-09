/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 16:11:14 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 17:47:10 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	flag;
	unsigned int	size_src;

	size_src = 0;
	i = -1;
	flag = 0;
	while (src[size_src] != '\0')
		size_src++;
	if (size_src > 0)
		while (++i < (size - 1))
			*(dest + i) = *(src + i);
	dest[i] = '\0';
	return (size_src);
}
