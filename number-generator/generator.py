import random
import sys

nb = int(sys.argv[1])

lst = []
for i in range(nb):
    num = random.randint(-2147483648, 2147483647)
    if num not in lst:
        lst.append(num)

#random.shuffle(lst)

with open("numbers.txt", "w", encoding="utf-8") as fichier:
    for i in range(nb):
        fichier.write(f"{lst[i]} ")
