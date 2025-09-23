n = int(input("¿Cuántos valores vas a calcular?: "))
vector1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
pos = 0
ac = 0
while (pos < n):
    ac = ac + vector1[pos]
    pos = pos + 1
print("La sumatoria es: ", ac)
