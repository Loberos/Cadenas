#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <locale.h>
#include <vector>
#include <sstream>
#include <regex>

using namespace System;
using namespace std;

void contarCarect() {

    string cadena = "No me quisieron como una luz de esperanza, ahora se condenarán a una obscuridad eterna";
    cout << cadena << endl;
    int logitud = cadena.length();
    cout << "La frase tiene: " << logitud << " caracteres" << endl;


    size_t posicion;
    string palabraBuscar;
    cout << "Palabra a buscar: "; cin >> palabraBuscar;

    posicion = cadena.find(palabraBuscar);

    if (posicion != string::npos) {
        cout << "SI se encontro la palabra" << endl;
    }
    else cout << "NO se encontro la palabra" << endl;
}
void contarPalabras() {
    int conPalabras = 0;
    int z;
    char cadena[100] = "No me quisieron como una luz de esperanza, ahora se condenarán a una obscuridad eterna";

    z = strlen(cadena);

    for (int i = 0; i < z; i++) {
        if (cadena[i + 1] == ' ' || cadena[i + 1] == '\0') {
            conPalabras++;
        }
    }
    cout << "La cantidad de palabras es: " << conPalabras;
}
void invertirCarat() {
    string cadena = "No me quisieron como una luz de esperanza, ahora se condenarán a una obscuridad eterna";
    cout << cadena << endl;
    reverse(cadena.begin(), cadena.end());
    cout << cadena << endl;
}
void palindromoPalabra() {
    string palabra1 = "radar";
    string palabra2 = "fasgawg";

    if (palabra1 == string(palabra1.rbegin(), palabra1.rend())) {
        cout << "Si es palindromo" << endl;
    }
    else cout << "No es palindromo" << endl;

    if (palabra2 == string(palabra2.rbegin(), palabra2.rend())) {
        cout << "Si es palindromo" << endl;
    }
    else cout << "No es palindromo" << endl;
}
void partirCadena() {
    string texto = "No me quisieron como una luz de esperanza, ahora se condenarán a una obscuridad eterna";
    vector<string> palabras{};
    char espacio = ' ';
    istringstream iss(texto);
    copy(istream_iterator<string>(iss),
        istream_iterator<string>(),
        back_inserter(palabras));

    for (const auto& str : palabras) {
        cout << str << endl;
    }
}
void NumeroRomano() {

    int unidades, decenas, centenas, millares, numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    unidades = numero % 10;
    numero /= 10;

    decenas = numero % 10;
    numero /= 10;

    centenas = numero % 10;
    numero /= 10;

    millares = numero % 10;
    numero /= 10;


    switch (millares)
    {
    case 1: cout << "M"; break;
    case 2: cout << "MM"; break;
    case 3: cout << "MMM"; break;
    }

    switch (centenas)
    {
    case 1: cout << "C"; break;
    case 2: cout << "CC"; break;
    case 3: cout << "CCC"; break;
    case 4: cout << "CD"; break;
    case 5: cout << "D"; break;
    case 6: cout << "DC"; break;
    case 7: cout << "DCC"; break;
    case 8: cout << "DCCC"; break;
    case 9: cout << "CM"; break;
    }

    switch (decenas)
    {
    case 1: cout << "X"; break;
    case 2: cout << "XX"; break;
    case 3: cout << "XXX"; break;
    case 4: cout << "XL"; break;
    case 5: cout << "L"; break;
    case 6: cout << "LX"; break;
    case 7: cout << "LXX"; break;
    case 8: cout << "LXXX"; break;
    case 9: cout << "XC"; break;
    }

    switch (unidades)
    {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    }
}
void imprimirFecha() {
    int dia, mes, anio;
    string mes1;

    cout << "Ingrese dia" << endl;
    cin >> dia;
    cout << "Ingrese mes" << endl;
    cin >> mes;
    cout << "Ingrese año" << endl;
    cin >> anio;

    switch (mes)
    {
    case 1: mes1 = "Enero";  break;
    case 2:mes1 = "Febreo"; break;
    case 3:mes1 = "Marzo"; break;
    case 4:mes1 = "Abril"; break;
    case 5:mes1 = "Mayo"; break;
    case 6:mes1 = "Junio"; break;
    case 7:mes1 = "Julio"; break;
    case 8:mes1 = "Agosto"; break;
    case 9:mes1 = "Septiembre"; break;
    case 10:mes1 = "Octubre"; break;
    case 11:mes1 = "Noviembre"; break;
    case 12:mes1 = "Diciembre"; break;
    }
    cout << dia << " de " << mes1 << " del " << anio << endl;
}
void convertirMayuscula() {
    string cadena = "No me quisieron como una luz de esperanza, ahora se condenarán a una obscuridad eterna";
    for (int i = 0; i < cadena.length(); i++) {
        cadena[i] = toupper(cadena[i]);
    }
    cout << cadena;
}
void convertirMinuscula() {
    string cadena = "NO ME QUISIERON COMO UNA LUZ DE ESPERANZA, AHORA SE CONDENARAN A UNA OBSCURIDAD ETERNA";
    for (int i = 0; i < cadena.length(); i++) {
        cadena[i] = tolower(cadena[i]);
    }
    cout << cadena;
}
void reemplazarPalabra() {
    string palabraRemplazar, nuevapalabra;
    string cadena = "No me quisieron como una luz de esperanza, ahora se condenarán a una obscuridad eterna";
    cout << cadena << endl;
    cout << "Palabra a reemplazar:";
    cin >> palabraRemplazar;
    cout << "Nueva Palabra: ";
    cin >> nuevapalabra;
    string nuveCadena = regex_replace(cadena, regex(palabraRemplazar), nuevapalabra);
    cout << nuveCadena << endl;
}

void main()
{
    setlocale(LC_ALL, "");

    int num;

    contarCarect();
    cout << endl;
    invertirCarat();
    cout << endl;
    contarPalabras();
    cout << endl;
    palindromoPalabra();
    cout << endl;
    partirCadena();
    cout << endl;
    NumeroRomano();
    cout << endl;
    imprimirFecha();
    cout << endl;
    convertirMayuscula();
    cout << endl;
    convertirMinuscula();
    cout << endl;
    reemplazarPalabra();

    _getch();

}
