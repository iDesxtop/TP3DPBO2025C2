#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "Ruko.cpp"
#include "Orang.cpp"
#include "PemilikRuko.cpp"
#include "PegawaiRuko.cpp"
#include "Pembeli.cpp"


using namespace std;


int main() {
    ios::sync_with_stdio(0); cin.tie();


    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");


    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive);
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));

    Ruko ruko1("Senja Store", "Jl. Raya No. 1", "Toko Komputer");
    Ruko ruko2("Matahari Store", "Jl. Raya No. 2", "Toko Baju");

    PemilikRuko pemilikRuko("Budi", 35, "Jl. Taruna Baru 5", "087825673174", "1234567890", "BCA", 5, {ruko1});

    pemilikRuko.addRuko(ruko2);

    PegawaiRuko pegawaiRuko("Andi", 25, "Jl. Taruna Baru 6", "087825673175", "Kasir", 3000000, "01-01-2020", ruko1);

    Pembeli pembeli1("Cahya", 20, "Jl. Taruna Baru 7", "087832132132", "1235461231", "20-01-2020", komputer, ruko1);

     // Print data for Pembeli
     cout << "=== DATA PEMBELI ===" << endl;
     cout << "Nama: " << pembeli1.getNama() << endl;
     cout << "Usia: " << pembeli1.getUsia() << " tahun" << endl;
     cout << "Alamat: " << pembeli1.getAlamat() << endl;
     cout << "No. Telp: " << pembeli1.getNoTelp() << endl;
     cout << "No. Pembelian: " << pembeli1.getNoPembelian() << endl;
     cout << "Tanggal Pembelian: " << pembeli1.getTanggalPembelian() << endl;
     
     // Komputer details (bought by Pembeli)
     cout << "\n=== KOMPUTER DIBELI ===" << endl;
     Komputer komputerPembeli = pembeli1.getKomputerDibeli();
     cout << "Nama Komputer: " << komputerPembeli.getNama() << endl;
     
     // CPU details
     Cpu cpuPembeli = komputerPembeli.getCpu();
     cout << "CPU Merk: " << cpuPembeli.getMerk() << endl;
     cout << "CPU Nama: " << cpuPembeli.getNama() << endl;
     cout << "CPU Jumlah Core: " << cpuPembeli.getJumlahCore() << endl;
     cout << "CPU Kecepatan: " << cpuPembeli.getKecepatanGHz() << " GHz" << endl;
     
     // RAM details
     vector<Ram> ramListPembeli = komputerPembeli.getRamList();
     cout << "RAM (Total " << ramListPembeli.size() << " module):" << endl;
    for(int i = 0; i < ramListPembeli.size(); i++) {
        cout << "  RAM #" << (i+1) << ":" << endl;
        cout << "    Merk: " << ramListPembeli[i].getMerk() << endl;
        cout << "    Nama: " << ramListPembeli[i].getNama() << endl;
        cout << "    Kapasitas: " << ramListPembeli[i].getKapasitasGB() << " GB" << endl;
        cout << "    Tipe: " << ramListPembeli[i].getDdr() << endl;
    }
        
        // Harddrive details
        Harddrive hddPembeli = komputerPembeli.getHarddrive();
        cout << "Harddrive Merk: " << hddPembeli.getMerk() << endl;
        cout << "Harddrive Nama: " << hddPembeli.getNama() << endl;
        cout << "Harddrive Kapasitas: " << hddPembeli.getKapasitasGB() << " GB" << endl;
        cout << "Harddrive Tipe: " << hddPembeli.getTipeDrive() << endl;
        
        // Ruko details (where Pembeli bought the computer)
        cout << "\n=== RUKO PEMBELIAN ===" << endl;
        Ruko rukoPembeli = pembeli1.getRukoPembelian();
        cout << "Nama Usaha: " << rukoPembeli.getNamaUsaha() << endl;
        cout << "Alamat: " << rukoPembeli.getAlamat() << endl;
        cout << "Jenis Bisnis: " << rukoPembeli.getJenisBisnis() << endl;
        
        // Print data for Pemilik Ruko
        cout << "\n=== PEMILIK RUKO ===" << endl;
        cout << "Nama: " << pemilikRuko.getNama() << endl;
        cout << "Usia: " << pemilikRuko.getUsia() << " tahun" << endl;
        cout << "Alamat: " << pemilikRuko.getAlamat() << endl;
        cout << "No. Telp: " << pemilikRuko.getNoTelp() << endl;
        cout << "NPWP: " << pemilikRuko.getNPWP() << endl;
        cout << "Rekening Bank: " << pemilikRuko.getRekeningBank() << endl;
        cout << "Lama Menjadi Pemilik: " << pemilikRuko.getLamaMenjadi() << " tahun" << endl;
        
    // List of Ruko owned
    vector<Ruko> rukoList = pemilikRuko.getListRuko();
    cout << "Daftar Ruko (" << rukoList.size() << " ruko):" << endl;
    int rukoCount = 1;
    for(int i = 0; i < rukoList.size(); i++) {
        cout << "  Ruko #" << rukoCount++ << ":" << endl;
        cout << "    Nama Usaha: " << rukoList[i].getNamaUsaha() << endl;
        cout << "    Alamat: " << rukoList[i].getAlamat() << endl;
        cout << "    Jenis Bisnis: " << rukoList[i].getJenisBisnis() << endl;
    }
    
    // Print data for Pegawai Ruko
    cout << "\n=== PEGAWAI RUKO ===" << endl;
    cout << "Nama: " << pegawaiRuko.getNama() << endl;
    cout << "Usia: " << pegawaiRuko.getUsia() << " tahun" << endl;
    cout << "Alamat: " << pegawaiRuko.getAlamat() << endl;
    cout << "No. Telp: " << pegawaiRuko.getNoTelp() << endl;
    cout << "Jabatan: " << pegawaiRuko.getJabatan() << endl;
    cout << "Gaji: Rp " << pegawaiRuko.getGaji() << endl;
    cout << "Tanggal Mulai Kerja: " << pegawaiRuko.getTanggalMulaiKerja() << endl;
    
    // Tempat bekerja
    Ruko tempatKerja = pegawaiRuko.getTempatBekerja();
    cout << "Tempat Bekerja:" << endl;
    cout << "  Nama Usaha: " << tempatKerja.getNamaUsaha() << endl;
    cout << "  Alamat: " << tempatKerja.getAlamat() << endl;
    cout << "  Jenis Bisnis: " << tempatKerja.getJenisBisnis() << endl;

    return 0;
}
