#include <stdio.h>
#include "..\Headers\calc.h"
#include "..\Headers\convert.h"
#include "..\Headers\m_string.h"

int main()
    {          
        printf("\n\n====================>HomeWork_Session_2<====================\n\n");


        int X=1566;
        Dec_to_Bin(X);
        Dec_to_Hex(X);

        printf("\n");
        return 0;
    }


//gcc Sources/main.c Sources/calc.c Sources/convert.c Sources/m_string.c Headers/calc.h Headers/convert.h Headers/m_string.h -o susu