class Ruko:
    __namaUsaha = ""
    __alamat = ""
    __jenisBisnis = ""
    
    def __init__(self, namaUsaha="", alamat="", jenisBisnis=""):
        self.__namaUsaha = namaUsaha
        self.__alamat = alamat
        self.__jenisBisnis = jenisBisnis
    
    # Setter methods
    def setNamaUsaha(self, namaUsaha):
        self.__namaUsaha = namaUsaha
    
    def setAlamat(self, alamat):
        self.__alamat = alamat
    
    def setJenisBisnis(self, jenisBisnis):
        self.__jenisBisnis = jenisBisnis
    
    # Getter methods
    def getNamaUsaha(self):
        return self.__namaUsaha
    
    def getAlamat(self):
        return self.__alamat
    
    def getJenisBisnis(self):
        return self.__jenisBisnis
