ft_memset

char e[8] = "2354678\0";
ft_memset(e, '4', 4);
printf ("%s\n", e);

ft_bzero

char r[8] = "83urhnfi";
ft_bzero (r, 5);
printf ("%s\n", r);

ft_memcpy

char t[7] = "dorjfl\0";
char r[8] = "8430495\0";
ft_memcpy(t, r, 4);
printf ("%s\n", t);

ft_memccpy
char o[7] = "872635\0";
char *a;
char t[8] = "asdfghj\0";
a = ft_memccpy( o, t, 'd', 5);
printf ("%s\n", a);
a = memccpy (o, t, 'd', 5);
printf("%s\n", a);

ft_memmove

char q[] = "1234567890";
//char w[7] = "123456\0";
char *b;
b = memmove (&q[3], &q[6], 2);
printf ("%s\n", b);
char *a;
a = ft_memmove (&q[3], &q[6], 2);
printf ("%s\n", a);

ft_memchr

char a[9] = "123456ty\0";
printf ("%s\n", ft_memchr(a, '2', 1));
printf ("%s\n", memchr(a, '2', 1));

ft_memcmp

char w[] = "1234506789";
char q[] = "1234567890";
printf ("%d\n", memcmp (w, q, 8));
printf ("%d\n", ft_memcmp(w, q, 8));

ft_strlen

char s[] = "qwerty";
printf ("%d\n", ft_strlen(s);

ft_strlcpy

char d[100] = "qwertee\0";
char s[100] = "asdfg\0";
ft_strlcpy(d, s, 20);
printf ("%s\n", d);
strlcpy(d, s, 20);
printf ("%s\n", d);

ft_strlcat

char y[20] = "qwertyu\0";
char s[6] = "12345\0";
//ft_strlcat(y, s, 4);
//printf ("%s\n", y);
ft_strlcat(y, s, 12);
printf ("%s\n", y);

ft_strchr

char st[5] = "bsjk\0";
int a = 'j';
printf("%s\n", ft_strchr(st, a))

ft_strrchr

char st[6] = "dewer\0";
int a = 'e';
printf("%s\n", ft_strrchr(st, a));
printf("%s\n", strrchr(st, a));

ft_strnstr

char ha[10] = "123456789\0";
char ne[4] = "499\0";
printf ("%s\n", ft_strnstr(ha, ne, 5));
printf("%s\n", strnstr(ha, ne, 5));

ft_atoi

int main()
{
    char *e = "  +-78jo";

    printf ("%d\n", ft_atoi(e));
    printf("%d\n", atoi(e));

ft_isalpha

int f;

f = 'c';
printf ("%d\n", ft_isalpha(f));
printf ("%d\n", isalpha(f));

ft_isdigit

int r;

r = 'e';
printf("%d\n", ft_isdigit(r));
printf("%d\n", isdigit(r));

ft_isalnum

int u;

u = 'd';
printf("%d\n", ft_isalnum(u));
printf("%d\n", isalnum(u));

ft_isascii

int y;

y = 'f';
printf("%d\n", ft_isascii(y));
printf("%d\n", isascii(y));

ft_isprint

int f;

    f = 'v';
    printf("%d\n", ft_isprint(f));
    printf("%d\n", isprint(f));

ft_toupper

int g;

g = 'd';
printf("%c\n", ft_toupper(g));
printf("%c\n", toupper(g));

ft_substr

char w[9] = "12345678\0";

printf ("%s\n",ft_substr(w, 3, 4));

ft_strjoin

char e[6] = "12345\0";
char a[9] = "asdfghjk\0";

printf ("%s\n", ft_strjoin(e, a));

ft_strtrim

    char *t = "asdfghjkl\0";
    char *e = "ghjk\0";

    printf("%s\n", ft_strtrim(t, e));
