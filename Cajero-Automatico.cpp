/*hacer un programa que simule un cajero automatico en el cual puedas
retirar dinero, ingresar dinero y consultar dinero en cuenta.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
	system("color 1f");
	float saldo = 0, ingresado, retirar, opc;
	
	cout<<"\n\n\n\n\n\n\t\t\t========================================="<<endl;
	cout<<"\t\t\tPrograma que simula un cajero automatico."<<endl;
	cout<<"\t\t\t========================================="<<endl<<endl;
	cout<<"\t\t\t     Pulsa una tecla para continuar.";
	
	while(opc != 4){
		system("pause>null");
		system("cls");
			cout<<"\t    ////////  //      ///////  ||    //  ////////  //////))         /////\)    ////////  //      ////////"<<endl;
			cout<<"\t   //    //  //         //     ||   //  //        //      ))       //    ))  //    //  //      //    //"<<endl;
			cout<<"\t  //    //  //         //      ||  //  /////     //  ///))        ///)) //  //    //  //      //    //"<<endl;
			cout<<"\t //    //  //         //       || //  //        //     //        //        //    //  //      //    //"<<endl;
			cout<<"\t////////  ///////  ///////     ||//  ////////  //       //      //        ////////  /////// ////////"<<endl<<endl;
			
			cout<<"\t\t\t\t  ================="<<endl;
			cout<<"\t\t\t\t  Cajero Automatico"<<endl;
			cout<<"\t\t\t\t  ================="<<endl;
		cout<<"\nQue operacion desea realizar."<<endl;
		cout<<"1. Ingresar dinero."<<endl;
		cout<<"2. Retirar dinero."<<endl;
		cout<<"3. Consultar."<<endl;
		cout<<"4. Salir."<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>opc;
								
		switch(int (opc)){
			case 1:
				cout<<"Cuanto dinero desea ingresar: ";
				cin>>ingresado;
				saldo += ingresado;
				if(ingresado < 0){
					cout<<"---------------------------------"<<endl;
					cout<<"No puede ingresar saldo negativo."<<endl;
					cout<<"---------------------------------"<<endl;
					saldo -= ingresado;
				}
				else{
				cout<<"----------------------------------"<<endl;
				cout<<"Su dinero en cuenta es: "<<fixed<<setprecision(2)<<saldo<<endl;
				cout<<"----------------------------------"<<endl;					
				}
				break;		
			case 2:
				cout<<"Cuanto dinero desea retirar: ";
				cin>>retirar;
				if(retirar<0){
					cout<<"--------------------------------"<<endl;
					cout<<"No puede retirar saldo negativo."<<endl;
					cout<<"--------------------------------"<<endl;			
				}
				else if(retirar>saldo){
					cout<<"--------------------------------"<<endl;
					cout<<"No tiene esa cantidad de dinero."<<endl;
					cout<<"--------------------------------"<<endl;
				}
				else{
					saldo -= retirar;
					cout<<"---------------------------------"<<endl;
					cout<<"Su dinero en cuenta es: "<<fixed<<setprecision(2)<<saldo<<endl;
					cout<<"---------------------------------"<<endl;
				}
				break;
			case 3:
				cout<<"----------------------------------"<<endl;
				cout<<"Su dinero en cuenta es: "<<fixed<<setprecision(2)<<saldo<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 4:
				cout<<"\nPreciona cualquier tecla para salir.";
				break;
			default :
			cout<<"------------------------------"<<endl;
			cout<<"Digite una opcion entre [1-4]."<<endl;	
			cout<<"------------------------------"<<endl;
			break;
		}
	}
	
	getch();
	return 0;	
}
