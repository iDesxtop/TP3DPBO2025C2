from Komponen import Komponen

class Harddrive(Komponen):
    __kapasitasGB = 0
    __tipeDrive = ""
    
    # Constructor method
    def __init__(self, nama="", harga=0, kapasitasGB=0, tipeDrive=""):
        super().__init__(nama, harga)
        self.__kapasitasGB = kapasitasGB
        self.__tipeDrive = tipeDrive
    
    # Getter methods
    def getKapasitas(self):
        return self.__kapasitasGB
    
    def getTipeDrive(self):
        return self.__tipeDrive
    
    # Setter methods
    def setKapasitas(self, kapasitasGB):
        self.__kapasitasGB = kapasitasGB
    
    def setTipeDrive(self, tipeDrive):
        self.__tipeDrive = tipeDrive

