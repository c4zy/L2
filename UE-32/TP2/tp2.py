def tobase2(n):
	L = []
	
	while n > 0:
		L = [n % 2] + L
		n //= 2
	
	return L



def tobase2(n):
	L = []
	
	while n > 0:
		L = [n & 1] + L
		n >>= 1
	
	return L
	
	
	
def hammingweight(n):
	cptr = 0
	
	while n > 0:
		cptr += n & 1
		n >>= 1
	
	return cptr
	
	

def hammingweight2(n):
    cptr = 0
    while n != 0:
        n = n & (n-1)
        cptr += 1
    return cptr
	
	

def tobase(n,b):
	L = []
	
	while n > 0:
		L = [n % b] + L
		n //= b
	
	return L
	
	
def base2int(L,b):
    s = 0
    p = 1
    i = len(L)-1
    while i >= 0:
    	s += L[i]*p
    	i -= 1
    	p *= b
    
    return s
    
    
    
def decompose(n):
	L = []
	
	cptr = 0
	while n & 1 == 0:
		cptr += 1
		n >>= 1
	if cptr:
		L += [[2, cptr]]
	
	i = 3
	while n > 1:
		cptr = 0
		while n % i == 0:
			cptr += 1
			n //= i
		if cptr:
			L += [[i, cptr]]
		i += 2
	
	return L
	
	
	
def pgcd(a,b):
    while b > 0:
        a, b = b, a%b
    return a
    
    
    
def euclide_e(a,n):
	R = []
	
	u = [1, 0]
	v = [0, 1]
	r = [a, n]
	q = 0
	
	while r[1] != 0:
		q = r[0] // r[1]
		r[0], r[1] = r[1], r[0] % r[1]
		u[0], u[1] = u[1], u[0] - q*u[1]
		v[0], v[1] = v[1], v[0] - q*v[1]
		
		
	R += [u[0], v[0], r[0]]
	
	return R
	
	

def inverse(a,p):
	u = [1, 0]
	v = [0, 1]
	r = [a, p]
	q = 0
	
	while r[1] != 0:
		q = r[0] // r[1]
		r[0], r[1] = r[1], r[0] % r[1]
		u[0], u[1] = u[1], u[0] - q*u[1]
		v[0], v[1] = v[1], v[0] - q*v[1]
	
	res = u[0]
	return res % p
	
	
	
def euler_phi(n):
    card = 0
    
    for i in range(1, n):
    	N = i
    	M = n
    	while M > 0:
    		N, M = M, N % M
    	if N == 1:
    		card += 1
    
    return card
    
    
    
def euler_phi(n):
	L = decompose(n)
	prod = 1
	
	for elt in L:
		prod *= elt[0]**elt[1] - elt[0]**(elt[1]-1)
		
	return prod
	
	
	
def compose(f,g):
	return [f[0]*g[0], f[0]*g[1] + f[1]]
	
	
	
def symetrique(f):
    return [1/f[0], -f[1]/f[0]]
    
    
    
def has_mul_sym(a,n):
	p, q = a, n
	while q > 0:
		p, q = q, p%q
	return p == 1
	


def is_sym_add(x,y,n):
    return (x + y) % n == 0
    
    
    
def is_sym_mul(x,y,n):
    return (x*y) % n == 1
    
    
    
def is_sym_add(x,y):
    a, b = x[0], x[1]
    c, d = y[0], y[1]
    return a*d + b*c == 0
    
    
    
def is_sym_mul(x,y):
    a, b = x[0], x[1]
    c, d = y[0], y[1]
    return a*c == b*d

print(euler_phi(45402))



