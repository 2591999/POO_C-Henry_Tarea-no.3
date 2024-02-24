#include <iostream>
using namespace std;
main(){
	//numero es postivo>0 o negatico<0
	  /*int num=0;
	 cout<<"Ingrese el Numero: ";
	 cin>>num;
	 if(num>0){
	 	//entra aca cuando la condicion es verdadera
	 	cout<<"Positivo"<<endl;
	 }else{
	 	if(num==0){
	 		cout<<"Neutro"<<endl;
		 }else{
		 	cout<<"Negativo"<<endl;
		 }
	 }*/
	 
	 	 /*string pais="";
	cout<<"Ingrese el pais: ";
	cin>>pais;
	if(pais=="Guatemala"){
		cout<<"yo soy de "<<pais<<" Mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}*/
	
	//determinar si un numero es par o impar
	 /*int num=0;
	cout<<"ingrese numero:";
	cin>>num;
	//dividir un numero entre dos su residuo es cero entonces es por caso contrario es par
	if ((num%2)==0){
		cout<<"par"<<endl;
	}else{
		cout<<"impar"<<endl;
	}*/
	
	//and (y) &&
	//or (o) ||
	 /*ar lapiz,lapicero,cuaderno;
	cout<<"trae Lapiz (s/n): ";
	cin>>lapiz;
	cout<<"trae lapicero (s/n):";
	cin>>lapicero;
	cout<<"Trae Cuaderno (s/n): ";
	cin>>cuaderno;
	
	//puede entrar a mi clase si usted trae un lapiz y un lapicero
	//and (y) = el valor es verdadero si ambas son verdaderas
	//OR (o) = el valor es verdadero si por lo menos ees verdadero
	//puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno
	if((lapiz=='s' || lapicero=='s' ) && cuaderno =='s'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"Lo siento no puede Ingresar"<<endl;
	}*/
	
	int codigo =0;
	cout<<"Ingrese codigo de area: ";
	cin>>codigo;
	switch(codigo){
		case 501 :cout<<"Belice"<<endl;
			break;
		case 502 :cout<<"Guatemala"<<endl;
			break;
		case 503 :cout<<"El Salvador"<<endl;
			break;
		case 504 :cout<<"Honduras"<<endl;
			break;
		case 505 :cout<<"Nicaragua"<<endl;
			break;
		case 506 :cout<<"Costa Rica"<<endl;
			break;
		case 507 :cout<<"Panama"<<endl;
			break;
		default :
			cout<<"Este codigo no es de centroamerica"<<endl;
	}

	system("pause");
}
