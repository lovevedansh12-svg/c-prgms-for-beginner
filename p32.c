// implementation of strlen (), strcat (),strcpy() using the concept of Functions.

#include <stdio.h>
#include <string.h>
void str_info(char *s) { printf("Length: %d\n", strlen(s)); }
void copy_str(char *d, char *s) { strcpy(d, s); printf("Copied: %s\n", d); }
char* concat_str(char *d, char *s) { strcat(d, s); return d; }
int main() {
    char s1[100], s2[100], d[100];
    printf("Enter s1: "); scanf("%s", s1);
    str_info(s1); copy_str(d, s1);
    printf("Enter s2: "); scanf("%s", s2);
    printf("Concatenated s2 to s1: %s\n", concat_str(s1, s2));
    return 0;
}