# Q1
def eval_poly(P,b,p):
	res = P[-1]
	i = len(P)-2
	while i >= 0:
		res = (res * b) % p
		res = (res + P[i]) % p
		i -= 1
	return res # correcte



# Q2		
def eval_poly_F2(P,b):
	res = P[-1]
	i = len(P)-2
	while i >= 0:
		res = res & b
		res = res ^ P[i]
		i -= 1
	return res
		
		
		
# Q3
def eval_poly_F2(P,b):
    res = P & 1
    P >>= 1
    while P > 0:
        res = res ^ (P & b)
        P >>= 1
    return res



# Q4 fonction pour voir si P(x) est irreductible dans Fp
def is_irreducible(P,p):
	irr = True
	i = 0
	while (irr and i < p):
		res = P[-1]
		j = len(P)-2
		while j >= 0:
			res = (res * i) % p
			res = (res + P[j]) % p
			j -= 1
		irr = irr & (res != 0)
		i += 1		
	return irr
    
    

# Q5    
def existe_GF(m):
	i = 2
	while i*i <= m:
		if m % i == 0:
			while m % i == 0:
				m //= i
			return m == 1
		i += 1
	return True
	
	

# Q6	
def multbyalpha(b,f):
	if b[-1] == 0:
		return [0] + b[:-1]
	else:
		res = [0] + b[:-1]
		for i in range(len(b)):
			res[i] = res[i] ^ f[i]
		return res



# Q7	
def multiplication(b,c,f):
	res = [0]*len(b)
	
	return res
	
print(multiplication([0,1], [1,1], [1,0,1]))














