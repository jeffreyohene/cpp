#include <iostream>
using namespace std;

// Fonction pour convertir Celsius en Fahrenheit
double celsiusEnFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Fonction pour convertir Celsius en Kelvin
double celsiusEnKelvin(double celsius) {
    return celsius + 273.15;
}

// Fonction pour convertir Fahrenheit en Celsius
double fahrenheitEnCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Fonction pour convertir Fahrenheit en Kelvin
double fahrenheitEnKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5 / 9;
}

// Fonction pour convertir Kelvin en Celsius
double kelvinEnCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Fonction pour convertir Kelvin en Fahrenheit
double kelvinEnFahrenheit(double kelvin) {
    return (kelvin * 9 / 5) - 459.67;
}

// Fonction pour obtenir une saisie de température valide de l'utilisateur
double getValidTemperatureInput() {
    double temp;
    // Vérifier si la saisie est un nombre valide
    while (!(cin >> temp)) {
        cout << "Saisie invalide. Veuillez entrer un nombre : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return temp;
}

int main() {
    double temperature;
    int choix;

    cout << "Convertisseur de température\n";
    cout << "1. Celsius en Fahrenheit et Kelvin\n";
    cout << "2. Fahrenheit en Celsius et Kelvin\n";
    cout << "3. Kelvin en Celsius et Fahrenheit\n";
    cout << "Entrez votre choix (1-3) : ";
    
    // Obtenir un choix valide de l'utilisateur
    while (!(cin >> choix) || (choix < 1 || choix > 3)) {
        cout << "Choix invalide. Veuillez entrer un nombre entre 1 et 3 : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    switch (choix) {
        case 1:
            cout << "Entrez la température en Celsius : ";
            temperature = getValidTemperatureInput();
            cout << "Température en Fahrenheit : " << celsiusEnFahrenheit(temperature) << " F\n";
            cout << "Température en Kelvin : " << celsiusEnKelvin(temperature) << " K\n";
            break;

        case 2:
            cout << "Entrez la température en Fahrenheit : ";
            temperature = getValidTemperatureInput();
            cout << "Température en Celsius : " << fahrenheitEnCelsius(temperature) << " C\n";
            cout << "Température en Kelvin : " << fahrenheitEnKelvin(temperature) << " K\n";
            break;

        case 3:
            cout << "Entrez la température en Kelvin : ";
            temperature = getValidTemperatureInput();
            cout << "Température en Celsius : " << kelvinEnCelsius(temperature) << " C\n";
            cout << "Température en Fahrenheit : " << kelvinEnFahrenheit(temperature) << " F\n";
            break;
    }

    return 0;
}
