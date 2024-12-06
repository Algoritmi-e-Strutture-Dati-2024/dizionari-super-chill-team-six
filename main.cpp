#include <iostream>
#include "DizionarioEsteso.cpp"
#include <string>

int main() { 
    DizionarioEsteso<int> dizionario;

    dizionario.inserisci("Casa", 3);
    dizionario.inserisci("Palazzo", 20);
    dizionario.inserisci("Cane", 8);

    std::cout << "Contenuto del dizionario dopo gli inserimenti:" << std::endl;
    dizionario.stampa();

    dizionario.inserisci("Csaa", 6);
    dizionario.inserisci("naCe", 7);
    
    std::cout << "\nContenuto del dizionario dopo aggiunta delle voci con collisioni:" << std::endl;
    dizionario.stampa();

    std::cout << "\nValore associato a 'Casa': " << dizionario.recupera("Casa") << "\n";
    std::cout << "Valore associato a 'naCe': " << dizionario.recupera("naCe") << "\n";

    if (dizionario.appartiene("Palazzo")) {
        std::cout << "'Palazzo' è presente nel dizionario." << std::endl;
    }
    if (!dizionario.appartiene("Gatto")) {
        std::cout << "'Gatto' non è presente nel dizionario." << std::endl;
    }

    if (dizionario.cancella("Casa")) {
        std::cout << "'Casa' è stato rimosso dal dizionario." << std::endl;
    } else {
        std::cout << "'Casa' non è stato trovato nel dizionario." << std::endl;
    }

    std::cout << "\nContenuto del dizionario dopo la rimozione di 'Casa':" << std::endl;
    dizionario.stampa();

    if (!dizionario.cancella("Gatto")) {
        std::cout << "'Gatto' non esiste nel dizionario, impossibile rimuoverlo." << std::endl;
    }

    std::cout << "\nSituazione finale del dizionario:" << std::endl;
    dizionario.stampa();

    return 0;
}
