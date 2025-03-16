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
    string tanggalPembelian;
    Komputer komputerDibeli;
    Ruko rukoPembelian;
public:
    Pembeli()
    {


    }


    Pembeli(string nama, int usia, string alamat, string noTelp, string noPembelian, string tanggalPembelian, Komputer komputerDibeli, Ruko rukoPembelian) : Orang(nama, usia, alamat, noTelp)
    {
        this->noPembelian = noPembelian;
        this->tanggalPembelian = tanggalPembelian;
        this->komputerDibeli = komputerDibeli;
        this->rukoPembelian = rukoPembelian;
    }
    
    // Setter methods
    void setNoPembelian(string noPembelian) {
        this->noPembelian = noPembelian;
    }
    
    void setTanggalPembelian(string tanggalPembelian) {
        this->tanggalPembelian = tanggalPembelian;
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
        return this->tanggalPembelian;
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