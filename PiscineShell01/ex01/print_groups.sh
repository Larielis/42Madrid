#!/bin/bash
# Obtener la lista de grupos del usuario
# G : grupos al que pertenece el usuario (muestra valores numericos)
# n : convierte los numeros de los grupos a nombres
echo "$(id -Gn $FT_USER)" | tr " " ","