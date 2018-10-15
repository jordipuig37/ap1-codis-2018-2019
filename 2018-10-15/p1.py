'''
    Floc de Koch
    vegeu https://en.wikipedia.org/wiki/Koch_snowflake
'''


import turtle
# https://docs.python.org/3.6/library/turtle.html


def triangle(n, mida):
    '''pinta el segment bàsic de Koch _/\_ amb segments de llargada mida i n passes recursives'''
    if n == 0:
        turtle.forward(mida)
    else:
        triangle(n-1, mida/3)
        turtle.left(60)
        triangle(n-1, mida/3)
        turtle.right(120)
        triangle(n-1, mida/3)
        turtle.left(60)
        triangle(n-1, mida/3)


def floc(n, mida):
    '''pinta el floc de Koch amb segments de llargada mida i n passes recursives'''
    triangle(n, mida)
    turtle.right(120)
    triangle(n, mida)
    turtle.right(120)
    triangle(n, mida)


def main():
    floc(3, 200)
    input()     # espera per tancar la finestra gràfica


main()
