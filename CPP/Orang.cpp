#pragma once
#include <iostream>
#include <string>


using namespace std;


class Orang
{
private:
    string nama;
    int usia;
    string alamat;
    string noTelp;
public:
    Orang()
    {


    }


    Orang(string nama, int usia, string alamat, string noTelp)
    {
        this->nama = nama;
        this->usia = usia;
        this->alamat = alamat;
        this->noTelp = noTelp;
    }

    // Getter methods
    string getNama() {
        return this->nama;
    }

    int getUsia() {
        return this->usia;
    }

    string getAlamat() {
        return this->alamat;
    }

    string getNoTelp() {
        return this->noTelp;
    }

    // Setter methods
    void setNama(string nama) {
        this->nama = nama;
    }

    void setUsia(int usia) {
        this->usia = usia;
    }

    void setAlamat(string alamat) {
        this->alamat = alamat;
    }

    void setNoTelp(string noTelp) {
        this->noTelp = noTelp;
    }

    ~Orang()
    {


    }
};