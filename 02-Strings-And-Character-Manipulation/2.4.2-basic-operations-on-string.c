#include <stdio.h>
#include <string.h>

void xstrcpy ( char *, char * );
void xstrcat ( char *, char * );
int xstrcmp ( char *, char * );
void show ( char *);

int main ()
{
  char s1[25];
  char s2[25];
  char s3[20];
  int len;

  printf ( "Enter string 1: ");
  gets(s1);
  printf ( "Enter string 2: ");
  gets(s2);

  printf ("\nString s1: %s", s1);
  printf ("\nString s2: %s", s2);

  xstrcpy (s3, s1);
  printf ("\nString s3 after copying s1 to it: %s", s3);

  xstrcat (s3, s2);
  printf ("\nString s3 after concatenation: %s", s3);

  if ( xstrcmp ( s1, s2 ) == 0 )
    printf ("\nThe string s1 and s2 are similar");
  else
    printf ("\nThe stirng s1 and s2 are not similar");
  
  return 1;
}

/*copies source string s to the target string t*/
void xstrcpy ( char *t, char *s )
{
  while ( *s )
  {
    *t = *s;
    t++;
    s++;
  }
  *t = '\0';
}

/* concatenates the two strings */
void xstrcat ( char *t, char *s )
{
  while ( *t )
    t++;
  while ( *s )
    *t++ = *s++;
  *t = '\0';
}

/* compares two strings s and t for equality */
int xstrcmp ( char *t, char *s )
{
  while ( *t == *s )
  {
    if ( ! ( *s ) )
      return 0;
    s++;
    t++;
  }
  return ( *s - *t );
}
