#include <iostream>
using namespace std;


class seseorang {
public:
    virtual void pesan() = 0;
    //virtual void pesan(){
    //cout <<"pesan dari seseorang" <<endl;
    //}
};

class joko :public seseorang {
public:
    void pesan() {
        cout << "pesan dari joko" << endl;
    }
};


class lia : public seseorang {
public:
    void pesan() {
        cout << "pesan dari lia" << endl;
    }
};

int main()
{
    seseorang* obyek;//membuat pointer seseorang* obyek yang akan digunakan untuk merujuk pada objek kelas turunan
    joko a; //membuat objek joko dengan nama a dan objek lia dengan nama b.
    lia b;

    obyek = &a; 
    obyek->pesan(); //obyek->pesan(); memanggil metode pesan() dari objek yang ditunjuk oleh obyek.
    obyek = &b;
    obyek->pesan();
    //a.seseorang::pesan();
    return 0;
}
