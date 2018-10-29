def bucle_8():
    print"************"
    print"* EL CONSTRUCTOR DE PIRAMIDES *"
    print"************"
    print"indica, oh faraon, de que altura deseas tu piramide?"
    altura=input("altura= ")
    for fil in range(altura,0,-1):
        for col in range(0,fil+1,1):
            print "*",
        print " "
  
   
bucle_8()
