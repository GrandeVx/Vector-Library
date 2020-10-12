#include <iostream>
#include "memoria.h"
int main(){
	
	Container C = Container(5);
		
	C.inserisci(1);
		C.inserisci(12);
			C.inserisci(32);
				C.inserisci(21); 
				C.inserisci(32);
			C.cancella(32);
	C.Esposizione();
	
}
