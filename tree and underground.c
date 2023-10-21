#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable: 6031)
#include <stdio.h>

 int main()
{
     int l, m;
     int tree = 0;
     scanf("%d%d", &l, &m);
     int area[10000];
     for (int i1 = 0; i1 <= l; i1++) //种树
     {
         area[i1] = 1;
     }


     for (int i2 = 1; i2 <= m;++i2) //按区域砍树'
     {
         int u, v;
         scanf("%d%d", &u, &v);
         for (int i3 = u; i3 <= v; i3++)
         {
             area[i3] = 0;
         }
        
     }

     for (int i4 = 0; i4 <= l; i4++)//检测每个位置是否有树
     {
         if (area[i4] == 1)
         {
             tree++;
         }
     }
     printf("%d", tree);
     return 0;   
}

