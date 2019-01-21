#!/bin/bash


echo "Algorithm 1: Grayscale"

echo "Configuration 1"
m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/grayscale.out > results/gray01.txt 2>&1
cat results/gray01.txt

# Condiguration 2
# m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/grayscale.out > results/gray02.txt 2>&1

# Configuration 3
# m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/grayscale.out > results/gray03.txt 2>&1



echo "Algorithm 2: Quicksort"

echo "Configuration 1"
m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/quick.out > results/quick01.txt 2>&1
cat results/quick01.txt

# Condiguration 2
# m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/quick.out > results/quick02.txt 2>&1

# Condiguration 3
# m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/quick.out > results/quick03.txt 2>&1



echo "Algorithm 3: Fibonacci"

echo "Configuration 1"
m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/fibonacci.out > results/fibonacci01.txt 2>&1
cat results/fibonacci01.txt

# Condiguration 2
# m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/fibonacci.out > results/fibonacci02.txt 2>&1

# Condiguration 3
# m2s --mem-config configs/mem.cfg --x86-sim detailed --x86-config configs/x86.cfg orgb/fibonacci.out > results/fibonacci03.txt 2>&1
