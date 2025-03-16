from Komponen import Komponen

class Ram(Komponen):
    __kapasitasGB = 0
    __ddr = ""
    
    # Constructor method
    def __init__(self, nama="", harga=0, kapasitasGB=0, ddr=""):
        super().__init__(nama, harga)
        self.__kapasitasGB = kapasitasGB
        self.__ddr = ddr
    
    # Getter methods
    def getKapasitas(self):
        return self.__kapasitasGB
    
    def getTipeDrive(self):
        return self.__ddr
    
    # Setter methods
    def setKapasitas(self, kapasitasGB):
        self.__kapasitasGB = kapasitasGB
    
    def setTipeDrive(self, ddr):
        self.__ddr = ddr

