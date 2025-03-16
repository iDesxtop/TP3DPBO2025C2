from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive

class Komputer:
    __nama = ""
    __cpu = Cpu()
    __ram = []
    __harddrive = Harddrive()

    # inisialisasi sedikit berbeda, karena tidak bisa langsung inisialisasi atribut yang diberikan dari suatu class. 
    def __init__(self, nama="", cpu=Cpu(), ram=[], harddrive=Harddrive()):
        self.__nama = nama
        self.__cpu = cpu
        self.__ram = ram
        self.__harddrive = harddrive
    
    # Getter methods
    def getNama(self):
        return self.__nama
    
    def getCpu(self):
        return self.__cpu
    
    def getRam(self):
        return self.__ram
    
    def getHarddrive(self):
        return self.__harddrive
    
    # Setter methods
    def setNama(self, nama):
        self.__nama = nama
    
    def setCpu(self, cpu):
        self.__cpu = cpu
    
    def setRam(self, ram):
        self.__ram = ram
    
    def setHarddrive(self, harddrive):
        self.__harddrive = harddrive
    
    # Additional method to add a single RAM object to the list
    def addRam(self, ram):
        self.__ram.append(ram)

