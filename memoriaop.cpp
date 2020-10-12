#include "memoria.h"

// Funzione Destinata unicamente al controllo del Funzionamento del Sistema
void Container::diritti() { cout << "Sviluppato da Vittorio D'Alfonso \n"; }

void Container::Esposizione() {
	cout << " Memoria Occupata :> " << capacita << "\n";
	cout << " Spazio Usato :> " << usati << "\n";
	cout << " V Contenuto V \n";
	cout << " | ";
	for (int i = 0; i < usati; i++) {
		cout << " " << Memoria[i] << " ";
	}
	cout << " | ";
	cout << "\n";
}

// Funzione Dedicata alla Ricerca della quantità di spazio Utilizzata
int Container::dimensione() { return usati; };

void Container::cerescente() {
	int let;
	for (int i = 0; i < usati; i++) {
		for (int j = i; j < usati; j++) {
			if (Memoria[i] > Memoria[j]) {
				let = Memoria[i];
				Memoria[i] = Memoria[j];
				Memoria[j] = let;
			}
		}
	}
	return;
}

void Container::Decrescente() {
	int let;
	for (int i = 0; i < usati; i++) {
		for (int j = i; j < usati; j++) {
			if (Memoria[i] < Memoria[j]) {
				let = Memoria[i];
				Memoria[i] = Memoria[j];
				Memoria[j] = let;
			}
		}
	}
	return;
}


// Procedura Dedicata alla Organizzazione della Memoria
void Container::organizzazione() {
	if (Organizzare) { if (Crescente) { cerescente(); } else { Decrescente(); }; }
	return;
}



// Funzione Dedicata alla ricerca di quante volte un Dato elemento è incluso nella Memoria
int Container::conta(int el) {
	int quantita = 0;
	for (int i = 0; i < usati; i++) { if (Memoria[i] == el) quantita++; }
	return quantita;
}

// Funzione Dedicata alla cancellazione di tutti gli spazi di memoria che includono un dato elemento
int Container::cancella(int el) {
	int operazioni = 0;

	for (int i = 0; i < usati; i++)
	{
		if (Memoria[i] == el)
		{
			usati--;
			Memoria[i] = Memoria[usati];
			i--;
		}
	}
	return operazioni;
}
// Funzione Dedicata alla ricerca del valore contenuto in una specifica sezione della memoria
int Container::ricerca(int i) {
	if (i < usati && i > 0) { return Memoria[i]; };
	return false;
}

// Funzione Dedicata alla cancellazione del primo spazio di memoria che include un dato elemento
bool Container::cancellauno(int el) {
	for (int i = 0; i < usati;i++) {
		if (Memoria[i] == el) {
			usati--;
			Memoria[i] = Memoria[usati];
			return true;
		}
	}
	return false;
}

// Funzione Dedicata all'inserimento di un dato valore all'interno della memoria (ultima posizione)
bool Container::inserisci(int el) {
	if (usati == capacita) {
		Crea(usati);
		capacita++;
	}
	Memoria[usati] = el;

	usati++;
}


void Container::Crea(int dim) {
	if (dim == capacita) return;

	if (dim = usati) dim = usati;

	int* v = new int[dim];

	for (int i = 0;i < usati; i++) {
		v[i] = Memoria[i];
	}
	delete[] Memoria;
	capacita = dim;
	Memoria = v;

}
