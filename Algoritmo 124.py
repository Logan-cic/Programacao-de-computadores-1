#-------------------------------------------------

#--------------  Algoritmo 124  --------------------

#-------------------------------------------------

a = float(input("Digite 1 lado: "))
b = float(input("Digite 2 lado: "))
c = float(input("Digite 3 lado: "))

if(a<b +c and b < a + c and c < a + b ):
  if (a > b and a > c):
    maior = a ** 2
    lados = a ** 2 + c ** 2 
  else:
    if(b > c):
      maior = b ** 2
      lados = a ** 2 + c ** 2
    else:
      maior = c**2
      lados = a ** 2 + b ** 2
if (maior == lados):
  print("Triangulo Retangulo")
else:
  if(maior > lados):
    print("Triangulo Obtusangulo")
  else:
    print("Triangulo Acutangulo")
    if( (a + b) < c):
      print("As medidas não formam um triangulo")

