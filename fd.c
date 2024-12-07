#include<stdio.h>
void main(void){
    float x [100],key ;
    int i,n,pos ;
    printf("Enter size<100");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("value [%d] \n",i);
        scanf("%f",&x[i]);
    }
     printf("Enter key to search about num you need");
    scanf("%f",&key);
            pos=-1;
    for(i=0;i<n;i++){
        if(x[i]==key){
            pos = i;
            break;
        }
        if (pos==-1)
         printf("%f is not number",key);
         else printf("%f is nmber %d ",key,i);


    }


}