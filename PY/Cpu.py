from Komponen import Komponen

class Cpu(Komponen):
    __jumlahCore = 0
    __kecepatanGHz = 0
    
    # Constructor method
    def __init__(self, nama="", harga=0, jumlahCore=0, kecepatanGHz=0):
        super().__init__(nama, harga)
        self.__jumlahCore = jumlahCore
        self.__kecepatanGHz = kecepatanGHz
    
    # Getter methods
    def getJumlahCore(self):
        return self.__jumlahCore
    
    def getKecepatanGHz(self):
        return self.__kecepatanGHz
    
    # Setter methods
    def setJumlahCore(self, jumlahCore):
        self.__jumlahCore = jumlahCore
    
    def setKecepatanGHz(self, kecepatanGHz):
        self.__kecepatanGHz = kecepatanGHz

