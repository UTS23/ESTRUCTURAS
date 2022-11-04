#include <iostream>
#include <string.h>
using namespace std;
 
struct medico
{
	string doctor, enfermedad;
};
 
struct domicilio
{
	string calle, colonia;
	int numero;
};
 
struct paciente
{
	string nombre, apep, apem, familiar;
	domicilio dom;
	medico med;
};
 
 
void borrar();
int bme=0;
int bde=0;
 
int main()
{//Inicia main
	paciente pac[100];
	string buscar, buscardoc;
 
	int n,p=0,j,i;
 
	do
	{
		cout<<"Bienvenido, ingrese la opcion de su preferencia:"<<endl;
		cout<<"1.- Ingresar pacientes"<<endl;
		cout<<"2.- Mostrar pacientes"<<endl;
		cout<<"3.- Buscar paciente por su nombre"<<endl;
		cout<<"4.- Buscar pacientes de doctor especifico"<<endl;
		cout<<"5.- Dar de alta paciente"<<endl;
		cout<<"6.- Pacientes dados de alta"<<endl;
		cout<<"7.- Salir"<<endl;
		cin>>n;
 
		system("cls");
		switch(n)
		{//Inicia switch
 
		  case 1:
		  	{
		  		cout<<"Cuantos pacientes desea registrar?  ";
		  		cin>>p;
 
		  		for (i=0; i<p; i++)
		  		{//Inicia for pedir datos
		  		  cout<<"Ingrese los datos del paciente Numero "<<"["<<i+1<<"]: "<<endl;
 
		  		  cout<<"Nombre(s): ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].nombre);
 
		  		  cout<<"Apellido Paterno: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].apep);
 
		  		  cout<<"Apellido Materno: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].apem);
 
		  		  cout<<"Nombre del familiar responsable: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].familiar);
 
		  		  cout<<"Domicilio"<<endl;
		  		  cout<<"Calle: ";
		  		  getline(cin,pac[i].dom.calle);
 
		  		  cout<<"Numero: ";
		  		  fflush(stdin);
		  		  cin>>pac[i].dom.numero;
 
		  		  cout<<"Colonia: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].dom.colonia);
 
		  		  cout<<"Nombre del Doctor: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].med.doctor);
 
		  		  cout<<"Padecimiento: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].med.enfermedad);
		  		  cout<<endl;
		  		  system("cls");
 
				}//CIerra for para pedir datos
 
				system("pause>null");
				system("cls");
			}//termina case 1
			break;
 
			case 2:
				{
					cout<<"Los pacientes ingresados en el hospital son: "<<endl<<endl;
					if(p==0)
					{
						cout<<"Hospital vacio... No hay pacientes registrados"<<endl;
						system("pause>null");
						system("cls");
					}				
					for(i=0; i<p; i++)
					{
 
 
						cout<<"----------------------------------------------"<<endl;
						cout<<"Paciente numero "<<"["<<i+1<<"]: "<<endl;
						cout<<"Nombre: "<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl;
						cout<<"Familiar Responsable del paciente: "<<pac[i].familiar<<endl;
						cout<<"Domicilio: "<<pac[i].dom.calle<<" #"<<pac[i].dom.numero<<" "<<pac[i].dom.colonia<<endl;
						cout<<"Doctor encargado: "<<pac[i].med.doctor<<endl;
						cout<<"Padecimiento: "<<pac[i].med.enfermedad<<endl;
						cout<<"----------------------------------------------"<<endl;
						cout<<endl<<endl;
 
					}
 
 
				system("pause>null");
				system("cls");	
				}//Termina case 2
				break;
 
			case 3:
				{
		           cout<<"Escriba el nombre del paciente que desea buscar (no apellidos): ";
		           fflush(stdin);
		           getline(cin,buscar);
		           cout<<"Informacion del paciente solicitado: "<<endl<<endl;
 
		           for(i=0; i<p; i++)
		           {    
	               	    if(pac[i].nombre==buscar)
	             	    {
							cout<<"----------------------------------------------"<<endl;
							cout<<"Paciente numero "<<"["<<i+1<<"]: "<<endl;
							cout<<"Nombre: "<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl;
							cout<<"Familiar Responsable del paciente: "<<pac[i].familiar<<endl;
							cout<<"Domicilio: "<<pac[i].dom.calle<<" #"<<pac[i].dom.numero<<" "<<pac[i].dom.colonia<<endl;
							cout<<"Doctor encargado: "<<pac[i].med.doctor<<endl;
							cout<<"Padecimiento: "<<pac[i].med.enfermedad<<endl;
							cout<<"----------------------------------------------"<<endl;
							cout<<endl<<endl;
							bme=1;
 
						}
						if(bme!=1)
	               	    {
	               		    cout<<"Paciente no registrado..."<<endl;
					    }
                	}               	
 
				   system("pause>null");
				   system("cls");	
				}
				break;
 
			case 4:
			{
		           cout<<"Escriba el nombre del doctor para saber que pacientes atiende: ";
		           fflush(stdin);
		           getline(cin,buscardoc);
		           cout<<"El doctor atiende a los siguientes pacientes: "<<endl<<endl;
 
		           for(i=0; i<p; i++)
		           {	
	                	if (pac[i].med.doctor==buscardoc)
	                	{
					   	    cout<<"----------------------------------------------"<<endl;
							cout<<"Paciente numero "<<"["<<i+1<<"]: "<<endl;
							cout<<"Nombre: "<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl;
							cout<<"Familiar Responsable del paciente: "<<pac[i].familiar<<endl;
							cout<<"Domicilio: "<<pac[i].dom.calle<<" "<<pac[i].dom.numero<<" "<<pac[i].dom.colonia<<endl;
							cout<<"Padecimiento: "<<pac[i].med.enfermedad<<endl;
							cout<<"----------------------------------------------"<<endl;
							cout<<endl<<endl;
							bde=1;		
					    }
					   if(bde!=1)
	                    {
	                   		cout<<"El doctor no tiene pacientes en este momento...";
		               	}
	                }
 
				  system("pause>null");
				  system("cls");	
			}				
				break;
 
			case 5:
				{
 
				}
				break;
 
			case 6:
				break;			
 
			default:
			  exit (0);
		}//Cierra switch
 
	}while(n!=7);
 
 
}//Cierra main
