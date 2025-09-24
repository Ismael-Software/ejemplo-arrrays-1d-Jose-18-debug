n = int(input("¿Cuántos valores vas a calcular?: "))
vector1 = []
for i in range (n):
    valores = int(input("Ingresa los valores del vector: "))
    vector1.append(valores)
pos = 0
ac = 0
while (pos < n):
    ac = ac + vector1[pos]
    pos = pos + 1
print("La sumatoria es: ", ac)
coc = ac/2
res = coc*2
if (res == ac):
    print("Es par")
else:
    print("Es impar")
print("Si el número impar y dice par, es impar :)")
