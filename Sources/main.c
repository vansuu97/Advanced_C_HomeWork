#include <stdio.h>
#include "..\Headers\calc.h"
#include "..\Headers\convert.h"
#include "..\Headers\m_string.h"
int Mang[]={77,23,45,65,45,34,5,6,1,13,42,44,56,44,67,76,76,54,54,86,97};
         // 0  1  2  3  4  5  6 7 8 9  10 11 12 13 14 15 16 17 18 19 20
int main()
    {          
        printf("\n\n\n\n====================>HomeWork_Session_2<====================\n\n");

        printf("==>Tong cua mang la                                : %d\n",Tinh_Tong(Mang, 21)); 
        printf("==>Phan tu lon nhat cua mang la                    : %d\n",Max_Mang (Mang, 21));
        printf("==>Phan tu nho nhat cua mang la                    : %d\n",Min_Mang (Mang, 21));
        Tim_So_X(Mang, 21, 76);

        printf("\n");
        int X=1566;
        Dec_to_Bin(X);
        Dec_to_Hex(X);
        printf("\n");
        return 0;
    }


//gcc Sources/main.c Sources/calc.c Sources/convert.c Sources/m_string.c Headers/calc.h Headers/convert.h Headers/m_string.h -o susu