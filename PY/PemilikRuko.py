from Orang import Orang
from Ruko import Ruko

class PemilikRuko(Orang):
    __NPWP = ""
    __rekeningBank = ""
    __lamaMenjadi = 0
    __listRuko = []
    
    def __init__(self, nama="", usia=0, alamat="", noTelp="", NPWP="", rekeningBank="", lamaMenjadi=0, listRuko=[]):
        super().__init__(nama, usia, alamat, noTelp)
        self.__NPWP = NPWP
        self.__rekeningBank = rekeningBank
        self.__lamaMenjadi = lamaMenjadi
        self.__listRuko = listRuko

    # Setter dan Getter untuk NPWP
    def setNpwp(self, NPWP):
        self.__NPWP = NPWP
        
    def getNpwp(self):
        return self.__NPWP
    
    # Setter dan Getter untuk rekeningBank
    def setRekeningBank(self, rekeningBank):
        self.__rekeningBank = rekeningBank
        
    def getRekeningBank(self):
        return self.__rekeningBank
    
    # Setter dan Getter untuk lamaMenjadi
    def setLamaMenjadi(self, lamaMenjadi):
        self.__lamaMenjadi = lamaMenjadi
        
    def getLamaMenjadi(self):
        return self.__lamaMenjadi
    
    # Setter dan Getter untuk listRuko
    def setListRuko(self, listRuko):
        self.__listRuko = listRuko
        
    def getListRuko(self):
        return self.__listRuko

    def addRuko(self, ruko):
        self.__listRuko.append(ruko)
