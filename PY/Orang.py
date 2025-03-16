class Orang:
    __nama = ""
    __usia = 0
    __alamat = ""
    __noTelp = ""
    
    def __init__(self, nama="", usia=0, alamat="", noTelp=""):
        self.__nama = nama
        self.__usia = usia
        self.__alamat = alamat
        self.__noTelp = noTelp
    
    # Getter methods
    def getNama(self):
        return self.__nama
    
    def getUsia(self):
        return self.__usia
    
    def getAlamat(self):
        return self.__alamat
    
    def getNoTelp(self):
        return self.__noTelp
    
    # Setter methods
    def setNama(self, nama):
        self.__nama = nama
    
    def setUsia(self, usia):
        self.__usia = usia
    
    def setAlamat(self, alamat):
        self.__alamat = alamat
    
    def setNoTelp(self, noTelp):
        self.__noTelp = noTelp

