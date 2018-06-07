/* 
**  Function : memory move from src to dest
*/

void *memmove(void *dest, const void *src, size_t count)  
{  
    assert((dest!=0)&&(src!=0));  
    unsigned char *pdest =(char * )dest;  
    unsigned char *psrc = (char * )src;  
    int i=0;  
  
    if ((pdest < psrc) || (pdest > psrc + count)) ///正向拷贝  
    {  
        for (i= 0; i < count; i++)   
        {  
　　        *pdest ++ = *psrc ++;  
        }  
    }  
    else      /*反向拷贝*/  
    {  
       psrc += count;  
       pdest += count;   
       for (i= 0; i < count; i++)  
       {   
          psrc --;   
          pdest --;   
          *pdest = *psrc;  
       }   
    }  
  
    return dest;  
}  
