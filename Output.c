#include <stdio.h>
#include <math.h>
#include "Utils.h"

int main()
{
   double v1 = 3.0;
   double v2 = 7.0;
   double v3 = v1 * v2;
   double v4 = 4.0;
   int v5 = 5;
   int v6 = v4 * v5;
   int v7 = v3 * v6;
   double v8 = 2.0;
   double v9 = v7 / v8;
   double v10 = 30.0;
   double v11 = v9 + v10;
   double v12 = v11;
   double v13 = v12;
   printf("%lg\n", v13);
      Unit v14 = CreateUnit(1, 1, 0, 0, 0, 0, 0.0);
      Unit v15 = v14;
      Unit v16 = CreateUnit(2, 0, 1, 0, 0, 0, 0.0);
      Unit v17 = v16;
   Unit v18 = v15;
   Unit v19 = v17;
      Unit v20 = UnitMult(v18, v19);
      PrintUnit(v20);
}
