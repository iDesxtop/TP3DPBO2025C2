from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Komputer import Komputer
from Ruko import Ruko
from Orang import Orang
from PemilikRuko import PemilikRuko
from PegawaiRuko import PegawaiRuko
from Pembeli import Pembeli

# Create components
cpu = Cpu("Intel", "Core i7", 8, 3.4)
ram1 = Ram("Corsair", "Vengeance", 16, "DDR5")
harddrive = Harddrive("Samsung", "Evo", 1024, "SSD")

# Create computer with initial components
komputer = Komputer("PC Abdul", cpu, [ram1, Ram("Corsair", "Vengeance", 8, "DDR4")], harddrive)
komputer.addRam(Ram("Kingston", "FURY", 16, "DDR5"))

# Create rukos (shop units)
ruko1 = Ruko("Senja Store", "Jl. Raya No. 1", "Toko Komputer")
ruko2 = Ruko("Matahari Store", "Jl. Raya No. 2", "Toko Baju")

# Create ruko owner
pemilikRuko = PemilikRuko("Budi", 35, "Jl. Taruna Baru 5", "087825673174", "1234567890", "BCA", 5, [ruko1])
pemilikRuko.addRuko(ruko2)

# Create ruko employee
pegawaiRuko = PegawaiRuko("Andi", 25, "Jl. Taruna Baru 6", "087825673175", "Kasir", 3000000, "01-01-2020", ruko1)

# Create buyer
pembeli1 = Pembeli("Cahya", 20, "Jl. Taruna Baru 7", "087832132132", "1235461231", "20-01-2020", komputer, ruko1)

# Print data for Pembeli (Buyer)
print("=== DATA PEMBELI ===")
print(f"Nama: {pembeli1.getNama()}")
print(f"Usia: {pembeli1.getUsia()} tahun")
print(f"Alamat: {pembeli1.getAlamat()}")
print(f"No. Telp: {pembeli1.getNoTelp()}")
print(f"No. Pembelian: {pembeli1.getNoPembelian()}")
print(f"Tanggal Pembelian: {pembeli1.getTanggalPembelian()}")

# Komputer details (bought by Pembeli)
print("\n=== KOMPUTER DIBELI ===")
komputerPembeli = pembeli1.getKomputerDibeli()
print(f"Nama Komputer: {komputerPembeli.getNama()}")

# CPU details
cpuPembeli = komputerPembeli.getCpu()
print(f"CPU Merk: {cpuPembeli.getMerk()}")
print(f"CPU Nama: {cpuPembeli.getNama()}")
print(f"CPU Jumlah Core: {cpuPembeli.getJumlahCore()}")
print(f"CPU Kecepatan: {cpuPembeli.getKecepatanGHz()} GHz")

# RAM details
ramListPembeli = komputerPembeli.getRam()
print(f"RAM (Total {len(ramListPembeli)} module):")
for i, ram in enumerate(ramListPembeli):
    print(f"  RAM #{i+1}:")
    print(f"    Merk: {ram.getMerk()}")
    print(f"    Nama: {ram.getNama()}")
    print(f"    Kapasitas: {ram.getKapasitas()} GB")
    print(f"    Tipe: {ram.getTipeDrive()}")

# Harddrive details
hddPembeli = komputerPembeli.getHarddrive()
print(f"Harddrive Merk: {hddPembeli.getMerk()}")
print(f"Harddrive Nama: {hddPembeli.getNama()}")
print(f"Harddrive Kapasitas: {hddPembeli.getKapasitas()} GB")
print(f"Harddrive Tipe: {hddPembeli.getTipeDrive()}")

# Ruko details (where Pembeli bought the computer)
print("\n=== RUKO PEMBELIAN ===")
rukoPembeli = pembeli1.getRukoPembelian()
print(f"Nama Usaha: {rukoPembeli.getNamaUsaha()}")
print(f"Alamat: {rukoPembeli.getAlamat()}")
print(f"Jenis Bisnis: {rukoPembeli.getJenisBisnis()}")

# Print data for Pemilik Ruko (Owner)
print("\n=== PEMILIK RUKO ===")
print(f"Nama: {pemilikRuko.getNama()}")
print(f"Usia: {pemilikRuko.getUsia()} tahun")
print(f"Alamat: {pemilikRuko.getAlamat()}")
print(f"No. Telp: {pemilikRuko.getNoTelp()}")
print(f"NPWP: {pemilikRuko.getNpwp()}")
print(f"Rekening Bank: {pemilikRuko.getRekeningBank()}")
print(f"Lama Menjadi Pemilik: {pemilikRuko.getLamaMenjadi()} tahun")

# List of Ruko owned
rukoList = pemilikRuko.getListRuko()
print(f"Daftar Ruko ({len(rukoList)} ruko):")
for i, ruko in enumerate(rukoList):
    print(f"  Ruko #{i+1}:")
    print(f"    Nama Usaha: {ruko.getNamaUsaha()}")
    print(f"    Alamat: {ruko.getAlamat()}")
    print(f"    Jenis Bisnis: {ruko.getJenisBisnis()}")

# Print data for Pegawai Ruko (Employee)
print("\n=== PEGAWAI RUKO ===")
print(f"Nama: {pegawaiRuko.getNama()}")
print(f"Usia: {pegawaiRuko.getUsia()} tahun")
print(f"Alamat: {pegawaiRuko.getAlamat()}")
print(f"No. Telp: {pegawaiRuko.getNoTelp()}")
print(f"Jabatan: {pegawaiRuko.getJabatan()}")
print(f"Gaji: Rp {pegawaiRuko.getGaji()}")
print(f"Tanggal Mulai Kerja: {pegawaiRuko.getTanggalMulaiKerja()}")

# Tempat bekerja (Workplace)
tempatKerja = pegawaiRuko.getTempatKerja()
print("Tempat Bekerja:")
print(f"  Nama Usaha: {tempatKerja.getNamaUsaha()}")
print(f"  Alamat: {tempatKerja.getAlamat()}")
print(f"  Jenis Bisnis: {tempatKerja.getJenisBisnis()}")