import numpy as np
import matplotlib.pyplot as plt
import sys

data=np.loadtxt(sys.argv[1]).T
plt.plot(data[1],data[2])
plt.xlabel('x')
plt.ylabel('y')
plt.show()
plt.clf()
plt.plot(data[1],data[3])
plt.xlabel('x')
plt.ylabel('z')
plt.show()
plt.clf()
plt.plot(data[2],data[3])
plt.xlabel('y')
plt.ylabel('z')
plt.show()
