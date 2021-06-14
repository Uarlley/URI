while True:
    try:
        texto = input()
        texto = texto.replace('@','a')
        texto = texto.replace('&','e')
        texto = texto.replace('!','i')
        texto = texto.replace('*','o')
        texto = texto.replace('#','u')
        print(texto)
    except EOFError:
        break