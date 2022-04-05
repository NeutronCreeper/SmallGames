#include<stdio.h>
char good(int i){
    if(i%3==0) return 0;
    if(i%7==0) return 0;
    if(i%10==3) return 0;
    if((i/10)%10==3) return 0;
    if((i/100)%10==3) return 0;
    if((i/1000)%10==3) return 0;
    //if((i/10000)%10==3) return 0;
    if(i%10==7) return 0;
    if((i/10)%10==7) return 0;
    if((i/100)%10==7) return 0;
    if((i/1000)%10==7) return 0;
    //if((i/10000)%10==7) return 0;
    return 1;
}
int main(){
    int m;
    scanf("%d",&m);
    m++;
    int i=1;
    while(i<m){
        if(good(i)==1){
            printf("%d%c",i,',');
        }else{
            printf("%s","/,");
        }
        i++;
    }
    char c;
    scanf("%c",c);
    return 0;
}