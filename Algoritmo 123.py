#-------------------------------------------------

#--------------  Algoritmo 123  --------------------

#-------------------------------------------------

a = float(input("Digite 1 lado: "))
b = float(input("Digite 2 lado: "))
c = float(input("Digite 3 lado: "))

if(a<b +c and b < a + c and c < a + b ):
  if (a == b and a == c):
    print("\nTriangulo equilátero")
  else:
    if( a == b or a == c or b == c):
      print("Triangulo isosceles")
    else:
      print("Triangulo escaleno")