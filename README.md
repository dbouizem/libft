# Libft

## Description

La bibliothèque **libft** réimplémente un certain nombre de fonctions de la bibliothèque standard C et des utilitaires supplémentaires, conformément aux exigences du projet `libft` de 42.

---

## Table des matières

1. [Installation](#installation)
2. [Utilisation](#utilisation)
3. [Fonctions implémentées](#fonctions-implémentées)
4. [Compilation](#compilation)

---

## Installation

1. Clonez ce dépôt :

   ```bash
   git clone https://github.com/dbouizem/libft.git
   ```
2. Placez-vous dans le dossier :

   ```bash
   cd libft
   ```

---

## Utilisation

Incluez le header dans votre projet :

```c
#include "libft.h"
```

Ajoutez la librairie au moment de la compilation :

```bash
gcc -L/path/to/libft -lft your_program.c -o your_program
```

---

## Fonctions implémentées

| Fonction                    | Prototype                                                                  | Description                                                                      |
| --------------------------- | -------------------------------------------------------------------------- | -------------------------------------------------------------------------------- |
| **Tests de caractères**     |                                                                            |                                                                                  |
| `ft_isalpha`                | `int ft_isalpha(int c);`                                                   | Vérifie si `c` est une lettre alphabétique.                                      |
| `ft_isdigit`                | `int ft_isdigit(int c);`                                                   | Vérifie si `c` est un chiffre décimal.                                           |
| `ft_isalnum`                | `int ft_isalnum(int c);`                                                   | Vérifie si `c` est alphanumérique.                                               |
| `ft_isascii`                | `int ft_isascii(int c);`                                                   | Vérifie si `c` est un caractère ASCII.                                           |
| `ft_isprint`                | `int ft_isprint(int c);`                                                   | Vérifie si `c` est imprimable.                                                   |
| `ft_tolower`                | `int ft_tolower(int c);`                                                   | Convertit `c` en minuscule si possible.                                          |
| `ft_toupper`                | `int ft_toupper(int c);`                                                   | Convertit `c` en majuscule si possible.                                          |
| **Manipulation de chaînes** |                                                                            |                                                                                  |
| `ft_strlen`                 | `size_t ft_strlen(const char *s);`                                         | Retourne la longueur de la chaîne `s`.                                           |
| `ft_strlcpy`                | `size_t ft_strlcpy(char *dest, const char *src, size_t size);`             | Copie la chaîne `src` dans `dest` sur `size - 1` octets.                         |
| `ft_strlcat`                | `size_t ft_strlcat(char *dest, const char *src, size_t n);`                | Concatène `src` à la fin de `dest`, limitée à `n` octets.                        |
| `ft_strchr`                 | `char *ft_strchr(const char *s, int c);`                                   | Recherche la première occurrence de `c` dans `s`.                                |
| `ft_strrchr`                | `char *ft_strrchr(const char *s, int c);`                                  | Recherche la dernière occurrence de `c` dans `s`.                                |
| `ft_strnstr`                | `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`  | Recherche `needle` dans `haystack` sur `len` octets.                             |
| `ft_strdup`                 | `char *ft_strdup(const char *src);`                                        | Duplique la chaîne `src`.                                                        |
| `ft_strncmp`                | `int ft_strncmp(const char *s1, const char *s2, size_t n);`                | Compare jusqu'à `n` caractères de `s1` et `s2`.                                  |
| **Gestion de la mémoire**   |                                                                            |                                                                                  |
| `ft_memset`                 | `void *ft_memset(void *s, int c, size_t n);`                               | Remplit `n` octets de `s` avec la valeur `c`.                                    |
| `ft_bzero`                  | `void ft_bzero(void *s, size_t n);`                                        | Met à zéro `n` octets de `s`.                                                    |
| `ft_memcpy`                 | `void *ft_memcpy(void *dest, const void *src, size_t n);`                  | Copie `n` octets de `src` vers `dest`.                                           |
| `ft_memmove`                | `void *ft_memmove(void *dest, void *src, size_t n);`                       | Copie `n` octets gérés pour zones qui se chevauchent.                            |
| `ft_memchr`                 | `void *ft_memchr(const void *s, int c, size_t n);`                         | Recherche `c` dans les `n` premiers octets de `s`.                               |
| `ft_memcmp`                 | `int ft_memcmp(const void *s1, const void *s2, size_t n);`                 | Compare `n` octets de `s1` et `s2`.                                              |
| `ft_calloc`                 | `void *ft_calloc(size_t count, size_t size);`                              | Alloue et initialise à zéro la mémoire pour un tableau.                          |
| **Conversions et parsing**  |                                                                            |                                                                                  |
| `ft_atoi`                   | `int ft_atoi(const char *str);`                                            | Convertit la chaîne `str` en entier.                                             |
| `ft_itoa`                   | `char *ft_itoa(int n);`                                                    | Convertit l'entier `n` en chaîne.                                                |
| **Fonctions utilitaires**   |                                                                            |                                                                                  |
| `ft_substr`                 | `char *ft_substr(const char *s, unsigned int start, size_t len);`          | Extrait une sous-chaîne de `s`.                                                  |
| `ft_strjoin`                | `char *ft_strjoin(const char *s1, const char *s2);`                        | Concatène `s1` et `s2` dans une nouvelle chaîne.                                 |
| `ft_strtrim`                | `char *ft_strtrim(const char *s1, const char *set);`                       | Supprime les caractères de `set` au début et à la fin de `s1`.                   |
| `ft_strmapi`                | `char *ft_strmapi(const char *s, char (*f)(unsigned int, char));`          | Applique `f` à chaque caractère de `s` et retourne une nouvelle chaîne.          |
| `ft_striteri`               | `void ft_striteri(char *s, void (*f)(unsigned int, char*));`               | Applique `f` en place à chaque caractère de `s` avec son index.                  |
| `ft_split`                  | `char **ft_split(const char *s, char c);`                                  | Coupe `s` en tableau de chaînes selon le séparateur `c`.                         |
| `ft_putchar_fd`             | `void ft_putchar_fd(char c, int fd);`                                      | Écrit le caractère `c` sur le descripteur `fd`.                                  |
| `ft_putstr_fd`              | `void ft_putstr_fd(const char *s, int fd);`                                | Écrit la chaîne `s` sur le descripteur `fd`.                                     |
| `ft_putendl_fd`             | `void ft_putendl_fd(const char *s, int fd);`                               | Écrit la chaîne `s` suivie d'un saut de ligne sur `fd`.                          |
| `ft_putnbr_fd`              | `void ft_putnbr_fd(int n, int fd);`                                        | Écrit l'entier `n` sur le descripteur `fd`.                                      |
| **Bonus - listes chaînées** |                                                                            |                                                                                  |
| `ft_lstnew`                 | `t_list *ft_lstnew(void *content);`                                        | Crée un nouvel élément.                                                          |
| `ft_lstadd_front`           | `void ft_lstadd_front(t_list **lst, t_list *new);`                         | Ajoute l'élément `new` au début de la liste.                                     |
| `ft_lstadd_back`            | `void ft_lstadd_back(t_list **lst, t_list *new);`                          | Ajoute l'élément `new` à la fin de la liste.                                     |
| `ft_lstsize`                | `int ft_lstsize(t_list *lst);`                                             | Retourne le nombre d'éléments dans la liste.                                     |
| `ft_lstlast`                | `t_list *ft_lstlast(t_list *lst);`                                         | Retourne le dernier élément de la liste.                                         |
| `ft_lstdelone`              | `void ft_lstdelone(t_list *lst, void (*del)(void *));`                     | Supprime un élément avec la fonction `del`.                                      |
| `ft_lstclear`               | `void ft_lstclear(t_list **lst, void (*del)(void *));`                     | Supprime et libère tous les éléments de la liste.                                |
| `ft_lstiter`                | `void ft_lstiter(t_list *lst, void (*f)(void *));`                         | Applique `f` à chaque contenu d'élément.                                         |
| `ft_lstmap`                 | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Créé une nouvelle liste par application de `f` et supprime avec `del` si besoin. |

---

## Compilation

Le Makefile fourni contient les cibles suivantes :

* `make` : compile la bibliothèque `libft.a`
* `make clean` : supprime les fichiers objets
* `make fclean` : supprime les fichiers objets et `libft.a`
* `make re` : effectue `fclean` puis `make`

```bash
make
# => crée libft.a
```

---
