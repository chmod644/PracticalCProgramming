/* comment */
/*
 * multi
 * comment
 */
int main(void)
{
	/* procedure */
	int i;					/* commnet / code-line */
	char foo[10];

	strcpy(foo, "abc");		/* string */
	strcpy(foo, "a\"bc");	/* special-string */

	foo[0] = 'a';			/* string */
	foo[1] = '\'';			/* escape-string */

	i = 3 / 2;				/* comment not comment */
	i = 3;					/* nomal number */
	i = 0x123ABC;			/* hex number */

	i = ((1 + 2) *			/* nested () */
			(3 + 4));

	{
		int j;				/* nested {} */
	}
	return (0);
}

