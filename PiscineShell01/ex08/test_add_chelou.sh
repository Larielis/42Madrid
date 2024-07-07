#!/bin/bash

# Definición de las variables FT_NBR1 y FT_NBR2 con los caracteres especiales escapados, lo mismo pasa con el tr
#FT_NBR1=\\\'\?\"\\\"\'\\
#FT_NBR2='rcrdmddd'

FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
FT_NBR2='dcrcmcmooododmrrrmorcmcrmomo'

# Que el primer 'tr' es un poco raro porque maneja caracteres especiales y su escapado en el shell
# Sustituye los caracteres especiales:
# - ' (comilla simple)
# - " (comilla doble)
# - \ (barra invertida)
# - ? (signo de interrogación)
# - ! (signo de exclamación)
# por los números 0, 1, 2, 3, 4 respectivamente

echo $FT_NBR1 + $FT_NBR2 | 
tr ''"'"'\\\"\?\!' '01234' |  # El primer 'tr' convierte caracteres especiales en 01234
                             # ''         : cadena vacía, para manejo de comillas simples
                             # "'"        : comilla simple, escapada adecuadamente
                             # \\         : barra invertida escapada
                             # \"         : comilla doble escapada
                             # \?         : signo de interrogación escapado
                             # \!         : signo de exclamación escapado

# Sustituye las letras mrdoc por 01234
tr 'mrdoc' '01234' |          # El segundo 'tr' convierte letras específicas en 01234

# Prepara la expresión para bc: establece la base de salida como 13 y la base de entrada como 5
xargs echo 'obase=13; ibase=5;' |

# Calcula la expresión en bc y convierte el resultado de base 5 a base 13
bc |

# Traduce los números de base 13 (0123456789ABC) a los caracteres correspondientes (gtaio luSnemf)
tr '0123456789ABC' 'gtaio luSnemf'