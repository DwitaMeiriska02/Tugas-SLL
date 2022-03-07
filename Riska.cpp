#include <iostream>

using namespace std;

//komponen
struct Makanan{
 string makanan_pokok, cemilan, minuman;
 Makanan *next;

};

int main(){
    
    Makanan *node1, *node2, *node3;

    node1 = new Makanan();
    node2 = new Makanan();
    node3 = new Makanan();
    
    node1->makanan_pokok = "Ayam Bakar";
    node1->cemilan = "Cah Kangkung";
    node1->minuman = "Es Jeruk";
    node1->next = node2;

    node2->makanan_pokok = "Nasi Goreng";
    node2->cemilan = "Kerupuk";
    node2->minuman = "Es Teh";
    node2->next = node3;

    node3->makanan_pokok = "Soto Babat";
    node3->cemilan = "Kerupuk Soto";
    node3->minuman = "Teh Anget";
    node3->next = NULL;

    Makanan *cur;
    cur = node1;
    while( cur != NULL ) {
        cout << "Nama Makanan Pokok :" << cur->makanan_pokok << endl;
        cout << "Nama Cemilan :" << cur->cemilan << endl;
        cout << "Nama Minuman  :" << cur->minuman << endl;

        cur = cur->next;

    }


}