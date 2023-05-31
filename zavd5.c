#include <stdio.h>
#include <math.h>

int main() {
    int hypotenuse, cat1, cat2, s;
    
    printf("Введіть значення гіпотенузи: ");
    scanf("%d", &hypotenuse);
    
    printf("Введіть значення одного з катетів: ");
    scanf("%d", &cat1);
    
    if (hypotenuse <= 0 || cat1 <= 0) 
    {
        printf("Такий трикутник не можливий.\n");
        return 0;
    }
        cat2 = sqrt(pow(hypotenuse, 2) - pow(cat1, 2));
        s = sqrt(cat1) * sin(90) * hypotenuse;
        if (cat2 <= 0)
        {
            printf("Такий трикутник не можливий.\n");
            return 0;
        }
       
        printf("Другий катет: %d\n", cat2);
        printf("Площа трикутника: %d", s);
    
    return 0;
}