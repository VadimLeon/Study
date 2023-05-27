def vhozhdenie(amin, sumspect):
    for p in spectrtolist(amin):
        if p not in sumspect:
            return False

    return True

def finmasspepall(sumspect):
    def masspect(sumspect):
        return sumspect[-1]
    def masspep(peptid):
        return sum(peptid)

    res = []
    lpep = finallvar([])

    while len(lpep):
        if len(res) > 1: break
        if len(lpep) != 18: lpep = finallvar(lpep)

        lpep = list(filter(lambda x: vhozhdenie(x, sumspect), lpep))
        t = lpep[:]

        for peptid in t:
            if masspep(peptid) == masspect(sumspect):
                if finmasspept(peptid) == sumspect:
                    res += [peptid]

                lpep.remove(peptid)
            elif masspep(peptid) > masspect(sumspect):
                lpep.remove(peptid)

    return res

def spectrtolist(amin):
    n = len(amin)
    return list(map(int, (sorted([0, sum(amin[0 : n])] + [sum(k) for k in [amin[j : j + i] for i in range(1, n) for j in range(0, n)]]))))

def finmasspept(peptid):
    n = len(peptid)
    doublpep = peptid + peptid[0:-1]

    return list(map(int, (sorted([0, sum(doublpep[0 : n])] + [sum(k) for k in [doublpep[j : j + i] for i in range(1, n) for j in range(0, n)]]))))

def finallvar(pept):
    rez = []

    if len(pept) == 0:
        rez = [[i] for i in list(listmass)]
    else:
        for i in pept:
            for j in listmass:
                rez.append(i + [j])

    return rez

def prinpepted(pep): return " ".join(sorted(["-".join([str(j) for j in i]) for i in pep]))

listmass = [57, 71, 87, 97, 99, 101, 103, 113, 114, 115, 128, 129, 131, 137, 147, 156, 163, 186]

sumspect = list(map(int, input().split(" ")))
print(prinpepted(finmasspepall(sumspect)))
