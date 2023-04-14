/**
 * 
 * 
 * 
*/
int _strlen(char *s)
{
    int st = 0;
    while (*s != '\0') 
    {
        st++;
        s++;
    }
    return st;
}
