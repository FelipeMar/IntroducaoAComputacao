#include <stdio.h>
#include <stdlib.h>

float maior(float,float);

int main(int argc,char * argv[])
{
    int i;
    float mar;

    for (i = 1 ; i < argc - 1 ; i++)
    {
        mar = maior(atof(argv[i]),atof(argv[i+1]));
    }
    printf("Maior: %f\n",mar);

}

float maior(float a,float b)
{
    printf("a:%f b:%f\n",a,b);
    if (a > b) return a;
    else return b;
}
