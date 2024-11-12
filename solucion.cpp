#include <iostream>

using namespace std;

main(){
	//cout<<"hola mundo";
	
    string numerosTelefonos[20] = {
        "+58-0412-1234567",
        "+58-0426-2345678",
        "+58-0424-3456789",
        "+58-0212-4567890",
        "+58-0412-5678901",
        "+58-0426-6789012",
        "+58-0424-7890123",
        "+58-0212-8901234",
        "+58-0412-9012345",
        "+58-0426-0123456",
        "+58-0424-1123456",
        "+58-0212-2234567",
        "+58-0412-3345678",
        "+58-0426-4456789",
        "+58-0424-5567890",
        "+58-0212-6678901",
        "+58-0412-7789012",
        "+58-0426-8890123",
        "+58-0424-9901234",
        "+58-0212-0012345"
    };

    string auxLocal[5], auxDigitel[5], auxMovistar[5] ,auxMovilnet[5] ;
    
    int contadorLoca = 0,contadorDigitel=0,  contadorMovistar=0, contadorMovilnet=0 , contadorPersonales=0;

    for (string numero : numerosTelefonos) {
    	
        if (numero[5] == '2' && numero[6] == '1' && numero[7] == '2') {
            auxLocal[contadorLoca] = numero; // le asignamos numero en auxLocal
            contadorLoca++; 
            //cout << numero << endl; 
            
        }else if( numero[6] == '1' && numero[7] == '2'){
        	
        	auxDigitel[contadorDigitel]=numero;
        	
        	contadorDigitel++;
        	contadorPersonales++;
        	
		}else if( numero[6] == '2' && numero[7] == '4' ){
			
			auxMovistar[contadorMovistar]=numero;
        	
        	contadorMovistar++;
        	contadorPersonales++;
			
		}else if( numero[6] == '2' && numero[7] == '6' ){
			
			auxMovilnet[contadorMovilnet]=numero;
        	
        	contadorMovilnet++;
        	contadorPersonales++;
			
		}
        
    }

//cout<<i;

  cout << endl << " Digitel: "<< endl << endl;
for (string numero : auxDigitel) {
    	
    	for(int i=4 ; i<=15 ; i++ ){
    		
    		cout << numero[i];
    		
		}
        cout<<endl;
    }

 cout << endl << " Movistar: "<< endl << endl;
 
 
for (string numero : auxMovistar) {
    	
    	for(int i=4 ; i<=15 ; i++ ){
    		
    		cout << numero[i];
    		
		}
        cout<<endl;
}



 cout << endl << " Movilnet: "<< endl << endl;
 
 
for (string numero : auxMovilnet) {
    	
    	for(int i=4 ; i<=15 ; i++ ){
    		
    		cout << numero[i];
    		
		}
        cout<<endl;
}


 cout << endl << " Locales: "<< endl << endl;
 
 
for (string local : auxLocal) {
    	
    	for(int i=4 ; i<=15 ; i++ ){
    		
    		cout << local[i];
    		
		}
        cout<<endl;
}

cout << endl <<  " Hay "  << contadorPersonales << " telefones personales y hay " << contadorLoca << " locales.";
    
	
}
