/*
 * input_file
 *
 * function:
 *   in_open
 *   in_close
 *   in_read_char
 *   in_cur_char
 *   in_next_char
 *   in_flush
 */

/* in_open */
extern int in_open(const char name[]);

/* in_close */
extern void in_close(void);

/* in_read_char */
extern void in_read_char(void);

/* in_cur_char */
extern int in_cur_char(void);

/* in_next_char */
extern int in_next_char(void);

/* in_flush */
extern void in_flush(void);

