
# Janji
Saya Muhammad Alvinza dengan NIM 2304879 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram
![Diagram](https://github.com/user-attachments/assets/3c3bf29a-312b-402b-b387-5a373a934bda)

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




## Alur Program
Pertama ditampilkan tabel berisikan 5 Data Objek yang sudah di hard-code. User dapat memasukkan banyaknya Baju baru yang akan ditambahkan. Setelah itu, User dapat memasukkan data dengan urutan:
[ID NamaProduk Stok Harga Jenis Bahan Warna Untuk Size Merk]
Setelah penginputan selesai, Tabel yang sudah dimodifikasi akan ditampilkan. 
Tabel akan mengikuti kata terpanjang dari masing-masing elemen (dinamis).

Disediakan input.txt untuk acuan input, serta Dokumentasi untuk bukti di setiap folder.
