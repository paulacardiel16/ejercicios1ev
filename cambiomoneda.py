# -*- coding: cp1252 -*-
def cambio_moneda():
    euros=input("Introduce una cantidad: ")
    respuesta=raw_input("D�lares o libras (d/l)?: ")
    if(respuesta=="d"):
        moneda_nueva=euros*1.15
        unidades="d�lares"
    else:
        moneda_nueva=euros*0.88
        unidades="libras"
    print "son "+ moneda_nueva +" "+ unidades

cambio_moneda()
