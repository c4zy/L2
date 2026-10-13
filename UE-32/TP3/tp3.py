# Table addition (Z/nZ,+)
def table_addition(n):
	T = []
	
	for i in range(n):
		aux = []
		for j in range(n):
			aux += [(i + j) % n]
		T += [aux]
	
	return T
	
	

# Table addition (Z/nZ,+) sans utiliser %
def table_addition(n):
	T = [i for i in range(n)]

	for i in range(n):
		pass
    	
	return T
	
	
	
# Fonction auxiliaire 
# pgcd(a, b) donne le plus grand diviseur en commun de a et b
def pgcd(a, b):
	while b != 0:
		a, b = b, a%b
	return a

# Generateurs de (Z/nZ,+)
def generateurs(n):
	L = []
	for i in range(n):
		if pgcd(n, i) == 1:
			L += [i]
	return L
		
		
		
# Fonction auxiliaire
# pow(x, y, n) donne x^y mod n en complexite log_2(y)
def pow(x, y, n):
	res = 1
	p = x
	
	while y > 0:
		if y & 1 == 1:
			res = (res*p) % n
		p = (p*p) % n
		y >>= 1
	
	return res
	
# Fonction auxiliaire 
# decompose(n) decompose n en liste de bases premieres
def decompose(n):
	L = []
	
	while n & 1 == 0:
		if 2 not in L:
			L += [2]
		n >>= 1
		
	i = 3
	while i <= n:
		while n % i == 0:
			if i not in L:
				L += [i]
			n //= i
		i += 2
		
	return L

# Generateurs de (Z/pZ)*
def generateurs(p):
	L = []
	D = decompose(p-1)

	for i in range(1, p):
		gen = True
		for d in D:
			if pow(i, (p-1)//d, p) == 1:
				gen = False
		if gen:
			L += [i]
	
	return L
	
	

# Generateur de (Z/pZ)* quand p est un premier de Sophie Germain
from random import randrange
def generateur(p):
	g = randrange(2, p-1)
	
	while pow(g, (p-1)//2, p) == 1:
		g = randrange(2, p-1)
	
	return g



# Liste d'elements de (Z/nZ)*
def liste_elements(n):
	L = []
	
	for i in range(n):
		a, b = i, n
		while b != 0:
			a, b = b, a%b
		if a == 1:
			L += [i]
	
	return L
	
	
	
# Liste d'elements d'ordre d en (Z/nZ,+)
def liste_ordre(d,n):
	L = []
	
	if n % d != 0:
		return L
		
	for i in range(0, n):
		a, b = i, n
		while b != 0:
			a, b = b, a%b
		ordre = n // a
		if ordre == d:
			L += [i]
	
	return L
	
	
	
# Ordre additif d'un element a dans (Z/nZ,+)
def ord(a,n):
	x, y = a, n
	while y != 0:
		x, y = y, x%y
	return n // x
	


# Fonction booleene retournant si un ord_+(a) = t dans (Z/nZ,+)
def is_of_order(a,t,n):
	return n // pgcd(a, n) == t
	
	

# Fonction booleene retournant si sym_+(x) = y dans (Z/nZ,+)	
def is_sym_add(x,y,n):
	return (x+y) % n == 0
	
	
	
# Fonction booleene retournant si sym_*(x) = y dans (Z/nZ)*	
def is_sym_mul(x,y,n):
    return (x*y) % n == 1
    


# Fonction retournant ord_*(a) dans (Z/pZ)* (p premier)
def ord(a,p):

	
	
	
# Fonction booleene retournant si ord_*(a) = t dans (Z/nZ)* 
def is_of_order_mult(a,t,n):

	
	
	
	
print(is_of_order_mult(24,20,61))



