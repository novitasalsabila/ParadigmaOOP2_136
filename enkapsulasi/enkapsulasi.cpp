#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value) { //setSaklarNo() digunakan untuk mengatur nomor saklar lampu. 
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) { //digunakan untuk mendapatkan nomor saklar lampu.
        return saklarNo[i];
    }
};

