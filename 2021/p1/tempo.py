class fds:
    def __init__(self, numero):
        self.numero = numero
        self.tempo = 1
        self.pronto = False

n = int(input())

lista=[]

for i in range(n):
    tipo, numero = list(input().split())
    numero = int(numero)
    if(tipo.lower() == 't'):
        for i in lista:
            i.tempo+=numero    
    else:
        if(tipo.lower()=='r'):
            if not numero in lista:
                lista.append(fds(numero))
            else:
                for i in lista:
                    if i.pronto == False:
                        i.tempo+=1
        else:
            for i in lista:
                if i.numero == numero:
                    i.pronto = True
                    break

lista.sort(key=lambda x: x.numero)
print('\n---------------------\n')
for i in lista:
    print(i.numero, i.tempo)