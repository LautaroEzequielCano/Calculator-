#include <stdio.h>
#include <stdlib.h>



struct stComplejo{

float fImaginario,fReal;

};
void ingreso(struct stComplejo *);
void sumaC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo *suma);
void restaC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo *resta);
void MultiC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo *multi);
void divC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo multi, struct stComplejo *div,struct stComplejo *ayudiv);
void Menu9(int *menus);
void Menu2(int *menus2);
void Menu1(int *menus1);
void mcde(int entero,int divisor,int resto,int cociente,int entero2,int mcd,int aux);
    void division(int entero, int divisor, int *resto, int *cociente);
void divisores(int entero,int divisor,int resto,int cociente);
void Menu3(int *menus3);
void ingresoP2(float polin_m[],int *m,char x[][14]);
void ingresoP1(float polin_n[],int *n,char x[][14]);
void sumaP(float polin_m[], float polin_n[],int n,int m,float resultadop[],char x[][14]);
void restaP(float polin_m[], float polin_n[],int n, int m,float resultadop[],char x[][14]);
void multip(float polin_n[], float polin_m[],float polin_r[], int n, int m, char x[][14]);
void chelini(float polin_m[],float polin_n[],int *n, float polin_r[],float resultadop[]);
void muestropolins(float polin_m[], float polin_n[],int n, int m,char x[][14]);


void main(){
    char x[19][14]={{"x"},{"x^2"},{"x^3"},{"x^4"},{"x^5"},{"x^6"},{"x^7"},{"x^8"},{"x^9"},{"x10"},{"x^11"},{"x^12"},{"x^13"},{"x^14"},{"x^15"},{"x^16"},{"x^17"},{"x^18"},{"x^19"}};
int i,vi,vr,n,m,v,g,resto2,salir,ln;
    int entero,divisor,resto,cociente,entero2,mcd,aux;
    int jaj;
  int menus,menus2,menus1,menus3,menus4;
     float polin_n[20]={0}, polin_m[20]={0},resultadop[20]={0},polin_r[40]={0};

    struct stComplejo Complejo1,Complejo2,suma,resta,multi,div,ayudiv;
    menus=9;
while(menus!=0)
{
    if(menus==9)
    {


        Menu9(&menus);

    }else if(menus==2)
    {
        printf("\nIngreso del primer complejo:\n");
        ingreso(&Complejo1);

               printf("\nIngreso del segundo complejo:\n");
        ingreso(&Complejo2);
        menus2=8;
        while(menus2!=99 && menus2!=0){
        Menu2(&menus2);

        if(menus2==0)
        {
        menus=0;

        } else if(menus2==1)
            {
                ingreso(&Complejo1);
            } else if(menus2==2)
                {
                    ingreso(&Complejo2);
                } else if(menus2==3)
                    {
            printf("\nComplejo 1: %2.2f + %2.2fi \n",Complejo1.fReal, Complejo1.fImaginario);
    printf("Complejo 2: %2.2f + %2.2fi \n",Complejo2.fReal, Complejo2.fImaginario);

                        sumaC(Complejo1,Complejo2,&suma);
                        printf("La suma de los complejos es:%2.2f+%2.2fi \n",suma.fReal,suma.fImaginario);
                    } else if(menus2==4)
                        {
            printf("\nComplejo 1: %2.2f + %2.2fi \n",Complejo1.fReal, Complejo1.fImaginario);
    printf("Complejo 2: %2.2f + %2.2fi \n",Complejo2.fReal, Complejo2.fImaginario);

                        restaC(Complejo1,Complejo2,&resta);
                        printf("La resta de los complejos es:%2.2f+%2.2fi\n",resta.fReal,resta.fImaginario);
                        } else if(menus2==5)
                            {
            printf("\nComplejo 1: %2.2f + %2.2fi \n",Complejo1.fReal, Complejo1.fImaginario);
    printf("Complejo 2: %2.2f + %2.2fi \n",Complejo2.fReal, Complejo2.fImaginario);

                                MultiC(Complejo1,Complejo2,&multi);
                                printf("La multiplicacion de los complejos es:%2.2f + %2.2fi\n",multi.fReal,multi.fImaginario);
                            } else if(menus2==6)
                            {
            printf("\nComplejo 1: %2.2f + %2.2fi \n",Complejo1.fReal, Complejo1.fImaginario);
    printf("Complejo 2: %2.2f + %2.2fi \n",Complejo2.fReal, Complejo2.fImaginario);

                            divC(Complejo1,Complejo2,multi,&div,&ayudiv);
                            printf("La division de los complejos es:(%2.2f + %2.2fi)/%2.2f\n",div.fReal,div.fImaginario,ayudiv.fReal);
                            }else if(menus2==99)
        {
            menus=9;
            system("cls");
        }
    }
    }else if(menus==1)
    {
        menus1=8;
        while(menus1!=99 && menus1!=0){

        Menu1(&menus1);


       if(menus1==1)
       {
           mcde(entero,divisor,resto,cociente,entero2,mcd,aux);
       }else if(menus1==99)
        {
            menus=9;
            system("cls");
        }else if(menus1==0){
        menus=0;

        }else if(menus1==2)
       {
           divisores(entero,divisor,resto,cociente);

       }
    }


} else if(menus==3){
        menus3=55;
        for(i=0;i>=20;i++){
    polin_n[i]=polin_n[i]-polin_n[i];
    }
        for(i=0;i>=20;i++);{
        polin_m[i]=polin_m[i]-polin_m[i];
    }

        ingresoP1(polin_n,&n,x);
         ingresoP2(polin_m, &m,x);
        while(menus3!=99 && menus3!=0){
        Menu3(&menus3);

            if(menus3==99)
        {
            menus=9;
            system("cls");
        }else if(menus3==0)
        {
        menus=0;

        }else if(menus3==1){
                for(i=0;i>=20;i++){
    polin_n[i]=polin_n[i]-polin_n[i];
    }

               ingresoP1(polin_n,&n,x);
            }else if(menus3==2){
                for(i=0;i>=20;i++);{
        polin_m[i]=polin_m[i]-polin_m[i];
    }

                ingresoP2(polin_m, &m,x);
            }else if(menus3==3){
              i=0;
              while(i!=20){
      resultadop[i]=0;
      i++;
  }
                g=2;
                sumaP(polin_m, polin_n, n, m,resultadop,x);
         if(m>n){
     ln=m;
  }else{

      ln=n;
  }

   printf("\n\nSuma: ");
for(v=ln; v>=1; v--){

    if(resultadop[v]!=0){
printf(" %g%s +", resultadop[v], x[v-1]);
}
}
              printf(" %g\n", resultadop[0]);

            }else if(menus3==4){
              i=0;
              while(i!=20){
      resultadop[i]=0;
      i++;
  }

                g=2;
                restaP(polin_m, polin_n, n, m,resultadop,x);


   printf("\n\nResta: ");

  if(m>n){
     ln=m;
  }else{

      ln=n;
  }

    for(v=ln; v>=1; v--){
        if(resultadop[v] != 0){
printf(" %g%s +", resultadop[v], x[v-1]);
}
}

                printf(" %g", resultadop[0]);
            }else if(menus3==7){



                if(g==3){

                    n=n+m;
                }

                 if(g==2){
                    for(v=0;v<=n;v++)
                polin_n[v] = resultadop[v];
            }else if(g==3){



                    for(v=0;v<=n;v++){
                    polin_n[v] = polin_r[v];
                }
              }else if(g==4){
                for(v=1;v<=n+1;v++){
                  polin_n[v-1] = resultadop[v];
                }
                n=n-1;
              }
            }else if(menus3==5){
              g=3;
              i=0;
              while(i!=20){
      resultadop[i]=0;
      i++;
  }

                multip(polin_n,polin_m,polin_r,n,m,x);


                printf("\n \nMultiplicacion:");

	for(v=(n+m)+1;v>=1;v--){
        if(polin_r[v]!=0){
        printf(" %g%s +",polin_r[v],x[v-1]);
    }
    }

                printf(" %g ",polin_r[0]);
}else if(menus3==6){
  g=4;
  i=0;
  while(i!=20){
resultadop[i]=0;
i++;
}

                if(m==1 && polin_m[1]==1)
                {

                chelini(polin_m,polin_n,&n,polin_r,resultadop);

                    printf("p(x)=");
    for(i=n;i>=1;i--){
        printf(" %g%s +",polin_n[i],x[i-1]);

    }
    printf(" %g",polin_n[0]);

    printf("\n");

  printf("q(x)=");


    for(i=m;i>=1;i--){
        printf(" %g%s +",polin_m[i],x[i-1]);

    }
    printf(" %g",polin_m[0]);

                printf("\nDivision: ");
                v=n-1;
                for(vi=n;vi>=2;vi--){

                    v--;
                    if(resultadop[vi] != 0){
                printf("%g%s + ",resultadop[vi],x[v]);
                }
                }
                printf("%g",resultadop[1]);
                salir=0;
                while(salir!=1){
                printf("\n\n\n Quiere saber el teorema del resto?\n1-si\n2-no\n");
                scanf("%i",&resto2);

                    if(resto2==1)
                    {
                        printf("El resto es: %g\n",resultadop[0]);
                        salir=1;
                    }
                else if(resto2==2)
                    {
                        salir=1;
                    }

                }
            }else{
                 printf("Polinomio 2 no puede ser utilizado para dividir con ruffini\n");
                }
            }else if(menus3==8){
              muestropolins(polin_m,polin_n,n,m,x);
            }
        }
}else if(menus==4){

        printf("\n              ***CREDITOS***\n");
        printf("\n       Laboratorio de Programacion\n");
        printf("       Jefe de Departamento Prof. Lic. Ariel Leibouski\n");
        printf("\n       Programado por los alumnos de 7mo5ta:\n");
        printf("       Cano Lautaro\n");
        printf("       Pisurnia Diego\n");
        printf("       Rivas Marcelo\n");
        printf("       Romero Flavio\n");
        printf("\nIngrese 99 para continuar: ");
        scanf("%d",&menus4);
        menus=9;

    }
}
}


void muestropolins(float polin_m[], float polin_n[],int n, int m,char x[][14]){
  int i;
  i=0;
      printf("p(x)=");
      for(i=n;i>=1;i--){
          printf(" %g%s +",polin_n[i],x[i-1]);

      }
      i=0;
      printf(" %g",polin_n[0]);

      printf("\n");

i=0;
    printf("q(x)=");


      for(i=m;i>=1;i--){
          printf(" %g%s +",polin_m[i],x[i-1]);

      }
      i=0;
      printf(" %g \n\n",polin_m[0]);

}
void chelini(float polin_m[],float polin_n[],int *n, float polin_r[],float resultadop[]){
    int divisor;
    int resultado;

    int resultado3;
    int i,p;
    i=0;
    p=0;
    divisor=polin_m[0];

    divisor=divisor*(-1);





    resultadop[*n]=polin_n[*n];


    for(i= *n; i>=0; i--){


        polin_r[i]=(resultadop[i])*(divisor);

                 resultadop[i-1]=polin_r[i]+polin_n[i-1];







    }

    }




void multip(float polin_n[], float polin_m[],float polin_r[], int n, int m, char x[][14]){
int i,v,l;

    for(i=0;i<=40;i++) polin_r[i] = 0;



     printf("\np(x)=");
    for(i=n;i>=1;i--){
        printf(" %g%s +",polin_n[i],x[i-1]);

    }
    printf(" %g",polin_n[i]);

    printf("\n");

  printf("q(x)=");


    for(i=m;i>=1;i--){
        printf(" %g%s +",polin_m[i],x[i-1]);

    }
    printf(" %g",polin_m[0]);

    printf("\n");
    printf("\n");
    printf("\n");

       if(m>n){ l=n; n=m; m=l;}



    for(i=0;i<=n;i++){

        for(l=0;l<=m;l++){


   polin_r[i+l]=polin_r[i+l]+(polin_n[i] * polin_m[l]);

}
    }

    polin_r[0]=polin_n[0]*polin_m[0];


    }



void restaP(float polin_m[], float polin_n[],int n, int m, float resultadop[],char x[][14])
{
    int i, ti;


    printf("p(x)=");
    for(i=n;i>=1;i--){
        printf(" %g%s +",polin_n[i],x[i-1]);

    }
    printf(" %g",polin_n[0]);

    printf("\n");

  printf("q(x)=");


    for(i=m;i>=1;i--){
        printf(" %g%s +",polin_m[i],x[i-1]);

    }
    printf(" %g",polin_m[0]);

    for(i=0; i<=m; i++){
        resultadop[i]=polin_m[i];
        resultadop[i]=resultadop[i] * (-1);
    }


  if(m>n){
     ti=m;
  }else{

      ti=n;
  }

    for(i=0;i<=ti;i++){

        resultadop[i]=polin_n[i]+resultadop[i];
    }

}




void sumaP(float polin_m[], float polin_n[],int n,int m,float resultadop[], char x[][14])
{
    int i, ti;



    printf("p(x)=");
    for(i=n;i>=1;i--){
        printf(" %g%s +",polin_n[i],x[i-1]);

    }
    printf(" %g",polin_n[i]);

    printf("\n");

  printf("q(x)=");


    for(i=m;i>=1;i--){
        printf(" %g%s +",polin_m[i],x[i-1]);

    }
    printf(" %g",polin_m[0]);

  if(m>n) n=m;
    for(i=0;i<=n;i++){

        resultadop[i]=(polin_m[i]+polin_n[i]);
    }

}

void ingresoP2(float polin_m[],int *m,char x[][14])
{
    int i;


        do{
   printf("\n introducir el grado de q(x): ");
   scanf("%d", &*m);

  }while(*m<0 || *m>20);

    i=0;
    printf("termino independiente: ");
    scanf("%f", &polin_m[i]);
  for(i=1; i<= *m; i++){
  printf("coeficiente %s: ",x[i-1]);
   scanf("%f", &polin_m[i]);
  }


}
void ingresoP1(float polin_n[],int *n,char x[][14])
{
    int i;




    do{
   printf(" Introducir el grado de p(x): ");
   scanf("%d", &*n);
  }while(*n<0 || *n>20);

    i=0;
    printf("Termino independiente: ");
    scanf("%f", &polin_n[i]);
  for(i=1; i<=*n; i++){
  	printf("Coeficiente %s: ",x[i-1]);
   scanf("%f", &polin_n[i]);
  }

}
void divisores(int entero,int divisor,int resto,int cociente)
{

    resto=0;
cociente=0;
divisor=0;

printf("Ingrese el numero entero: \n");
scanf("%d",&entero);

printf("Los divisores de %d son:",entero);

for(divisor=1; divisor<=entero; divisor++)
{
    resto=0;
cociente=0;
division(entero,divisor,&resto,&cociente);

    if(resto==0)
    {
    printf("\n %d \n",divisor);
    }
}


}

void mcde(int entero,int divisor,int resto,int cociente,int entero2,int mcd,int aux)
{
    resto=1;
cociente=0;
divisor=0;

printf("Ingrese el numero entero: \n");
scanf("%d",&entero);

printf("Ingrese el segundo numero: \n");
scanf("%d",&entero2);


if(entero>entero2)
{
aux=entero;
divisor=entero2;
}
else
{
aux=entero;
divisor= entero;
entero= entero2;
}

while(resto!=0)
{
        division(entero,divisor,&resto,&cociente);

            if(resto!=0)
              {
		entero=divisor;
		divisor=resto;
		}

else
{
                mcd=divisor;
		}





}
printf("El mcd entre %d y %d es %d\n \n",aux,entero2,divisor);

}

void Menu3(int *menus3)
{

        printf("\n 0-Salir\n");
        printf("1-Cambiar primer polinomio\n");
        printf("2-Cambiar segundo polinomio\n");
        printf("3-Sumar los polinomios\n");
        printf("4-Restar los polinomios\n");
        printf("5-Multiplicar los polinomios\n");
        printf("6-Dividir primer polinomio con ruffini \n");
        printf("7-Cargar resultado en polinomio 1\n");
        printf("8-Mostrar polinomios\n");
        printf("99-Menu anterior\n");
        scanf("%d",&*menus3);
    }

void division(int entero, int divisor, int *resto, int *cociente)
{
    *resto=0;
*cociente=0;
    *cociente=entero/divisor;
    *resto=entero-(*cociente * divisor);

}

void Menu1(int *menus1)
{

    printf("\n0-Salir\n");
    printf("1-Mcd\n");
    printf("2-Divisores\n");
    printf("99-Menu anterior\n");
    scanf("%d", &*menus1);
    }
//}
void Menu2(int *menus2)
{

    printf("\n\n0-Salir\n");
    printf("1-Cambiar Complejo 1\n");
    printf("2-Cambiar Complejo 2 \n");
    printf("3-Sumar los complejos\n");
    printf("4-Restar los complejos\n");
    printf("5-Multiplicar los complejos\n");
    printf("6-Dividir los complejos\n");
    printf("99-Menu anterior\n");
    scanf("\n\n %d",&*menus2);
    }

//}
void Menu9(int *menus)
{

    system("cls");
    printf("0-Salir\n");
    printf("1-Operaciones con numeros naturales\n");
    printf("2-Complejos\n");
    printf("3-Polinomios\n");
    printf("4-Creditos\n");

    printf("\n ingresa una opcion: ");
    scanf("%d",&*menus);
    }

void ingreso(struct stComplejo *Complejo){
float vi,vr;



    printf("\nValor real:\n");
    scanf("%f",&vr);
    Complejo->fReal=vr;

    printf("\nValor imaginario:\n");
    scanf("%f",&vi);
    Complejo->fImaginario=vi;

}

void sumaC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo *suma)
{


    suma->fReal = Complejo1.fReal + Complejo2.fReal;
        suma->fImaginario = Complejo1.fImaginario + Complejo2.fImaginario;
}

void restaC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo *resta){



    resta->fReal = Complejo1.fReal - Complejo2.fReal;
        resta->fImaginario = Complejo1.fImaginario - Complejo2.fImaginario;

}

void MultiC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo *multi)
{


    multi->fReal = Complejo1.fReal * Complejo2.fReal - Complejo1.fImaginario * Complejo2.fImaginario;

    multi->fImaginario = Complejo1.fReal * Complejo2.fImaginario + Complejo2.fReal * Complejo1.fImaginario;


}

void divC(struct stComplejo Complejo1, struct stComplejo Complejo2, struct stComplejo multi, struct stComplejo *div,struct stComplejo *ayudiv)
{


    float complejo1real,complejo1imag,complejo2real,complejo2imag;



   complejo1real=Complejo1.fReal;
        complejo1imag=Complejo1.fImaginario;
        complejo2real=Complejo2.fReal;
        complejo2imag=Complejo2.fImaginario;

    Complejo2.fImaginario=Complejo2.fImaginario*(-1);

    MultiC(Complejo1,Complejo2,&multi);

    div->fReal = multi.fReal;

    div->fImaginario = multi.fImaginario;

    Complejo1.fReal = Complejo2.fReal;

    Complejo1.fImaginario = Complejo2.fImaginario;
    Complejo2.fImaginario = complejo2imag;

    MultiC(Complejo1,Complejo2,&multi);

    ayudiv->fReal = multi.fReal;






}
