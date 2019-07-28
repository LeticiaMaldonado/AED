# Triángulo

## Valores
### Punto = {t=(a,b,c)/ a,b,c ϵ Punto}

### TipoDeTriángulo = {Equilátero, Isósceles, Escaleno}

## Operaciones
### *GetTipo
#### -Entrada: t ϵ Triángulo
#### -Salida: Dist(ta,tb)=Dist(tb,tc)=Dist(tc,td) -> Equilátero
####          Dist(ta,tb)≠Dist(tb,tc)≠Dist(tc,td) -> Escaleno
#### 	      Dist(ta,tb)≠Dist(tb,tc)=Dist(tc,td) -> Isósceles
####          Dist(ta,tb)=Dist(tb,tc)≠Dist(tc,td) -> Isósceles
 
### *EsEquilátero
#### -Entrada: t ϵ Triángulo
#### -Salida: Dist(ta,tb)=Dist(tb,tc)=Dist(tc,td) Verdadero

### *GetPerímetro
#### -Entrada: t ϵ Triángulo
#### -Salida: Perimetro = dist(ta,tb)+dist(tb,tc)+dist(tc,ta) 

### *ExtraerTriángulo
#### -Entrada: a,b,c ϵ Punto
#### -Salida: Triángulo ={(a,b,c) / a,b,c ϵ Punto}

## DIAGRAMA IPO

			 ------- GetTipo ϵ TipoDeTriángulo
     R⁶                 |
--------> Triángulo.cpp  ------- EsEquilátero ϵ {V,F}
			|
			 ------- GetPerímetro ϵ R
			|
                         ------- ExtraerTriángulo ϵ Triángulo 
					   
