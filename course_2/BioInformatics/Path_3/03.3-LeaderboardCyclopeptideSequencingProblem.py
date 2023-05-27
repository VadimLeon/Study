def vhozhdenie(amin, sumspect):
    for p in spectrtolist(amin):
        if p not in sumspect:
            return False

    return True

def finallvar(pept):
    rez = []

    if len(pept) == 0:
        rez = [[i] for i in list(listmass)]
    else:
        for i in pept:
            for j in listmass:
                rez.append(i + [j])

    return rez

def spectrtolist(amin):
    n = len(amin)

    return list(map(int, (sorted([0, sum(amin[0 : n])] + [sum(k) for k in [amin[j : j + i] for i in range(1, n) for j in range(0, n)]]))))

def finmasspept(amin):
    n = len(amin)
    doublpep = amin + amin[0:-1]

    return list(map(int, (sorted([0, sum(doublpep[0:n])] + [sum(k) for k in [doublpep[j:j + i] for i in range(1, n) for j in range(0, n)]]))))

def prinpepted(pepted): return "-".join([str(j) for j in pepted])

def finmasspept(pepted, sumspectr):

    teorSpectrum = spectrtolist(pepted)
    score = 0
    i = 0
    j = 0

    while (i < len(teorSpectrum) and j < len(sumspectr)):
        if (teorSpectrum[i] == sumspectr[j]):
            i += 1
            j += 1
            score += 1
        else:
            if (teorSpectrum[i] < sumspectr[j]):
                i += 1
            else:
                j += 1

    return score

def finlidpep(sumspec, headpep, n):
    return [j[1] for j in sorted([(finmasspept(i, sumspec), i) for i in headpep ], key = lambda m: m[0], reverse = True)[0 : n]]

def liderpeptid(n, sumspec):
    def masspect(sumspec):
        return sumspec[-1]
    def masspep(pept):
        return sum(pept)

    headpep = finallvar([])

    while len(headpep):
        if len(headpep) != 18: headpep = finallvar(headpep)

        headpep = list(filter(lambda m: vhozhdenie(m, sumspec), headpep))
        lidpep = []
        t = headpep[:]

        for pept in t:
            if masspep(pept) == masspect(sumspec):
                if finmasspept(pept, sumspec) > finmasspept(lidpep, sumspec):
                    lidpep = pept
                headpep.remove(pept)
            elif masspep(pept) > masspect(sumspec):
                headpep.remove(pept)

        headpep = finlidpep(sumspec, headpep, n)

    return lidpep

listmass = [57, 71, 87, 97, 99, 101, 103, 113, 114, 115, 128, 129, 131, 137, 147, 156, 163, 186]

n = int(input())
sumspec = list(map(int, input().split(" ")))
print(prinpepted(liderpeptid(n, sumspec)))
