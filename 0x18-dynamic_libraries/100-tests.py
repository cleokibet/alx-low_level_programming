import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.subtract(a, b)))
print("{} x {} = {}".format(a, b, cops.multiply(a, b)))
print("{} / {} = {}".format(a, b, cops.divide(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
