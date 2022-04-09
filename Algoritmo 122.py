#-------------------------------------------------

#--------------  Algoritmo 122  --------------------

#-------------------------------------------------

a = float(input("Digite 1 lado: "))
b = float(input("Digite 2 lado: "))
c = float(input("Digite 3 lado: "))

if(a<b +c and b < a + c and c < a + b ):
  print("Podem ser lados de um triangulo")
else:
  print("Não podem ser lados de um triangulo")