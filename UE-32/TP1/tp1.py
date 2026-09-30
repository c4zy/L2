def somme_pair(L):
	s = 0
	
	for elt in L:
		if elt % 2 == 0:
			s += elt
	
	return s



def somme_ind_pair(L):
	s = 0
	
	i = 0
	while i < len(L):
		s += L[i]
		i += 2
	
	return s
	
	

def minimum(L):
	mini = L[0]
	
	for elt in L:
		if elt < mini:
			mini = elt
	
	return mini
	
	
	
def minimum_posi(L):
	mini = L[0]
	pos = []
	
	i = 0
	while i < len(L):
		if L[i] < mini:
			mini = L[i]
			pos = [i]
		elif L[i] == mini:
			pos += [i]
		i += 1
	
	return pos
	


def ens_to_int(A):
	t = 0
	
	for elt in A:
		t |= 1 << elt

	return t		



def int_to_ens(t):
	A = []
	
	i = 0
	while t > 0:
		if t & 1 == 1:
			A += [i]
		t >>= 1
		i += 1
	
	return A
	
	
	
def est_dans(t,e):
    return (t >> e) & 1
    
    

def ajout_dans(t,e):
    return t | (1 << e)



def retire_dans(t,e):
	return t ^ (1 << e)
	
	

def plus_grand_elem(t):
	pg = 0
	
	t >>= 1
	i = 1
	while t > 0:
		if t & 1:
			pg = i
		t >>= 1
		i += 1
	
	return pg
	
	
	
def plus_petit_elem(t):
	i = 0
	
	while t & 1 == 0:
		t >>= 1
		i += 1
		
	return i
	
	
	
def cardinal(t):
	card = 0
	
	while t > 0:
		if t & 1:
			card += 1
		t >>= 1
		
	return card
	
	
	
def est_inclus_dans(t1,t2):
	return t1 & t2 == t1
  


def intersection(t1,t2):
	return t1 & t2
	


def union(t1,t2):
	return t1 | t2
	
	
	
def difference(t1,t2):
	return (t1 | t2) ^ t2
	
	
	
def difference_sym(t1,t2):
    return t1 ^ t2
    
    
    
def somme(L,M):
	a, b = L[0], L[1]
	c, d = M[0], M[1]
	
	s = [a*d + b*c, b*d] 
	
	n, m = s[0], s[1]
		
	while m > 0:
		n, m = m, n % m
			
	s = [s[0] // n, s[1] // n]
		
	if s[1] == 1:
		return s[0]
	return s
	
	
	
def sommefibo(j):
    s = 0
    
    u0 = 0
    u1 = 1
    
    i = 0
    while i < j:
        s += u0
        tmp = u1
        u1 = u0 + u1
        u0 = tmp
        i += 1
    
    return s
	
	
import math
def som_div_propres(n):
	if n == 1:
		return 0

	s = 1
	
	d = 2
	while d < int(math.sqrt(n))+1:
		if n % d == 0:
			s += d
			if n // d != d:
				s += n//d
		d += 1
	
	return s



def amicaux(n):
	L = []
	
	for i in range(2, (1 << n) + 1):
		sdp = som_div_propres(i)
		if som_div_propres(sdp) == i and i != sdp and (sdp, i) not in L:
			L += [(i, sdp)]
			
	return L
		
		

def partition(L):
	p0, p1, p2 = 0, 0, len(L)-1
	
	while p1 < p2:
		if L[p1] < 3:
			L[p0], L[p1] = L[p1], L[p0]
			p0 += 1
			p1 += 1
		elif 3 <= L[p1] <= 6:
			p1 += 1
		else:
			L[p1], L[p2] = L[p2], L[p1]
			p2 -= 1
	
	return L
	
	
	
def tri_bulle(L):
    fin = len(L)-1
    
    while fin > 0:
        i = 0
        
        while i < fin:
            if L[i] > L[i+1]:
                L[i], L[i+1] = L[i+1], L[i]
            i += 1
        fin -= 1
        
    return L
    
    
    
def tri(L):
	debut = 0
	
	while debut < len(L)-1:
		i_mini = debut
		i = debut+1
		
		while i < len(L):
			if L[i] < L[i_mini]:
				i_mini = i
			i += 1
		
		L[debut], L[i_mini] = L[i_mini], L[debut]
		debut += 1
		
	return L



def puissance(x,y,n):
	z = 1
	
	while y > 0:
		if y & 1 == 1:
			z = z*x % n
		x = x*x % n
		y >>= 1
	
	return z























