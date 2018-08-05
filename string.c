#include <stdio.h>
int m y_strlen(char * s)
{
char * p = s;
while (* p)
++p;
return (p - s);
}
int m ain(void)
{
int i;
char * s[] =
{
"Git tutorials",
"Tutorials Point"
};
for (i = 0; i < 2; ++i)
printf("string lenght of %s = %d\n", s[i], m y_strlen(s[i]));
return 0;
}
