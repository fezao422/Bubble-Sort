if __name__ == '__main__':
    
    aux = 0    
    lista = []
    num_total = int(input("Digite total de números: "))
    
    for i in range(num_total):
        lista.insert(i,input("Digite os números: "))

    for num_lista in range(len(lista)-1,0,-1):
        for i in range(num_lista):
            if (lista[i] > lista[i+1]):
                aux = lista[i]
                lista[i] = lista[i+1]
                lista[i+1] = aux
    print(lista)
