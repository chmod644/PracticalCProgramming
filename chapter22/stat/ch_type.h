/*
 * char_type
 *
 * enum CHAR_TYPE
 *
 * function:
 *   is_char_type
 *   get_char_type
 */

/* CHAR_TYPE */
enum CHAR_TYPE {
	C_EOF,
	C_WHITE,
	C_NEWLINE,
	C_ALPHA,
	C_DIGIT,
	C_OPERATOR,
	C_SLASH,
	C_L_PAREN,
	C_R_PAREN,
	C_L_CURLY,
	C_R_CURLY,
	C_SINGLE,
	C_DOUBLE,
	/* complex char type */
	C_HEX_DIGIT,
	C_ALPHA_NUMERIC
};

/* is_char_type */
extern int is_char_type(int ch, enum CHAR_TYPE kind);

/* get_char_type */
extern enum CHAR_TYPE get_char_type(int ch);

