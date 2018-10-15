'''Torres de Hanoi'''


from jutge import read


def hanoi(n, orígen, destí, auxiliar):
    '''mou n discos de la torre orígen a la torre destí passant per la torre auxiliar'''
    if n == 1:
        print(orígen, '->', destí)
    else:
        hanoi(n-1, orígen, auxiliar, destí)
        print(orígen, '->', destí)
        hanoi(n-1, auxiliar, destí, orígen)


def main():
    n = read(int)
    hanoi(n, 'A', 'C', 'B')


main()
