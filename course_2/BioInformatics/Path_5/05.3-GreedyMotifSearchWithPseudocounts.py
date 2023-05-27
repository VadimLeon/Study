from functools import reduce
import sys

def prob(prof, patt):
    return reduce(lambda x, y: x * y, [prof[patt[i]][i] for i in range(len(patt))])

def prof_most_prob(dna, k, prof):
    k_mer = sorted([(prob(prof, dna[i : i + k]), dna[i : i + k]) for i in range(len(dna) - k + 1)],
                    key = lambda x: x[0], reverse = True)
    return k_mer[0][1]

def getProf(motif):
    n = 4
    k = len(motif[0])
    nucl = ["A", "C", "G", "T"]
    prof = {nucl[i]: [1] * k for i in range(n)}
    for i in range(len(motif)):
        for j in range(len(motif[i])):
            prof[motif[i][j]][j] += 1
    for i in nucl:
        for j in range(k):
            prof[i][j] = prof[i][j] / (len(motif) + 4)
    return prof

def scor(motif):
    scor = 0
    for j in range(len(motif[0])):
        count = 0
        counts = {i: 0 for i in ["A", "C", "G", "T"]}
        for i in range(len(motif)):
            counts[motif[i][j]] += 1
            count += 1
        scor += count - max(counts.values())
    return scor

def motif_search(dna, k, t):
    best_motif = []
    for i in range(t):
        best_motif.append(dna[i][0:k])

    for i in range(len(dna[0]) - k + 1):
        motif = [dna[0][i : i + k]]

        for j in range(1, t):
            prof = getProf(motif)
            motif.append(prof_most_prob(dna[j], k, prof))

        if scor(motif) < scor(best_motif):
            best_motif = motif.copy()
    return best_motif

k, t = tuple(map(int, input().split(" ")))
dna = sys.stdin.read().split('\n')
print("\n".join(motif_search(dna, k, t)))
