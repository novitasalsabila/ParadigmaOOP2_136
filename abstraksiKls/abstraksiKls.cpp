#include <iostream>

using namespace std;

class AbstraksiKlas {
private: string x, y;

public:

    // method untuk mengisi nilai  
    // private member
    void setXY(string a, string b) { //digunakan untuk mengisi nilai dari atribut x dan y yang berada dalam kelas.
        x = a;
        y = b;
    }
    //menampilkan nilai  
    void display() { //digunakan untuk menampilkan nilai dari atribut x dan y ke output menggunakan cout
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
int main() {
    AbstraksiKlas ak;
    ak.setXY("Yogyakarta", "Kampus");
    ak.display();

    return 0;
}
