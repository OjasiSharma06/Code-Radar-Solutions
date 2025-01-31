#include <stdio.>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d",a);
    }
    else if(b>a && b>c){
        pintf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}