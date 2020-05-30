def finmasspept(peptid, sumspectr):
        def vsespek(peptide):

            countsum = lambda x: sum([kwards[i] for i in x])
            n = len(peptide)
            doublpept = peptide + peptide[0:-1]
 
            return list(map(int, (sorted([0, countsum(doublpept[0:n])] + [countsum(k) for k in [doublpept[j : j + i]
                                                                                            for i in range(1, n)
                                                                                            for j in range(0, n)]]))))

        maybspectr = vsespek(istrinput)

        res = 0
        i = 0
        j = 0

        while (i < len(maybspectr) and j < len(sumspectr)):

                if (maybspectr[i] == sumspectr[j]):
                    i += 1
                    j += 1
                    res += 1
                else:
                    if (maybspectr[i] < sumspectr[j]):
                        i += 1
                    else:
                        j += 1

        return res

kwards = {'G': 57, 'A': 71, 'S': 87, 'P': 97, 'V': 99, 'T': 101, 'C': 103, 'I': 113, 'L': 113, 'N': 114,
            'D': 115, 'K': 128, 'Q': 128, 'E': 129, 'M': 131, 'H': 137, 'F': 147, 'R': 156, 'Y': 163, 'W': 186,}

istrinput = input()
reslis = list(map(int, input().split(" ")))
print(finmasspept(istrinput, reslis))
