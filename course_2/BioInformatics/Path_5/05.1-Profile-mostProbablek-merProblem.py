from functools import reduce

def pr(patt, prof):
    return reduce(lambda x, y: x * y, [prof[patt[i]][i] for i in range(len(patt))])

def most_prob_mer(dna, k, prof):
    k_mers = {pr(dna[i : i + k], prof): dna[i : i + k] for i in range(len(dna) - k + 1)}
    return k_mers[max(k_mers.keys())]

dna = input()
k = int(input())
prof = {i: list(map(float, input().split(" "))) for i in ["A", "C", "G", "T"]}
print(most_prob_mer(dna, k, prof))
