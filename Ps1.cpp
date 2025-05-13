
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main() {
    // Aufgabe 1.2: Hello Programmiersprachenkurs
    std::cout << "Hello Programmiersprachenkurs!" << std::endl;

    // Aufgabe 1.3: Kleinstes gemeinsames Vielfaches von 1 bis 20
    int lcm = 1;
    for (int i = 2; i <= 20; ++i) {
        int a = lcm, b = i;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        lcm = lcm * i / a;
    }
    std::cout << "LCM of 1 to 20 is: " << lcm << std::endl;

    // Aufgabe 1.4: Pythagorean triplet mit a+b+c = 1000
    for (int a = 1; a < 1000; ++a) {
        for (int b = a + 1; b < 1000 - a; ++b) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                std::cout << "Triplet: " << a << ", " << b << ", " << c << std::endl;
            }
        }
    }

    // Aufgabe 1.5: Array zufällige Zahlen, Maximum, Durchschnitt
    std::vector<int> zahlen = { 3, 8, 15, 6, 9 };
    int summe = 0, maximum = zahlen[0];
    for (int zahl : zahlen) {
        summe += zahl;
        if (zahl > maximum) maximum = zahl;
    }
    std::cout << "Maximum: " << maximum << ", Durchschnitt: " << (double)summe / zahlen.size() << std::endl;

    // Aufgabe 1.6: Muenzwurf Simulation
    int kopf = 0, zahl = 0;
    for (int i = 0; i < 1000; ++i) {
        if (rand() % 2) ++kopf; else ++zahl;
    }
    std::cout << "Kopf: " << kopf << ", Zahl: " << zahl << std::endl;

    // Aufgabe 1.7: Compiler, Linker, Debugger Begriffe
    std::cout << "Compiler: Uebersetzt Quellcode in Maschinencode." << std::endl;
    std::cout << "Linker: Verbindet verschiedene Programmteile zu einer lauffaehigen Datei." << std::endl;
    std::cout << "Debugger: Hilft Fehler im Programm zu finden und zu analysieren." << std::endl;

    return 0;
}
