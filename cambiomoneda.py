# -*- coding: cp1252 -*-
def cambio_moneda():
    euros=input("Introduce una cantidad: ")
    respuesta=raw_input("Dólares o libras (d/l)?: ")
    if(respuesta=="d"):
        moneda_nueva=euros*1.15
        unidades="dólares"
    else:
        moneda_nueva=euros*0.88
        unidades="libras"
    print "son "+ moneda_nueva +" "+ unidades

cambio_moneda()
