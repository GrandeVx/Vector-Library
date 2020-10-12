#define DIMENSIONE 50
#include <iostream>

using namespace std;

	class Container {
	public:
		
		Container(int dimensione = DIMENSIONE, bool ordinato = false, bool crescente = false) { usati = 0; Organizzare = ordinato; Crescente = crescente; Memoria = new int[dimensione]; capacita = dimensione; };
		
		~Container() { delete Memoria; };

	void diritti();
	void Esposizione();
	 
	void cerescente();
	void Decrescente();
	void organizzazione();


	void Crea(int dim);
	int dimensione();
	int conta(int el);
	int cancella(int el);
	int ricerca(int i);
	bool cancellauno(int el);
	bool inserisci(int el);	
	
	private:
		bool Organizzare;
		bool Crescente;
		int* Memoria;
		int usati;
		int capacita;	
	};
	
