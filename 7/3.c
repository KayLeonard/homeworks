#include<stdio.h>
int main(){
    float a[10];
    int i=0;
    void cal(float*);
    for(i=0;i<10;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("%.2f\n",a[i]);
    }
    cal(a);
    return 0;
}

void cal(float* a){
    float avg=0;
    int i=0;
    for(i=0;i<10;i++){
        avg+=a[i];
    }
    avg/=10;
    printf("%.2f",avg);
}