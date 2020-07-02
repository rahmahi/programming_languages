#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Fri Aug  2 19:38:41 2019

@author: mahi
"""

import numpy as np
r = np.loadtxt('sz_rho_avg_l5.txt')
filename = 'sz_rho_rearrange5.txt'
c1 = []
c2 = []
c3 = []
e1 = []
e2 = []
e3 = []
line =  72 # number of lines of Inname or Inname1 file
for i in xrange(line):
    c1.append(r[i][0])
    c2.append(r[i][1])
    c3.append(r[i][2])
d = np.sort(c1, axis = None)
for j in xrange(line):
    for k in xrange(line):
        if d[j] == c1[k]:
            e1.append(c1[k])
            e2.append(c2[k])
            e3.append(c3[k])
            np.savetxt(filename, np.vstack((e1,e2,e3)).T, delimiter = ' ')
