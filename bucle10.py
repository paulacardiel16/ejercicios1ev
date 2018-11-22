def bucle_10():
    print "hasta que numero deseas contar: "
    nfinal=input("numero = ")
    #definimos ua variable para contar los pares(CONTADORA)
    numero_pares=0  #inicializamos la variable a cero
    #definimos otra variable para contar los impares
    numero_impares=0 #inicializamos la variable a cero
    for numero in range(1,nfinal+1):
        if(numero%2==0):
            print str(numero),"es PAR"
            numero_pares=numero_pares+1
        else:
            print str(numero),"es IMPAR"
            numero_impares=numero_impares+1
    print "he contado ",numero_pares, "numeros pares"
    print "he contado ",numero_impares, "numeros impares"
            
   
bucle_10()
