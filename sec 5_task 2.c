#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;
    float height ;
    float BMI ;

    printf("Enter the weight\n");
    scanf("%f",&weight);

    printf("Enter the height\n");
    scanf("%f",&height);

    BMI = weight / (height*height) ;

    printf("BMI is = %f\n",BMI);

    if(BMI < 18.5){
        printf("nuderweight\n");
    }
    else if (BMI> 18.5 && BMI <24.9){
        printf("normal\n");
    }
    else if (BMI>25 && BMI <= 29){
        printf("overweight\n");
    }
    else if (BMI > 29)
        {
        printf("obese\n");
    }
    return 0;
}
