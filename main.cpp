#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; //hiba, felreiras, kimaradt a '_'
    std::cout << '1-100 ertekek duplazasa' //hiba, dupla idezojelekbe kell kerulnie a stringnek
    for (int i = 0;)    //hiba, nincs feltetel a loopban, sem novekedes
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hiba, a feltetel nem megfelelo
    {
        std::cout << "Ertek:" //hiba, nincs a sor végén ';' karakter
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;     //hiba, az atlag nincs inicializalva
    for (int i = 0; i < N_ELEMENTS, i++) //hiba ',' karakter helyett ';' hasznalando
    {
        atlag += b[i] //hiba, nincs ';' karakter
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
