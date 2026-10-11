#include <iostream>
#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    }
    return "Taquicardia";
}

int main() {
    std::cout << "Modulo de signos vitales" << std::endl;
    
    int lpm;
    std::cout << "Frecuencia cardiaca (lpm): ";
    std::cin >> lpm;
    std::cout << "Clasificacion: " << clasificarFrecuencia(lpm) << std::endl;
    
    return 0;
}
