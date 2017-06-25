#include <stdio.h>

int	nmatch(char *s1, char *s2);

//"abcbd" & "*b*" match twice : ("a","cbd") and ("abc", "d")
//"abc" & "a**" match 3 times : (nothing,"bc"), ("b", "c") and ("bc",nothing)

int		main(void)
{

	printf("T1:  S1 = 'abcbd'     S2 = '*b*'     Expected = 2 Answer = %i\n", nmatch("abcbd", "*b*"));
	printf("T2:  S1 = 'abc'     S2 = 'a**'       Expected = 3 Answer = %i\n", nmatch("abc", "a**"));
	return (0);
}
