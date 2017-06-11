/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 17:40:11 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 14:11:18 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 35

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct 		s_double_ptr_char
{
	char			*ptr1;
	char			*ptr2;
}					t_two_ptr_char;

typedef struct 		s_tree_int
{
	int				i;
	int				j;
	int				k;
}					t_tree_int;

typedef struct 		s_func_if
{
	int				(*f)(int, int);
}					t_func_if;

int					get_next_line(int const fd, char **line);
void				*ft_memset(void *s, int val, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_memlen(const char *str, char c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_atoi(const char *str);
int					ft_strncmp(char *c1, char *c2, size_t n);
int					ft_strcmp(char *c1, char *c2);
int					ft_strcmp_percent(char *src, char *find);
char				*ft_strstr(char *src, char *find);
char				*ft_strcat(char *dest, char *src);
char				*ft_strncat(char *dest, char *src, int n);
char				*ft_strnstr(char *src, char *to_find, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
int					ft_strchr_all(char *src, int c);
char				*ft_strrchr(const char *s, int c);
size_t				ft_strlen(const char *str);
size_t				ft_strlen_var(const char *str, char c);
char				*ft_strdup(char *src);
int					ft_isalpha(int c);
int					ft_isalpha_lower(int c);
int					ft_isalpha_upper(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strnew(size_t n);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				ft_strdel(char **ap);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int nb);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *tmp);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdel_function(void *content, size_t content_size);
void				ft_lstdel_str_function(void *content, size_t content_size);
void				ft_lst_print(t_list *tmp);
size_t				ft_lst_lenlst(t_list *tmp);
void				ft_lst_delete_egal_content_one(t_list *elem);
void				ft_lst_delete_egal_content_all(t_list *elem);
t_list				*ft_lst_find_content(t_list *tmp, void *content, size_t size);
char				ft_lst_equal_content(t_list *tmp, void *content, size_t size);
t_list				*ft_lst_maxim_size(t_list *tmp);
void				ft_lst_sort_content(t_list *tmp);
t_list				*ft_lst_find_string_content(t_list *tmp, void *content);
void				ft_lst_sort_content_size_crtr(t_list *beg);
void				ft_lst_swich(t_list *tmp1, t_list *tmp2);
t_list				*ft_lst_find_string_char_content(t_list *tmp, char content);
void				ft_lst_del_mijloc(t_list *pre, t_list **ap);
void				ft_lst_reducere_doi(t_list **prime, t_list **tmp,
	t_list **beg, t_list *pre1, t_list *pre2);
int					ft_round(double nbr);
int					ft_count_char(char *src, int c);
char				*ft_strstr_find_limit(char *str, char *find, int n);
void				ft_strswich(char *s, char corectat, char corector);
void				ft_set_string(char *ecuatie, int id, size_t len);
size_t				ft_strlen_limit(const char *str, char c);
char				*ft_strrealloc(char *src, size_t n);
void				*ft_memrealloc(void *src, size_t n);
void				ft_str_clear_and_delete(char *src);
int					ft_count_word(char *src, char *word);
char				*ft_str_three_concat(char *init, char *var, char *fin);
char				*ft_strswich_string (char *src, char *old, char *nou);
char				*ft_strswich_string_del(char **nume, char *vechi, char *nou);
size_t				ft_strlen_limit_lower(const char *str, char c);
char 				*ft_strdup_realloc(char *src);
char 				*ft_str_trim_repeat_until_char(char *src, char caracter);
char				ft_str_three_concat_varDifNo(char **init, char *var, char *fin, char no);
void				ft_delDoubleChar(char ***c);
void				ft_initDoubleChar(char **c, size_t len);
char				*ft_str_five_concat(char *one, char *two, char *three, char *forth, char *five);
char				*ft_str_six_concat(char *one, char *two, char *three,
	char *forth, char *five, char *six);
char				*ft_str_seven_concat(char *one, char *two, char *three,
	char *forth, char *five, char *six, char *seven);
void				ft_putstrDoubleChar_fd(char **c, int fd);
char				**ft_allocDoubleChar(size_t size);
void				ft_strClrDel(char **src);
char				*ft_string_nou(char *dest, char *src);
char				*ft_realloc_str(char **src, size_t n);
char				*ft_strcmp_asemanare(char *src, char *find);
char				*ft_strncmp_asemanare(char *src, char *find, size_t size1, size_t size2);
char				*ft_str_add_char(char *src, char car);
void				*ft_memsort(void *s, size_t n);
char				*ft_del_char_in_src(char *src, char *del);
char				*ft_str_two_concat(char *init, char *fin);
int					match(char *s1, char *s2);
int					match_nou(char *s1, char *s2, int mch);
int					match_ptr(char *s1, char *s2, char **ptr, int mch);
int					nmatch(char *s1, char *s2);
char				*ft_strsub_nou(char const *s, unsigned int start, size_t len);
int					ft_func_if_egall(int a, int b);
int					ft_func_if_mare(int a, int b);
int					ft_func_if_mic(int a, int b);
void				ft_str_invers(char *src);
void				ft_str_invers_dif_char(char *src, char c);
void				ft_str_pozitiv(char *src);
void				ft_strClrDelThree(char **ptr1, char **ptr2, char **ptr3);
void				afisareTwoDchar(char **c);

#endif
