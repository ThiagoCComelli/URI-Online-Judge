# -*- coding: utf-8 -*-
while True:
    try:
        frase = "LIFE IS NOT A PROBLEM TO BE SOLVED"
        n = int(input())
        print(frase[0:n])
    except EOFError:
        break
