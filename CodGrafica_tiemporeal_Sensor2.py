import matplotlib.pyplot as plt
x = []
y = []

def fecha():
    f = open("DatosPGrficar.txt", "r+")
     for i in f:
        str = f.readline()
        str = str[11:19]
        x.append(str)
        print (x)
        f.close()

def dato():
    f = open("DatosPGrficar.txt", "r+")
    for i in f:
        str = f.readline()
        str = str[40:41]
        y.append(str)
        print (y)
        f.close()
fecha()
dato()

plt.title("Distancia sensor")
plt.xlabel("Tiempo")
plt.ylabel("Distancia")
plt.plot(x,y,'-o')
plt.xtcks(x, rotation='vertical')
plt.ylim(1.1,-0.1)
plot.grid(True)
plt.show

