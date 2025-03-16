
# Janji
Saya Muhammad Alvinza dengan NIM 2304879 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram
![Diagram](https://github.com/user-attachments/assets/49a1e776-abf8-4fd1-80a5-c9371d33b93f)

## Desain Program
Berikut adalah Desain programnya
### Komponen
Berisikan merk komponen dan nama model komponen
Setter dan Getter untuk setiap Variabel
### CPU(Komponen)
CPU adalah anak dari Komponen dengan tambahan:
jumlahCore dari CPU dan kecepatanGHz CPU.
Setter dan Getter untuk setiap Variabel
### Ram(Komponen)
Ram adalah anak dari Komponen dengan tambahan:
kapasitasGB: besarnya memori 
ddr: tipe ddr

Setter dan Getter untuk setiap Variabel
### Harddrive(Komponen)
Ram adalah anak dari Komponen dengan tambahan:
kapasitasGB: besarnya kapasitas harddrive 
tipeDrive: SSD/HDD

Setter dan Getter untuk setiap Variabel
### Komputer(Komponen)
Komputer menggabungkan Cpu, Ram, dan Harddrive dengan menggunakan Composite.
nama: nama dari komputer nya
Cpu: Composite dari Class Cpu
ramList: list object ram, karena bisa lebih dari 1 ram
harddrive: Composite dari Harddrive

Setter dan Getter untuk setiap Variabel, dengan tambahan addRam() yang append ke listRam.
### Ruko
namaUsaha: nama dari usaha ruko tersebut
alamat: alamat ruko
jenisBisnis: apakah elektronik, baju, dll

Setter dan Getter untuk setiap Variabel
### Orang
nama: nama orang tersebut
usia: usia orang
alamat: alamat domisili orang tersebut
noTelp: nomor telepon yang dimiliki orang tersebut

Setter dan Getter untuk setiap Variabel
### PemilikRuko
NPWP: Nomor NPWP yang dimiliki
rekeningBank: nomor rekening bank pemilik ruko
lamaMenjadi: lama sudah menjadi pemilik ruko
listRuko: list object ruko yang dimiliki

Setter dan Getter untuk setiap Variabel, dengan tambahan addRuko() yang append ke listRuko
### PegawaiRuko
jabatan: jabatan yang diduduki pegawaiRuko
gaji: gaji yang dimiliki
tanggalMulai: tanggal mulai bekerja di suatu ruko
tempatBekerja: Composite object ruko dia bekerja

Setter dan Getter untuk setiap Variabel
### Pembeli
komputerDibeli: Composite object dari Komputer yang dia beli
noPembelian: nomor pembelian komputer
tanggalPembelian: tanggal, bulan, tahun dia membeli komputer
rukoPembelian: Composite object dari ruko di mana ia membeli komputer

Setter dan Getter untuk setiap Variabel, dengan tambahan addTempatBeli() di mana dia beli komputer dan addKomputer() untuk menambahkan object komputer


## Alur Program
Program menampilkan tabel berisikan beberapa Objek yang sudah di hard-code.
![dokum1](https://github.com/user-attachments/assets/bec7fb6b-0f00-48f7-ae79-74b4fd6240fa)
![dokum2](https://github.com/user-attachments/assets/9bc37564-1da0-46f0-a488-1c7023ed87e7)
