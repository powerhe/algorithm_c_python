#include <assert.h>  
#include <stdio.h>  
  
int strcmp(const char *s1,const char *s2)  
{  
    assert((s1!=NULL) && (s2!=NULL));  
    while(*s1 == *s2)  
    {  
        if(*s1 == '\0')  
            return 0;  
           
        ++s1;  
        ++s2;  
    }  
    return *s1 - *s2;  
}  
