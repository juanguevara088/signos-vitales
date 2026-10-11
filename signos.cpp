#include <iostream>
#include <string>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

std::string clasificarFrecuencia(int bpm) {
    if (bpm < 60) return "Bradicardia";
    else if (bpm <= 100) return "Normal";
    else return "Taquicardia";
}

int main() {
    std::cout << "Modulo de signos vitales" << std::endl;
    return 0;
}