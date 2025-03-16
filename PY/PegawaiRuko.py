from Orang import Orang
from Ruko import Ruko

class PegawaiRuko(Orang):
    __jabatan = ""
    __gaji = 0
    __tanggalMulaiKerja = ""
    __tempatBekerja = Ruko()
    
    def __init__(self, nama="", usia=0, alamat="", noTelp="", jabatan="", gaji=0, tanggalMulaiKerja="", tempatBekerja=Ruko()):
        super().__init__(nama, usia, alamat, noTelp)
        self.__jabatan = jabatan
        self.__gaji = gaji
        self.__tanggalMulaiKerja = tanggalMulaiKerja
        self.__tempatBekerja = tempatBekerja
    
    # Setter methods
    def setJabatan(self, jabatan):
        self.__jabatan = jabatan
    
    def setGaji(self, gaji):
        self.__gaji = gaji
    
    def setTanggalMulaiKerja(self, tanggalMulaiKerja):
        self.__tanggalMulaiKerja = tanggalMulaiKerja
    
    def addTempatKerja(self, tempatBekerja):
        self.__tempatBekerja = tempatBekerja
    
    # Getter methods
    def getJabatan(self):
        return self.__jabatan
    
    def getGaji(self):
        return self.__gaji
    
    def getTanggalMulaiKerja(self):
        return self.__tanggalMulaiKerja
    
    def getTempatKerja(self):
        return self.__tempatBekerja
