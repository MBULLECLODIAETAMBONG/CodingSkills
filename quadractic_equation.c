#include <stdio.h>
int main(){
int a, b, c;
float descriminant;
printf("Enter values of a, b, and c !\n");
scanf("%d %d %d", &a,&b,&c);
descriminant=((b*b)-(4*a*c));

if(descriminant>0){
    printf("The equation has real and distinct roots that is: %f", descriminant);
}
else if(descriminant==0){
    printf("The equation has real and equal roots that is %f", descriminant);

}
else{
    printf("The equation has complex roots or imaginary roots that is %f", descriminant);
}

return 0;
}
