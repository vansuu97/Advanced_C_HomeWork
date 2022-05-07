#include <stdio.h>
#include "..\Header\calc.h"
#include "..\Header\convert.h"
#include "..\Header\m_string.h"

int main()
    {
        int X=156;
        printf("HomeWork_Session_2");
        Dec_to_Bin(X);
        return 0;
    }


//gcc Sources/main.c Sources/calc.c Sources/convert.c Sources/m_string.c Header/calc.h Header/convert.h Header/m_string.h -o susu