#include <stdio.h>
#include <math.h>

int gcd(int a, int b);
float absoluteValue(float a);
int squareRoot(int a);

int gcd(int a, int b){
    if (a < 0 || b < 0){
        return -1;
    }
    
    int greatest = 0;
    int gcd = 0;
    
    if (a > b){
        greatest = a;
    }
    else{
        greatest = b;
    }
    
    for(int i = greatest; i > 0; i--){
        if((a % i == 0) && (b % i == 0)){
            gcd = i;
            return gcd;
        }
    }
    return 0;
}

float absoluteValue(float a){
    if (a > 0){
        return a;
    }
    else if (a < 0){
        return (-1 * a);
    }
    else return 0;
}

int squareRoot(int a){
    if (a < 0){
        return -1;
    }
    return sqrt(a);
}


int main(int argc, char **argv)
{
	
    int common = gcd(1026,405);
    float absolute = absoluteValue(-2.5);
    int sqroot = squareRoot(49);
    
    printf("%d\n", common);
    printf("%f\n", absolute);
    printf("%d\n", sqroot);
    
	return 0;
}
