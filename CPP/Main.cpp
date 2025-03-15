#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"


using namespace std;


int main() {
    ios::sync_with_stdio(0); cin.tie();


    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");


    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive);
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));

    

    return 0;
}
