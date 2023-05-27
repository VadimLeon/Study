def minrast(patern, strindna):
	lengt = len(patern)
	rez = min([countpovtorov(patern, strindna[i : i + lengt]) for i in range(len(strindna) + 1 - lengt)])
	return rez

def countpovtorov(patern, cousov):
	rez = sum([1 for i in range(len(cousov)) if patern[i] != cousov[i]])
	return rez

def paterfor(n):
	paterlis = ["A", "C", "G", "T"]
	while len(paterlis[0]) < n:
		paterlis = [paterlis[m] + j for j in ["A", "C", "G", "T"] for m in range(0, len(paterlis))]
	return paterlis

def razlichpaterofdna(patern, dna):
	rez = sum([minrast(patern, stDna) for stDna in dna])
	return rez

def strlist(k, dna):
	paterlis = paterfor(k)
	dict = {razlichpaterofdna(patern, dna): patern for patern in paterlis}
	return dict[min(dict.keys())]

n = int(input())
dna = [input() for i in range(10)]
print(strlist(n, dna))
