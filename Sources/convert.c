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
//    printf("\n i=%d chia 4 du %d \n", i, i%4);
    if (i%4 != 0) 
    {
        for (k=0; k<(4 - i%4); k++) printf("0");
    }
    for (k=0; k<i; k++)
        if (((x>>k) & 1) == 1) printf("1");
            else printf("0");
    printf("\n");

}

void Dec_to_Hex(int n) 
{
    int i;
    char arr[20];
    int count = 0;
    int m;
    int remainder = n;
    while (remainder > 0) 
    {
        m = remainder % 16;
        if (m >= 10)
            {
                arr[count] = (char) (m + 55);
                count++;
            } 
            else 
                {
                    arr[count] = (char) (m + 48);
                    count++;
                }
               
            remainder = remainder / 16;
    }
    // hien thi
    printf("==>So DECIMA: %d chuyen sang HEX    co gia tri la: 0x", n);
    for (i = count - 1; i >= 0; i--) 
        printf("%c", arr[i]);
    printf("\n");
}