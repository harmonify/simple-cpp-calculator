#include <iostream>
#include <iomanip> //fungsi setw()
#include <cmath> //fungsi perpangkatan
#include <conio.h> //funsgi getch() dan getche()

using namespace std;

int main()
{
    looper :
    cout << "Program Kalkulator Sederhana \n";
    cout << "============================\n";
    cout << setw(22) << "by : Wendy SW \n\n";

    //deklarasi
    double a , b , hasil;
    char aritmatika;
    string looper , label_error;

    //input
    cout << "Masukkan nilai pertama : "; cin >> a;
    cout << "Masukkan operator ( + , - , * , / , ^ ) : "; cin >> aritmatika;
    cout << "Masukkan nilai kedua : "; cin >> b;
    cout << endl;

    //proses
    switch (aritmatika)
    {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            hasil = a / b;
            break;
        case '^':
            hasil = pow(a,b);
            break;
        default:
            cout << "(operator anda salah)\n" << '\a' << endl;
            goto label_error;
    }

    //output
    cout << "Hasil nya adalah " << hasil << "\n\n";

    //perulangan
    label_error :
    cout << "Apakah kamu ingin mengulang program ini?\n(y/n) : "; looper = getch();
    if (looper == "y")
    {
        system("CLS"); goto looper;
    }
    else if (looper == "n")
    {
        cout << "\nProgram Selesai" << endl;
    }
    else
    {
        goto label_error;
    };

    system("pause");//agar program tdk lngsung berhenti


    return 0;
}
