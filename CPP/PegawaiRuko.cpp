#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Orang.cpp"
#include "Ruko.cpp"

using namespace std;


class PegawaiRuko : public Orang
{
private:
    string jabatan;
    int gaji;
    string tanggalMulaiKerja;
    Ruko tempatBekerja;
public:
    PegawaiRuko()
    {


    }


    PegawaiRuko(string nama, int usia, string alamat, string noTelp, string jabatan, int gaji, string tanggalMulaiKerja, Ruko tempatBekerja) : Orang(nama, usia, alamat, noTelp)
    {
        this->jabatan = jabatan;
        this->gaji = gaji;
        this->tanggalMulaiKerja = tanggalMulaiKerja;
        this->tempatBekerja = tempatBekerja;
    }

    // Getter methods
    string getJabatan() {
        return this->jabatan;
    }

    int getGaji() {
        return this->gaji;
    }

    string getTanggalMulaiKerja() {
        return this->tanggalMulaiKerja;
    }

    Ruko getTempatBekerja() {
        return this->tempatBekerja;
    }

    // Setter methods
    void setJabatan(string jabatan) {
        this->jabatan = jabatan;
    }

    void setGaji(int gaji) {
        this->gaji = gaji;
    }

    void setTanggalMulaiKerja(string tanggalMulaiKerja) {
        this->tanggalMulaiKerja = tanggalMulaiKerja;
    }

    void addTempatKerja(Ruko tempatBekerja) {
        this->tempatBekerja = tempatBekerja;
    }
    
    ~PegawaiRuko()
    {


    }
};