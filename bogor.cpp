#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14159265359;
    double diameter_ban_cm;
    double jarak_km;
    double keliling_ban_cm;
    double jarak_cm;
    double total_putaran;

    // Input data
    cout << "Masukkan diameter ban motor (cm): ";
    cin >> diameter_ban_cm ;

    cout << "Masukkan jarak tempuh (km): ";
    cin >> jarak_km;

    // hitung keliling ban
    keliling_ban_cm = PI * diameter_ban_cm;
    jarak_cm = jarak_km * 100000;
    total_putaran = jarak_cm / keliling_ban_cm;

    // Output
    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Keliling ban        : " << keliling_ban_cm << " cm" << endl;
    cout << "Jarak tempuh        : " << jarak_cm << " cm" << endl;
    cout << "Total putaran roda  : " << total_putaran << " putaran" << endl;

    return 0;
}