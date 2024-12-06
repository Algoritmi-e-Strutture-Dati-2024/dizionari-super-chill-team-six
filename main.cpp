#include <iostream>
#include "DizionarioEsteso.cpp"
#include <string>

int main() { 
    DizionarioEsteso<int> dizionario;

    dizionario.inserisci("Casa", 3);
    dizionario.inserisci("Palazzo", 20);
    dizionario.inserisci("Cane", 8);

    std::cout << "Contenuto del dizionario dopo gli inserimenti:\n";
    dizionario.stampa();

    dizionario.inserisci("Csaa", 6);
    dizionario.inserisci("naCe", 7);
    
    std::cout << "\nContenuto del dizionario dopo aggiunta delle voci con collisioni:\n";
    dizionario.stampa();

    std::cout << "\nValore associato a 'Casa': " << dizionario.recupera("Casa") << "\n";
    std::cout << "Valore associato a 'naCe': " << dizionario.recupera("naCe") << "\n";

    if (dizionario.appartiene("Palazzo")) {
        std::cout << "'Palazzo' è presente nel dizionario.\n";
    }
    if (!dizionario.appartiene("Gatto")) {
        std::cout << "'Gatto' non è presente nel dizionario.\n";
    }

    if (dizionario.cancella("Casa")) {
        std::cout << "'Casa' è stato rimosso dal dizionario.\n";
    } else {
        std::cout << "'Casa' non è stato trovato nel dizionario.\n";
    }

    std::cout << "\nContenuto del dizionario dopo la rimozione di 'Casa':\n";
    dizionario.stampa();

    if (!dizionario.cancella("Gatto")) {
        std::cout << "'Gatto' non esiste nel dizionario, impossibile rimuoverlo.\n";
    }

    std::cout << "\nSituazione finale del dizionario:\n";
    dizionario.stampa();

    return 0;
}
