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


# Q8	
def multbyalpha(b,f):
	if len(bin(b << 1).split("b")[1]) >= len(bin(f).split("b")[1]):
		return (b << 1) ^ f
	return b << 1



# Q9
def multiplication(b,c,f):
	pass


# Q10
def table_log(P):
	L = [0] * (1 << len(bin(P).split("b")[1])-1)
	L[0] = -1
	x = 1
	for i in range(0, len(L)-1):
		L[x] = i
		x = multbyalpha(x, P)
	return L
	

	
# Q11
def table_alpha(P):
	L = [0] * ((1 << (len(bin(P).split("b")[1])-1)) - 1)
	x = 1
	for i in range(0, len(L)):
		L[i] = x
		x = multbyalpha(x, P)
	return L



# Q12
def multiplie(x,y,P):
	if x == 0:
		return 0
	elif y == 0:
		return 0
	puissx = table_log(P)[x]
	puissy = table_log(P)[y]
	mod = (1 << len(bin(P).split("b")[1])-1)-1
	idx = (puissx + puissy) % mod
	return table_alpha(P)[idx]
	


# Q13
def evalue(Q,y,P):
	pass
	


# Q14
# oof ...



# Q17
def add(x,y):
    return [(x[0] + y[0]) % 5, (x[0] + y[0]) % 5]



# Q18
def multbyalpha(x):
    return [2*x[1] % 5, (2*x[1] + x[0]) % 5]



# Q19
def mult(x,y):
    return [(x[0]*y[0] + 2*x[1]*y[1]) % 5, (x[0]*y[1] + x[1]*y[0] + 3*x[1]*y[1]) % 5]
    


# Q20
def multbyalpha(x):
    return [(3*x[2]) % 7, (x[0] + 5*x[2]) % 7, (x[1] + 2*x[2]) % 7]








