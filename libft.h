/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei </var/mail/fdos-rei>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:50:08 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 16:50:08 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Converts the string argument nptr to an integer  
 * 
 * @param nptr This is the string representation of an integral number.
 * @return int This function returns the converted integral number as an int value.
 */
int		ft_atoi(const	char *nptr);

/**
 * @brief  Fills the first n bytes of the area pointed by s with zeros.
 * 
 * @param b Pointer to the area.
 * @param len Number of bytes to fill.
 */
void	ft_bzero(void	*b, size_t len);

/**
 * @brief Allocates memory and sets it to zero
 * 
 * @param number How many items to allocate.
 * @param size Size of each item in bytes.
 * @return void* Pointer to allocated memory. Or null if the allocation fails.
 */
void	*ft_calloc(size_t number, size_t size);

/**
 * @brief Checks if c is alphanumeric.
 * 
 * @param c Character to check.
 * @return 1 if true or 0 if false.
 */
int		ft_isalnum(int c);

/**
 * @brief Checks if c is alphabet
 * 
 * @param c Character to check.
 * @return 1 if true or 0 if false.
 */
int		ft_isalpha(int c);

/**
 * @brief Checks if c is a ASCII character
 * 
 * @param c Character to check
 * @return 1 if true or 0 if false.
 */
int		ft_isascii(int c);

/**
 * @brief Checks if c is a digit.
 * 
 * @param c Character to check
 * @return 1 if true or 0 if false.
 */
int		ft_isdigit(int c);

/**
 * @brief Checks if c is printable.
 * 
 * @param c Character to check
 * @return 1 if true or 0 if false.
 */
int		ft_isprint(int c);

/**
 * @brief  searches for the first occurrence of the character c in the first len bytes of the string pointed to, by the argument b.
 * 
 * @param b Pointer to string to be searched.
 * @param c Character to be find in b
 * @param len Number of bytes to be analyzed.
 * @return Pointer to the occurrence if finds, NULL if not. 
 */
void	*ft_memchr(const void *b, int c, size_t len);

/**
 * @brief Compares the first num bytes of the block of memory pointed by b1 to the first num bytes pointed by b2
 * 
 * @param b1 Pointer to block of memory
 * @param b2 Pointer to block of memory
 * @param len Number of bytes to compare.
 * @return 0 If are equals / > 0 if b1 is bigger than b2 / < 0 if b2 is bigger than b1
 */
int		ft_memcmp(const void *b1, const void *b2, size_t len);

/**
 * @brief Copies the values of num bytes from the location pointed to by source directly to the memory block pointed to by destination.
 * 
 * @param dst Pointer to the destination array where the content is to be copied
 * @param src Pointer to the source of data to be copied.
 * @param len Number of bytes to copy.
 * @return Pointer to dst.
 */
void	*ft_memcpy(void *dst, const void *src,	size_t len);

/**
 * @brief Copies a memory area to another but only len bytes.
 * 
 * @param dst Pointer to the destination array where the content is to be copied.
 * @param src Pointer to the source of data to be copied.
 * @param len Number of bytes to copy.
 * @return Pointer to dst.
 */
void	*ft_memmove(void *dst,	const void *src, size_t	len);

/**
 * @brief Copies the character c to the first len characters of the string pointed to, by the argument dest.
 * 
 * @param dest Pointer to the block of memory to fill.
 * @param c Value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
 * @param len Number of bytes to be set to the value.
 * @return Pointer to dest. 
 */
void	*ft_memset(void *dest,	int c, size_t len);

/**
 * @brief Searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument s.
 * 
 * @param s This is the C string to be scanned.
 * @param c This is the character to be searched in str.
 * @return This returns a pointer to the first occurrence of the character c in the string str, or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief The strdup() function returns a pointer to a new string which is a duplicate of the string stc.
 * 
 * @param src String that will be copied.
 * @return On success, the strdup() function returns a pointer to the
       duplicated string.  It returns NULL if insufficient memory was
       available
 */
char	*ft_strdup(const char *src);

/**
 * @brief Allocates a new string that results from the concatenation of two strings.
 * 
 * @param s1 First string
 * @param s2 Second String
 * @return The new string resulted of the concatenation of the two previous strings. s1 + s2.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
 * 
 * @param dst Destination that will be appended. 
 * @param src Source that will be appended to the end of dst.
 * @param dstsize Size of dst.
 * @return Return the total length of the string they tried to create. initial length of dst plus the length of src.
 */
size_t	ft_strlcat(char *dst, const	char *src, size_t dstsize);

/**
 * @brief Function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
 * 
 * @param dst  The buffer to receive the string.
 * @param src The original string.
 * @param dstsize How many bytes the buffer has.
 * @return Size of the string it tried to create.
 */
size_t	ft_strlcpy(char *dst, const	char *src, size_t dstsize);

/**
 * @brief Length of the string
 * 
 * @param s The string
 * @return It's Length 
 */
size_t	ft_strlen(const char *s);

/**
 * @brief function locates the	first occurrence of the	null-terminated string little in the string big.
 * 
 * @param big String to search on.
 * @param little Substring to search.
 * @param len Number of bytes to search.
 * @return If	little is an empty string, big is returned; if little occurs nowhere
     in	big, NULL is returned; otherwise a pointer to the first	character of
     the first occurrence of little is returned.
 */
char	*ft_strnstr(const char	*big, const char *little, size_t len);

/**
 * @brief searches for the last occurrence of the character c (an unsigned char) in the string pointed to, by the argument s.
 * 
 * @param s String to search.
 * @param c Char to find
 * @return  Pointer to the last occurrence if finds, NULL if not. 
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief  Trims off the string from all chars in set.
 * 
 * @param s1 String to trim.
 * @param set  A set of chars to trim off.
 * @return The new allocated string resulted of trimming. Or null if set are NULL.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

 * 
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Converts a char to lowercase.
 * 
 * @param c Char to convert.
 * @return Converted char.
 */
int		ft_tolower(int c);

/**
 * @brief Converts a char to uppercase.
 * 
 * @param c Char to convert.
 * @return Converted char.
 */
int		ft_toupper(int c);

/**
 * @brief Converts a int to a string
 * 
 * @param n The number that will be converted
 * @return A string from n.
 */
char	*ft_itoa(int n);

/**
 * @brief Iterates a string to apply a function.
 * 
 * @param s String.
 * @param f Function to apply.
 * @return A new allocated string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function f to each character of the
string passed as argument, and passing its index
as first argument. Each character is passed by
address to f to be modified if necessary
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Sends a char to a file descriptor.
 * 
 * @param c Char to send.
 * @param fd Where to send.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief  Sends a string to a file descriptor.
 * 
 * @param s String to send.
 * @param fd Where to send.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Sends a string and a \n to a fd.
 * 
 * @param s String to send.
 * @param fd Where to send.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Sends an integer to a fd.
 * 
 * @param n Number to send.
 * @param fd Where to send.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Compares at most the first n bytes of str1 and str2.
 * 
 * @param s1  This is the first string to be compared.
 * @param s2 This is the second string to be compared.
 * @param n The maximum number of characters to be compared.
 * @return value < 0 s1 is less than s2./ value > 0  s2 is less than s1. /value = 0 s1 is equal to s2
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Splits a string using a delimitator.
 * 
 * @param s String to split.
 * @param c The delimitator.
 * @return An allocated array of allocated substrings.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief  Creates a node.
 * 
 * @param content Content to insert.
 * @return Pointer to the new node.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Put a node in the front of the list.
 * 
 * @param lst Pointer to the pointer of the first node.
 * @param new New node to insert.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief - Counts how many nodes the list has.
 * 
 * @param lst Pointer to the first node.
 * @return How many nodes the list has.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Finds the last node.
 * 
 * @param lst  Pointer to the first node.
 * @return Pointer to the last node.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Add a node to the end of the list
 * 
 * @param lst Pointer to the first node 
 * @param new  New node to insert.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Deletes a node.
 * 
 * @param lst Pointer to the node.
 * @param del Function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Deletes the entire list.
 * 
 * @param lst Pointer to the lst to be deleted.
 * @param del Function used to delete the content.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Iterates the list applying a function to every content.
 * 
 * @param lst Pointer to the head of the node.
 * @param f Function used to modify the content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates the list applying a function to every content. It creates another one.
 * 
 * @param lst Pointer of the first node.
 * @param f Function used to modify the content.
 * @param del Function used to delete the old content.
 * @return A new list with the functions applied.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
