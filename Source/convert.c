#include "..\Header\convert.h"


void Dec_to_Bin(int M)
{
    printf("so DECIMA: %d chuyen sang BINARY co gia tri la: \n", M);
    // Size cua bien integer co 4byte = 32 bit
    int i=0, k=0;
    while (i<32)
        { 
            k = M >> i; 
            if ((k|0)==0) break;
            if (k & 1)  printf("1"); 
                else    printf("0"); 
            i++;
        } 
}