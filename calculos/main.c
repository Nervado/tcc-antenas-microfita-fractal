/* Programa que realiza o cálculo automático das dimensões*/
/* para um antena de microfita com patch retangular       */
#include<stdio.h>
#include<math.h>
float Si(float X){
      float r;
      r = X - pow(X,3)/18 +  pow(X,5)/600;
      return r;     
       }
int main(){
    float f,h,err,W,L,efrr,DL,lz,I,X,k,s,G_1,R;
    float pi = 3.141592654;
    float y;
    f = 10.0;//frequencia desejada
    h = 0.1588;//altura do substratro
    err= 2.2;//permissividade relativa do substrato
    W = (30/(2*f))*sqrt(2/(err+1));//resultado da formula em centímetros largura
    efrr = ((err+1)/2)+((err-1)/2)*pow((1 + 12*(h/W)),-(0.5))  ;//permissividade efetiva
    DL = h*( 0.412*((efrr + 0.3)/(efrr - 0.258))*((W/h + 0.264)/(W/h + 0.8)));
    L = (30/(2*f*sqrt(efrr))) - 2*DL;
    printf("\n o valor de w = %f e efrr = %f  e DL = %f e L = %f \n",W,efrr,DL,L);
    /*calculo da alimentação inset-feed*/
    lz=30/f;// comprimento de onda no espaço livre
    k = (2*pi)/lz;//número de onda no espaço livre
    X = W*k;
    s = Si(X);//calculo da funçao seno integral
    I = -2 + cos(X) + X*s + sin(X)/X;
    G_1 = I/(120*pow(pi,2));//condutancia de entrada
    R = 1/(2*G_1 + 2*0.000691086);//resistencia de entrada
    y = (L/pi)*acos(sqrt(50/R));
    printf("\n y = %f\n",y);
    system("pause");    
    }
