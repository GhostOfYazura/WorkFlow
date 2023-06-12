r1 = 5700
r2 = 10000
vI = 5
vO = 2.3

#forumla voltage output calc
voltageResult = (vI * r2) / (r1 + r2)

#formula resistant neeeded calc
resistanceResult = (vO * r1) / (vI - vO)



print ("Voltage output is: " + str(voltageResult))
print ("Resistant output needed is: " +  str(resistanceResult))