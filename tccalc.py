bir = 0
iki = 0
uc = 0
dort = 0
bes = 0
alti = 0
yedi = 0
sekiz = 0
dokuz = 0
on = 0
onb = 0
c=0
for bir in range(1,10):
    for iki in range(0,10):
        for uc in range(0,10):
            for dort in range(0,10):
                for bes in range(0,10):
                    for alti in range(0,10):
                        for yedi in range(0,10):
                            for sekiz in range(0,10):
                                for dokuz in range(0,10):
                                    top1=(bir+uc+bes+yedi+dokuz)
                                    top2=(iki+dort+alti+sekiz)*9+top1*7
                                    on = str(top2)[len(str(top2))-1]
                                    toptot=bir+uc+bes+yedi+dokuz+iki+dort+alti+sekiz+int(on)
                                    if str((top1*8))[len(str((top1*8)))-1] == str(toptot)[len(str(toptot))-1]:
                                        onb = str(toptot)[len(str(toptot))-1]
                                        c=c+1
                                        if c%10000 == 0:
                                            print(c)
print(c)
