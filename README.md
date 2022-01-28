# libft

## Base

- [x] isalpha
- [x] isdigit
- [x] isalnum
- [ ] isascii
- [ ] isprint
- [ ] strlen
- [ ] memset
- [ ] bzero
- [ ] memcpy
- [ ] memmove
- [ ] strlcpy
- [ ] strlcat
- [ ] toupper
- [ ] tolower
- [ ] strchr
- [ ] strrchr
- [ ] strncmp
- [ ] memchr
- [ ] memcmp
- [ ] strnstr
- [ ] atoi

- [ ] calloc
- [ ] strdup

## Avancer

| Status | Name          | Prototype                                                         | Description                                                                                                                                                                                                                         |
| ------ | ------------- | ----------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|        | ft_substr     | `char *ft_substr(char const *s, unsigned int start, size_t len)`  | Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la chaîne ’s’. Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len’.                                                              |
|        | ft_strjoin    | `char *ft_strjoin(char const *s1, char const *s2);`               | Alloue (avec malloc(3)) et retourne une nouvelle chaîne, résultat de la concaténation de s1 et s2.                                                                                                                                  |
|        | ft_strtrim    | `char *ft_strtrim(char const *s1, char const *set);`              | Alloue (avec malloc(3)) et retourne une copie de la chaîne ’s1’, sans les caractères spécifiés dans ’set’ au début et à la fin de la chaîne de caractères.                                                                          |
|        | ft_split      | `char **ft_split(char const *s, char c);`                         | Alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères obtenu en séparant ’s’ à l’aide du caractère ’c’, utilisé comme délimiteur. Le tableau doit être terminé par NULL.                                          |
|        | ft_itoa       | `char *ft_itoa(int n);`                                           | Alloue (avec malloc(3)) et retourne une chaîne de caractères représentant l’entier ’n’ reçu en argument. Les nombres négatifs doivent être gérés.                                                                                   |
|        | ft_strmapi    | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applique la fonction ’f’ à chaque caractère de la chaîne de caractères passée en argument pour créer une nouvelle chaîne de caractères (avec malloc(3)) résultant des applications successives de ’f’.                              |
|        | ft_striteri   | `void ft_striteri(char *s, void (*f)(unsigned int, char*));`      | Applique la fonction ’f’ à chaque caractère de la chaîne de caractères transmise comme argument, et en passant son index comme premier argument. Chaque caractère est transmis par adresse à ’f’ afin d’être modifié si nécessaire. |
|        | ft_putchar_fd | `void ft_putchar_fd(char c, int fd);`                             | Écrit le caractère ’c’ sur le descripteur de fichier donné.                                                                                                                                                                         |
|        | ft_putstr_fd  | `void ft_putstr_fd(char *s, int fd);`                             | Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné.                                                                                                                                                              |
|        | ft_putendl_fd | `void ft_putendl_fd(char *s, int fd);`                            | Écrit La chaîne de caractères ’s’ sur le descripteur de fichier donné suivie d’un retour à la ligne.                                                                                                                                |
|        | ft_putnbr_fd  | `void ft_putnbr_fd(int n, int fd);`                               | Écrit l’entier ’n’ sur le descripteur de fichier donné.                                                                                                                                                                             |

## Liste chainee

```C
typedef struct  s_list
{
  void          *content;
  struct s_list *next;
}               t_list;
```
| Status | Name            | Prototype                                                                  | Description                                                                                                                                                                                                                             |
| ------ | --------------- | -------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|        | ft_lstnew       | `t_list *ft_lstnew(void *content);`                                        | Alloue (avec malloc(3)) et renvoie un nouvel élément. La variable membre ’content’ est initialisée à l’aide de la valeur du paramètre ’content’. La variable ’next’ est initialisée à NULL.                                             |
|        | ft_lstadd_front | `void ft_lstadd_front(t_list **lst, t_list *new);`                         | Ajoute l’élément ’new’ au début de la liste.                                                                                                                                                                                            |
|        | ft_lstsize      | `int ft_lstsize(t_list *lst);`                                             | Compte le nombre d’éléments de la liste.                                                                                                                                                                                                |
|        | ft_lstlast      | `int ft_lstsize(t_list *lst);`                                             | Compte le nombre d’éléments de la liste.                                                                                                                                                                                                |
|        | ft_lstlast      | `t_list *ft_lstlast(t_list *lst);`                                         | Renvoie le dernier élément de la liste.                                                                                                                                                                                                 |
|        | ft_lstadd_back  | `void ft_lstadd_back(t_list **lst, t_list *new);`                          | Ajoute l’élément ’new’ à la fin de la liste.                                                                                                                                                                                            |
|        | ft_lstdelone    | `void ft_lstdelone(t_list *lst, void (*del)(void*));`                      | Libère la mémoire de l’élément passé en argument en utilisant la fonction ’del’ puis avec free(3). La mémoire de ’next’ ne doit pas être free.                                                                                          |
|        | ft_lstclear     | `void ft_lstclear(t_list **lst, void (*del)(void *));`                     | Supprime et libère la mémoire de l’élément passé en paramètre, et de tous les éléments qui suivent, à l’aide de ’del’ et de free(3) Enfin, le pointeur initial doit être mis à NULL.                                                    |
|        | ft_lstiter      | `void ft_lstiter(t_list *lst, void (*f)(void *));`                         | Itère sur la liste ’lst’ et applique la fonction ’f’ au contenu chaque élément.                                                                                                                                                         |
|        | ft_lstmap       | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Itère sur la liste ’lst’ et applique la fonction ’f ’au contenu de chaque élément. Crée une nouvelle liste résultant des applications successives de ’f’. La fonction ’del’ est là pour détruire le contenu d’un élément si nécessaire. |