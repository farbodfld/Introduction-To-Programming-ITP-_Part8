#include <iostream>
using namespace std;
struct contact{
    char esm[21] = "";
    char lastname[21] = "";
    int number = 0;
    contact *anotherone; //= nullptr;
};
bool barabaristrings(char *a, char *b)
{
    while (*a != 0 && *b != 0)
        if (*a++ != *b++)
            return false;
    return *a == 0 && *b == 0;
}
void ijadtaghirat (contact* h, char *name, char *famili, int size)
{
    contact* feeeli = h;
    while ((feeeli->anotherone != nullptr && !barabaristrings(feeeli->esm, name)) || (feeeli->anotherone != nullptr && !barabaristrings(
            feeeli->lastname, famili)))
        feeeli = feeeli->anotherone;
    if (barabaristrings(feeeli->esm, name) && barabaristrings(feeeli->lastname, famili)){
        feeeli -> number = size;
        return;
    }
    cout << "Contact doesn't exist" << endl;
}
void vooroodi(char *target, char *sooje)
{
    while (*sooje)
        *(target++) = *(sooje++);
}
void dls(contact* adres, char *name, char *esmekhanevadegi, int shomarande)
{
    while (adres->anotherone != nullptr)
        adres = adres->anotherone;
    contact *adamjadid = new contact;
    adamjadid->number = shomarande;
    vooroodi(adamjadid->lastname, esmekhanevadegi);
    vooroodi(adamjadid->esm, name);
    adres->anotherone = adamjadid;
}
void namayesh(contact* head)
{
    contact* feli = head;
    if (head == nullptr){
        cout << "Contact list is empty" << endl;
    } else {
        while (feli->anotherone != nullptr) {
            cout << feli->esm << ' ' << feli->lastname << ' ' << feli->number << endl;
            feli = feli->anotherone;
        }
        cout << feli->esm << ' ' << feli->lastname << ' ' << feli->number << endl;
    }
}
void showNumber (contact* top, char *NAME, char *namEKhanevadegi)
{
    contact* feli = top;
    while ((feli->anotherone != nullptr && !barabaristrings(feli->esm, NAME)) || (feli->anotherone != nullptr && !barabaristrings(
            feli->lastname, namEKhanevadegi)))
        feli = feli->anotherone;
    if (barabaristrings(feli->esm, NAME) && barabaristrings(feli->lastname, namEKhanevadegi)) {
        cout << feli->number << endl;
        return;
    }
    cout << "Contact doesn't exist" << endl;
}
int main() {
    contact *ghabli = new contact;
    char WeHaveToDo, esm[21], famili[21];
    int number;
    while (true) {
        cin >> WeHaveToDo;
        /*if (WeHaveToDo = 'X') {
            return 0;
        } else if (WeHaveToDo = 'N') {
            cin >> esm >> famili;
            showNumber(ghabli, esm, famili);
        } else if (WeHaveToDo = 'A') {
            cin >> esm >> famili >> number;
            dls(ghabli, esm, famili, number);
        } else if (WeHaveToDo = 'S') {
            namayesh(ghabli->anotherone);
        } else if (WeHaveToDo = 'E') {
            cin >> esm >> famili >> number;
            ijadtaghirat(ghabli, esm, famili, number);
        }*/

         switch (WeHaveToDo) {
             case 'A':
                 cin >> esm >> famili >> number;
                 dls(ghabli, esm, famili, number);
                 break;
             case 'E':
                 cin >> esm >> famili >> number;
                 ijadtaghirat(ghabli, esm, famili, number);
                 break;
             case 'N':
                 cin >> esm >> famili;
                 showNumber(ghabli, esm, famili);
                 break;
             case 'S':
                 namayesh(ghabli->anotherone);
                 break;
             case 'X':
                 return 0;

         }
    }
   // return 0;
}
