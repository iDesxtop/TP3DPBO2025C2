#pragma once
#include <iostream>
#include <string>


using namespace std;


class Ruko
{
private:
    string namaUsaha;
    string alamat;
    string jenisBisnis;
public:
    Ruko()
    {


    }


    Ruko(string namaUsaha, string alamat, string jenisBisnis)
    {
        this->namaUsaha = namaUsaha;
        this->alamat = alamat;
        this->jenisBisnis = jenisBisnis;
    }

    // Setter methods
    void setNamaUsaha(string namaUsaha) {
        this->namaUsaha = namaUsaha;
    }
    
    void setAlamat(string alamat) {
        this->alamat = alamat;
    }
    
    void setJenisBisnis(string jenisBisnis) {
        this->jenisBisnis = jenisBisnis;
    }
    
    // Getter methods
    string getNamaUsaha() {
        return this->namaUsaha;
    }
    
    string getAlamat() {
        return this->alamat;
    }
    
    string getJenisBisnis() {
        return this->jenisBisnis;
    }


    ~Ruko()
    {


    }
};