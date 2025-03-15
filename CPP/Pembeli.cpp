#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Orang.cpp"
#include "Ruko.cpp"
#include "Komputer.cpp"

using namespace std;


class Pembeli : public Orang
{
private:
    string noPembelian;
    string tanggalPebelian;
    Komputer komputerDibeli;
    Ruko rukoPembelian;
public:
    Pembeli()
    {


    }


    Pembeli(string nama, int usia, string alamat, string noTelp, string noPembelian, string tanggalPebelian, Komputer komputerDibeli, Ruko rukoPembelian) : Orang(nama, usia, alamat, noTelp)
    {
        this->noPembelian = noPembelian;
        this->tanggalPebelian = tanggalPebelian;
        this->komputerDibeli = komputerDibeli;
        this->rukoPembelian = rukoPembelian;
    }
    
    // Setter methods
    void setNoPembelian(string noPembelian) {
        this->noPembelian = noPembelian;
    }
    
    void setTanggalPembelian(string tanggalPembelian) {
        this->tanggalPebelian = tanggalPembelian;
    }
    
    void addKomputer(Komputer komputerDibeli) {
        this->komputerDibeli = komputerDibeli;
    }
    
    void addTempatBeli(Ruko rukoPembelian) {
        this->rukoPembelian = rukoPembelian;
    }
    
    // Getter methods
    string getNoPembelian() {
        return this->noPembelian;
    }
    
    string getTanggalPembelian() {
        return this->tanggalPebelian;
    }
    
    Komputer getKomputerDibeli() {
        return this->komputerDibeli;
    }
    
    Ruko getRukoPembelian() {
        return this->rukoPembelian;
    }
    
    ~Pembeli()
    {


    }
};