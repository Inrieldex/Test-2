#include <stdio.h>
main()
{
    int a[4]={3,5,7,9};
    int i,*p,*q;
    for(i=0;i<4;i++)
    printf("%d ",a[i]); //第1种方式，候选答案： 1. a[i]    2. &a[i]  3. a+i  想想为什么？
    printf("\n");
    for(i=0;i<4;i++)
    printf("%d ",*(a+i)); //第2种方式，候选答案： 1. *(a+i)    2. &a[i]  3. a+i  想想为什么？
    printf("\n");
    //让p指向数组a，通过p来访问数组a的各个元素 
    p=a;
    for(i=0;i<4;i++)
    printf("%d ",p[i]); //第3种方式，候选答案： 1. p[i]    2. &p[i]  3. p+i  想想为什么？
   printf("\n");
   for(i=0;i<4;i++)
   printf("%d ",*(p+i)); //第4种方式，候选答案： 1. *(p+i)    2. &p[i]  3. p+i  想想为什么？
   printf("\n"); 
   for(i=0;i<4;i++)
   {q=&a[i]; //第5种方式，让q指向a[i]，然后访问*q或者q[0]，候选答案： 1. a[i]    2. &a[i]  3. a+i  想想为什么？
   printf("%d ",*q); 
   }
1145141919
  
}
