#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Mon Oct  7 23:51:41 2019

@author: mahi
"""

import numpy as np
import matplotlib.pylab as plt

r = open("inname","r")
lines = r.readlines()
r.close()
ff = []
filecount = -1
for line in lines[0:]:
    p = line.split()
    ff.append(str(p[0]))
    filecount = filecount+1


a,b,c,d,e,f = [],[],[],[],[],[]

inst0 = np.loadtxt(ff[0])
a.append(inst0[:,1])
inst1 = np.loadtxt(ff[1])
b.append(inst1[:,1])
inst2 = np.loadtxt(ff[2])
c.append(inst2[:,1])
inst3 = np.loadtxt(ff[3])
d.append(inst3[:,1])
inst4 = np.loadtxt(ff[4])
e.append(inst4[:,1])
inst5 = np.loadtxt(ff[5])
f.append(inst5[:,1])

data = np.asarray([a,b,c,d,e,f]).T
Data = data[:,0,:]
#print Data.shape
NumX, NumY = 6,1500
x = np.linspace(4,10, num=NumX+1)
y = np.linspace(0,200, num=NumY+1)
X,Y = np.meshgrid(x,y)

fig, ax  = plt.subplots(figsize=(10,10), dpi = 500)
ax.set_title("density plot for spin sz-correlation over time")
im = ax.pcolor(X,Y, Data)
for i in range(Data.shape[0]):
    for j in range(Data.shape[1]):
        ax.text(X[i,j],Y[i,j],Data[i,j], color="w", size=30)
plt.colorbar(im)
plt.savefig("corr.jpg")