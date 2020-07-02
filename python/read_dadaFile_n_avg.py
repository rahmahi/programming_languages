import numpy as np
fileno = 69 # check the Inname file using "wc" command
line = 10000 # check the Innname1 file using "wc" command
filename = "sz_rho_avg.txt"
f1 = open("Inname","r")
line1 =f1.readlines()
f2 = open("Inname1","r")
line2 =f2.readlines()
time = []
sz = []
rho = []
time_avg = []
sz_avg = []
rho_avg = []
for i in xrange(fileno):
	filename1 = line1[i]
	f3 = open(filename1,"r")
	line3 = f3.readlines()
	l3 = line3.split()
	f3.close()
	sz = l3[1]
	sz_avg = np.sum(sz)/line
	rho = l3[2]
	rho_avg = np.sum(rho)/line
	np.savetxt(filename,np.vstack((l2[i], sz_avg, rho_avg)).T, delimiter = ' ')
