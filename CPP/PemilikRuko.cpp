#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Orang.cpp"
#include "Ruko.cpp"

using namespace std;


class PemilikRuko : public Orang
{
private:
    string NPWP;
    string rekeningBank;
    int lamaMenjadi;
    vector<Ruko> listRuko;
public:
    PemilikRuko()
    {


    }


    PemilikRuko(string nama, int usia, string alamat, string noTelp, string NPWP, string rekeningBank, int lamaMenjadi, vector<Ruko> listRuko) : Orang(nama, usia, alamat, noTelp)
    {
        this->NPWP = NPWP;
        this->rekeningBank = rekeningBank;
        this->lamaMenjadi = lamaMenjadi;
        this->listRuko = listRuko;
    }

    // Setter methods
    void setNPWP(string NPWP) {
        this->NPWP = NPWP;
    }

    void setRekeningBank(string rekeningBank) {
        this->rekeningBank = rekeningBank;
    }

    void setLamaMenjadi(int lamaMenjadi) {
        this->lamaMenjadi = lamaMenjadi;
    }

    void setListRuko(vector<Ruko> listRuko) {
        this->listRuko = listRuko;
    }

    // Getter methods
    string getNPWP() {
        return this->NPWP;
    }

    string getRekeningBank() {
        return this->rekeningBank;
    }

    int getLamaMenjadi() {
        return this->lamaMenjadi;
    }

    vector<Ruko> getListRuko() {
        return this->listRuko;
    }

    void addRuko(Ruko ruko) {
        this->listRuko.push_back(ruko);
    }
    
    ~PemilikRuko()
    {


    }
};