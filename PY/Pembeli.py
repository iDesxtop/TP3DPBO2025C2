from Orang import Orang
from Ruko import Ruko
from Komputer import Komputer

class Pembeli(Orang):
    __noPembelian = ""
    __tanggalPembelian = ""
    __komputerDibeli = Komputer()
    __rukoPembelian = Ruko()
    
    def __init__(self, nama="", usia=0, alamat="", noTelp="", noPembelian="", tanggalPembelian="", komputerDibeli=Komputer(), rukoPembelian=Ruko()):
        super().__init__(nama, usia, alamat, noTelp)
        self.__noPembelian = noPembelian
        self.__tanggalPembelian = tanggalPembelian
        self.__komputerDibeli = komputerDibeli
        self.__rukoPembelian = rukoPembelian
    
    # Getter and Setter for noPembelian
    def getNoPembelian(self):
        return self.__noPembelian
    
    def setNoPembelian(self, noPembelian):
        self.__noPembelian = noPembelian
    
    # Getter and Setter for tanggalPembelian
    def getTanggalPembelian(self):
        return self.__tanggalPembelian
    
    def setTanggalPembelian(self, tanggalPembelian):
        self.__tanggalPembelian = tanggalPembelian
    
    # Getter and Setter for komputerDibeli
    def getKomputerDibeli(self):
        return self.__komputerDibeli
    
    def addKomputer(self, komputerDibeli):
        self.__komputerDibeli = komputerDibeli
    
    # Getter and Setter for rukoPembelian
    def getRukoPembelian(self):
        return self.__rukoPembelian
    
    def addTempatBeli(self, rukoPembelian):
        self.__rukoPembelian = rukoPembelian

