lista = []

n = int(input())

for i in range(n):
    atual = int(input())
    if(atual==0):
        lista.pop(-1)
    else:
        lista.append(atual)

soma = 0
for i in lista:
    soma+=i

print(soma)