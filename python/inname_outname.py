#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Fri Sep 27 11:11:33 2019

@author: mahi
"""

import numpy as np

r = open("inname","r")
lines = r.readlines()
r.close()
X,Y = [],[]
filecount = -1
for line in lines[0:]:
    p = line.split()
    X.append(str(p[0]))
    filecount = filecount+1

for i in xrange(filecount + 1):
    rr = open(X[i],"r")
    liness = rr.readlines()
    rr.close()
    x,y = [], []
    for line in liness[0:]:
        q = line.split()
        x.append(q[0])
        y.append(q[1])
    print x
    print y