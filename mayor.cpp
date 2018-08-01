#include <stdio.h>
#include <iostream>
#include <cstdlib>
main(int argc, char* argv[])
{
      int a,b,c,may,men,med;
      
      printf("identifique el mayor medio y menor numero");
      printf("\n Ingrese a: ");
      scanf("%d",&a);
      printf("\n Ingrese b: ");
      scanf("%d",&b);
      printf("\n Ingrese c: ");
      scanf("%d",&c);
            
      may=a;
      if (b>may)
         may=b;      
      if (c>may)
         may=c;      
  
        men=a;
      if (b<men)
         men=b;      
      if (c<men)
         men=c;      
            
      if(may>a && a>men)
         med=a;
      if(may>b && b>men)
         med=b;
      if(may>c && c>men)
         med=c;
        
      if(a==b && a==c && b==c) 
               printf("\n Los tres numeros son iguales\n"); 
           else if(a==b) 
               a<c ? printf("\n El primero (a) \"%d\" y el segundo (b) \"%d\" son iguales, y el tercero \"%d\" es el mayor\n",a,b,c) : printf("\n El primero \"%d\" y el segundo \"%d\" son iguales, y el tercero \"%d\" es el menor\n",a,b,c);  
           else if(a==c) 
               a<b ? printf("\n El primero (a) \"%d\" y el tercero (c) \"%d\" son iguales, y el segundo \"%d\" es el mayor\n",a,c,b) : printf("\n El primero \"%d\" y el tercero \"%d\" son iguales, y el segundo \"%d\" es el menor\n",a,c,b);     
           else if(b==c) 
               b<a ? printf("\n El segundo (b) \"%d\" y el tercero (c) \"%d\" son iguales, y el primero \"%d\" es el mayor\n",b,c,a) : printf("\n El segundo \"%d\" y el tercero \"%d\" son iguales, y el primero \"%d\" es el menor\n",b,c,a);
           else{ 
                printf("\n El numero mayor es ===> %d",may);
                printf("\n El numero medio es ===> %d",med);
                printf("\n El numero menor es ===> %d",men);  
                }
      
            
      getchar();
      getchar();
      return 0;

}
