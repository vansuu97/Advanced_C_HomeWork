#include "..\Headers\convert.h"


void Dec_to_Bin(int M)
{
    printf("==>So DECIMA: %d chuyen sang BINARY co gia tri la: ", M);
    // Size cua bien integer co 4byte = 32 bit
    int i=0, k=0, x=0;
    while (i<32)
        {  
            k = M >> i; 
            if ((k|0)==0) break;
            x = x << 1;
            if (k & 1)  {x= x|1;} 
            i++;
        } 
    for (k=0; k<i; k++)
        if (((x>>k) & 1) == 1) printf("1");
            else printf("0");

}