//La expresion postfija se recorrera caracter a caracter, pero en ese proceso guardaremos las letras de la expresion en un arreglo de tamanio 25 
// Antes de ingresar al arreglo debemos recorrer este para verificar si la letra ya se encuentra en el arreglo
#include <stdio.h>
#include <string.h>

void main(){
	
  int i, tam_post;
  char letras[25];
  int valores[25];
  char expresion_post[100]="SVDT/+-"; //Aqui puede cambiar el nombre de la variable y la expresion

 tam_post=strlen(expresion_post);

  //Aqui recorremos la expresion postfija
  for (i=0;i<tam_post;i++){
	    if(expresion_post[i]<91 && expresion_post[i]>64){
	        if(letras[expresion_post[i]-65]==expresion_post[i])
	  	       break;
	  	  else	   
	  	       letras[expresion_post[i]-65]=expresion_post[i];
  	  }
	}

//Aqui lo que hacemos es poner el caracter 0 a todos los espacios vacios
	
	for (i=0;i<26;i++){
		if(letras[i]<64 || letras[i]>91)
		letras[i]='0';
	printf("\n %c",letras[i]);//Borrar printf es prueba
	}

//Aqui pedimos el valor de las letras

  for(i=0;i<27;i++){
  	if(letras[i]>64 && letras[i]<91){
  		printf("Ingrese valor de %c:",letras[i]);
  		scanf("%d",&valores[i]);
  	}
  	else valores[i]=0;
  }
  
  //Borrar esto es prueba
  for (i=0;i<26;i++)
	printf("\n %d",valores[i]);
	
	// Lo que seguiria es ya evaluar 
int des1;
int des2;
	for (i=0;i<tam_post;i++){
	    if(expresion_post[i]<91 && expresion_post[i]>64)	     //empilar(p,valores[expresion_post[i]-65]
	    if(expresion_post[i]=='+'){
	    	//des1=desempilar(p);
	    	//des2=desempilar(p);
	    	//encolar(p,des2+des1);
	    }
	    if(expresion_post[i]=='-'){
	    	//des1=desempilar(p);
	    	//des2=desempilar(p);
	    	//encolar(p,des2-des1);
	    }
	    if(expresion_post[i]=='*'){
	    	//des1=desempilar(p);
	    	//des2=desempilar(p);
	    	//encolar(p,des2*des1);
	    }
	    if(expresion_post[i]=='/'){
	    	//des1=desempilar(p);
	    	//des2=desempilar(p);
	    	//encolar(p,des2/des1);
	    }
	    if(expresion_post[i]==136){
	    	//des1=desempilar(p);
	    	//des2=desempilar(p);
	    	//encolar(p,pow(des2,des1));
	    }
	 }
  int resultado;
  //resultado=desencolar(p);
}
