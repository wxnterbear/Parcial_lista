#include <iostream>

using namespace std;
	
	struct Nodo {
		
		int num;
		struct Nodo *sig;
		
	};
	
	typedef struct Nodo *Tlista;
	
	 void insertNodo(Tlista& cabeza, int dato){
	 	
	 	Tlista x = new struct Nodo;
	 	
	 	x -> num = dato;
	 	x -> sig = x;
	 	cabeza = x;
	 	
	 }
	 
	void buscarNodo(Tlista& cabeza, int dato){
		
		Tlista x = cabeza;
    
   		 int i = 0, band = 0;

   		 while (x != NULL) {
    	
        if (x->num == dato) {
        	
            cout << endl << "Se encontro en la posicion: " << i;
            band = 1;
        }

        x = x->sig;
        i++;
    }

    if (band == 0) {
    	
        cout << endl << endl << "Numero no encontrado" << endl;
    }
			
		
}

	
	void actualizarNodo (Tlista&cabeza, int dato, int nuevo_dato){
		
		Tlista x = new struct Nodo;
		x -> num = dato;
		
		Tlista y = new struct Nodo;
		y -> num = nuevo_dato;
		
		
		
		
		
	} 
	 
	 
	 int main (){
	 	
	 	Tlista cabeza = NULL;
	 	
		int valor; 
		
		int valor2;
	 	
	 	cout << "-- Menu --" << endl;
	 	cout << "1. Insertar numeros" <<endl;
	 	cout << "2. Actualizar nodo" << endl;
	 	cout << "Escoja la opcion: " ;
	 	
	 	cin >> valor;
	 	
	 		switch (valor){
	 			
	 			
	 			case 1:
	 				
	 				cout << "Ingrese un numero (diferente a 0)";
	 				
	 				cin >> valor;
	 				
	 				while (valor != 0){
	 					
	 					insertNodo(cabeza, valor);
	 				
	 					cout<< endl;
	 					
					 }
					 
					 if (valor == 0){
					 	
					 	cout << "Numero no valido" << endl;
					 }
	 				
	 				
	 				
	 				break;
	 				
	 				
	 			case 2:
				 
				 	cout << "Que numero desea actualizar";
				 	cin >> valor;
				 	
				 	buscarNodo(cabeza,valor);
				 	
				 	cout << "Ingrese el nuevo numero";
				 	cin >> valor2;
				 	
				 	
					 
					break; 	
	 				
			 }
		
			
	 	
	 	
	 }
	
	
