#include "..\Headers\m_string.h"

int isEqual(int Mang[], int m, int Mang_2[], int n)
{
    int flag=1;
    if (m!=n) flag=0;
    if ((m == n) && (flag==1))
        for (int i=0; i<n; i++)
            if (Mang[i]!= Mang_2[i]) flag=0;
    return flag;    
}

void ChenMang(int Mang[], int m, int Mang_2[], int n, int vitri)
{
    int MN= m + n;
    int i, Mang_3[MN];

    printf("Mang_3 duoc chen tu Mang_2 vao Mang duoc ket qua:\n");
    for (i=0; i<vitri; i++)
        {
            Mang_3[i]=Mang[i];
            printf("%d ",Mang_3[i]);
        }
    for (i=vitri; i<vitri+n; i++)
        {
            Mang_3[i]=Mang_2[i-vitri];
            printf("%d ",Mang_3[i]);
        }
    for (i=vitri+n; i<m+n; i++)
        {
            Mang_3[i]=Mang[i-n];
            printf("%d ",Mang_3[i]);
        }
    printf("\n");
}