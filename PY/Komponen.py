class Komponen:
    __merk = ""
    __nama = ""
    def __init__(self, __merk="", __nama=""):
        self.__merk = __merk
        self.__nama = __nama
    
    def setMerk(self, __merk):
        self.__merk = __merk
    
    def setNama(self, __nama):
        self.__nama = __nama
    
    def getMerk(self):
        return self.__merk
    
    def getNama(self):
        return self.__nama