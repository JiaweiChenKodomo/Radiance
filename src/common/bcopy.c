#ifndef lint
static const char	RCSid[] = "$Id$";
#endif
/*
 * bcopy.c - substitutes for library routines.
 */

#include "copyright.h"


bcopy(
register char *src,
register char *dest,
register int  nbytes
)
{
	while (nbytes-- > 0)
		*dest++ = *src++;
}


bzero(
register char	*b,
register int	nbytes
)
{
	while (nbytes-- > 0)
		*b++ = 0;
}


int
bcmp(
register unsigned char *b1,
register unsigned char *b2,
register int	nbytes
)
{
	while (nbytes-- > 0)
		if (*b1++ - *b2++)
			return(*--b1 - *--b2);
	return(0);
}
