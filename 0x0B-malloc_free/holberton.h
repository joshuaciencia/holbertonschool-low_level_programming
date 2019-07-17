#ifndef HOLBERTON
#define HOLBERTON
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int getWords(char *s);
int get_size_of_first(char *s);
void fill(char *s1, char *s2, int size);
#endif
