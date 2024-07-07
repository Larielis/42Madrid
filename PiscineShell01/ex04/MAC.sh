#!/bin/bash
#grep los separada en lineas y awk los separa en palabras $1 $2 $3 sucesivamente
ifconfig | grep ether | awk '{print $2}'