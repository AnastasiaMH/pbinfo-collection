// ID:25
// Nume prblm: CelMaiMareNr
// CREDITE birau.anastasia pe INSTAGRAM

int cmmnr(int n)
{
    int v[10]={0}; // vector definit pe 0
    int cif, nr=0; // variabile ajutatoare
    
    while (n) { // cat timp n mai are cifre
        cif=n%10; // cif = ultima cifra a lui n
        v[cif]++; // pozitia cifrei din vector o crestem cu 1
        n/=10; // taiem ultima cifra fin numar
    }
    
    n = 0; // setam numarul pe 0
    
    for (int i=9; i>=0; i--) // folosim un for ca sa trecem prin vector de la cea mai mare cifra la cea mai mica
        for (int j=1; j<=v[i]; j++) // folosim inca un for ca sa vedem de cate ori a fost salvata acea cifra in vector ( cat de mare ii valuarea din vector )
            nr=nr*10+i; // adaugam cifra la numar (daca exista in vector)
    return nr;
}

// Ana..... lasa.te de github..... :) glm :) but comment ur stuff, and add a .cpp at the end of the file name :)
