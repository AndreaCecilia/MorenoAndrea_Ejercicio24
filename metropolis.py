import os
import numpy as np
import matplotlib.pyplot as plt
sigma=1.0
def gaussian(x, sigma):
    return np.exp(-x**2/(2.0*sigma**2))/np.sqrt(2.0*np.pi*sigma**2)


plt.figure()
x = np.loadtxt("x.dat")

x_model = np.linspace(x.min(), x.max(), n_points)
y_model = gaussian(x_model, sigma)

_ = plt.hist(x, bins=30, density=True, label='Metropolis-Hastings')
plt.plot(x_model, y_model, label='Modelo')

plt.legend()
plt.xlabel("X")
plt.ylabel("Y")
plt.savefig("gaussian.png")