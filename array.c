
1. c program arry use to input sum


#include<stdio.h>
int main(){
int a[100],sum =0,i,n;
float ave;
printf("how many number:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    sum=sum+a[i];
}
ave=sum/n;
printf("sum =%d",sum);
printf("average =%.f",ave);

    return 0;
}



2.write a program that can take some number and display maximum number .




#include<stdio.h>
int main(){
    int a[100],i,n,min,max;
    printf("how many");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("maximum is %d",max);
    printf("minimum is %d",min);
    return 0;
}




3.write a program display fibonacci number

#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("how many terms:");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-2]+a[i-1];
    }
    printf("__________________________________\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}


 4.copy one array element to another array 

#include<stdio.h>
int main(){
    int arr[10],n,i,array[10];
    printf("how many number");
    scanf("%d",n);
    //input array1 element
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array 1...");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("/n");
    //copy all element 
    for(i=0;i<n;i++){
        arr[i]=array[i];
    }
    //print array2
    printf("array 2....");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    getchar();
    return 0;
}

