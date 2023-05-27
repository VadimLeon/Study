from functools import reduce

def forvpaterns(n, k, strin):
	pat = []
	for dnastr in strin:
			for i in range(len(strin[0]) - n + 1):
			    forvstr = dnastr[i : i + n]
			    spisokMutaciy = mutacii(forvstr)
			    for mutaciya in spisokMutaciy:
				    if patertosDna(mutaciya, strin, k):
					    pat.append(mutaciya)
	return " ".join(list(set(pat)))

def mutacii(patern):
	lengt = len(patern)
	rez = list({patern[:i] + j + patern[i + 1 : lengt] for i in range(0, lengt) for j in ["A", "C", "G", "T"]})
	return rez

def paterimuttostr(patern, dnastr, k):
	lengt = len(patern)
	rez = reduce(lambda x, y: x | y, [countpovtorov(patern, dnastr[i : i + lengt]) <= k for i in range(len(dnastr) + 1 - lengt)])
	return rez

def countpovtorov(patern, cousov):
	rez = sum([1 for i in range(len(cousov)) if patern[i] != cousov[i]])
	return rez

def patertosDna(patern, stin, k):
	rez = reduce(lambda x, y: x & y, [paterimuttostr(patern, stin[i], k) for i in range(len(stin))])
	return rez

n, count = tuple(map(int, input().split(" ")))
sDna = [input() for i in range(4)]
print(forvpaterns(n, count, sDna))
