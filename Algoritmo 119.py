#-------------------------------------------------

#--------------  Algoritmo 119  --------------------

#-------------------------------------------------

a = float(input("Insira um numero: "))
b = float(input("Insira um numero: "))
c = float(input("Insira um numero: "))
          
if( a > b):
  aux = a
  a = b 
  b = aux 
if(a > c):
  aux = a
  a = c 
  c = aux
if(b > c):
  aux = b
  b = c 
  c = aux
print("\nOrdem decrescente: ", c, " ", b," ", a)