/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:57:21 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 00:15:09 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Returns a pointer to the first occurrence
///	of the `character` in the `string`.
///@param[in]	string		The string in which to search `character`.
///@param[in]	character	The character to search for in `string`.
///@remarks		Here "character" means "byte"; this function
///				work not with wide or multibyte characters.
///@returns		A pointer to the character match, or `NULL` if the `character`
///				is not found. This function consider the terminating nul byte
///				as part of the `string`, so that, when specifying `character`
///				as `'\0'`, this function returns a pointer to the terminator.
///@remark		This function aims to replicate the `libc` function `strchr`.
///
///	man 3posix srtchr
///>STRCHR(3POSIX)                                                              
///>                         POSIX Programmer's Manual                          
///>                                                    IEEE/The Open Group 2017
///>============================================================================
///>
///>## PROLOG
///>This  manual  page  is  part  of  the  POSIX Programmer's Manual.  The Linux
///>implementation of this interface may differ (consult the corresponding Linux
///>manual  page  for  details  of  Linux behavior), or the interface may not be
///>implemented on Linux.
///>
///>## NAME
///>strchr — string scanning operation
///>
///## SYNOPSIS
///>`#include <string.h>`
///>
///>`char *strchr(const char *`_`s`_`, int `_`c`_`);`
///>## DESCRIPTION
///>The functionality described on this reference page is aligned with the ISO C
///>standard. Any conflict between the requirements described here and the ISO C
///>standard is unintentional.  This volume of POSIX.1­2017 defers to the  ISO C
///>standard.
///>
///>The  _`strchr`_`()`  function  shall  locate  the  first occurrence of _`c`_
///>(converted to  a  **`char`**)  in  the  string  pointed  to  by  _`s`_.  The
///>terminating NUL character is considered to be part of the string.
///>
///>## RETURN VALUE
///>Upon  completion,  _`strchr`_`()`  shall  return a pointer to the byte, or a
///>null pointer if the byte was not found.
///>
///>## ERRORS
///>No errors are defined.
///>
///>_The following sections are informative._
///>
///>## EXAMPLES
///>None.
///>
///>## APPLICATION USAGE
///>None.
///>
///>## RATIONALE
///>None.
///>
///>## FUTURE DIRECTIONS
///>None.
///>
///>## SEE ALSO
///>_`strrchr`_` ( )`
///>
///>The Base Definitions volume of POSIX.1­2017, _**`<string.h>`**_
///>
///>## COPYRIGHT
///>Portions of this text are reprinted and reproduced in electronic  form  from
///>IEEE  Std  1003.1-2017,  Standard  for  Information  Technology  -- Portable
///>Operating System Interface (POSIX), The Open Group Base Specifications Issue
///>7,  2018  Edition,  Copyright  (C)  2018  by  the  Institute  of  Electrical
///>and Electronics  Engineers,  Inc  and  The  Open  Group.  In  the  event  of
///>any  discrepancy  between  this  version  and  the  original  IEEE  and  The
///>Open Group Standard, the original  IEEE  and  The  Open  Group  Standard  is
///>the  referee  document.  The  original  Standard  can  be obtained online at
///>http://www.opengroup.org/unix/online.html.
///>
///>Any  typographical  or  formatting  errors  that   appear   in   this   page
///>are   most   likely  to  have  been  introduced  during  the  conversion  of
///>the  source  files  to  `man`  page  format.  To  report  such  errors,  see
///>https://www.kernel.org/doc/man-pages/reporting_bugs.html.
char	*ft_strchr(const char *const string, const char c)
{
	size_t	i;

	if (! string)
		return (NULL);
	i = 0;
	while (string [i])
	{
		if (string [i] == c)
			return ((char *)(const char *){string + i});
		++ i;
	}
	if (c == '\0')
		return ((char *)(const char *){string + i});
	return ((char *)(const char *){NULL});
}
