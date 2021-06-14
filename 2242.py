def main():
    risada = str(input())
    vogais = "aeiou"
    v = [letra for letra in risada if letra in vogais]
    if (v[::-1] == v): print("S")
    else: print("N")
    return 0
main()