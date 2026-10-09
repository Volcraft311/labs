# AuPLa0602. Sastādīt Python programmu, kurā lietotājs ievada veselu skaitļu sarakstu. 
# Skaitļu skaitu uzdod lietotājs. 
# Pēc ievada jāizdrukā saraksta lielākā elementa vērtība un visas atrašanās vietas. 
# Visas atrašanās vietas jāsaglabā citā sarakstā.
# Vladimirs Gadirovs vg26031
# 09.10.2026

ok = 1
while(ok == 1):
    n = int(input("Ievadiet naturālu skaitli n, n > 0: "))
    while (n <= 0):
        n = int(input("Kļūdaina vērtība. Jāievada n, n > 0: "))
    
    massivs = []
    max = int(input(f"Ievadiet skaitli 1: "))
    massivs.append(max)
    
    for i in range(1, n):
        sk = int(input(f"Ievadiet skaitli {i + 1}: "))
        massivs.append(sk)
        if sk > max: max = sk
    
    vietas = []
    for i in range(len(massivs)):
        if massivs[i] == max:
            vietas.append(i)
    
    print("Max Value: ", i, "Vietas: ", vietas)
    
    ok = int(input("Turpināt vai beigt? (1)/(0): "))
    
    
#**********************Testu plāns**********************************************
#    Ievads(n)       Massivs      Programmas vēlamā reakcija
#        3            2,1,2          Max value : 2, Vietas [0, 2]
#        5            3,4,6,4,6      Max value : 6, Vietas [2, 4]
#        0               0           Kļūdaina vērtība. Jāievada n, n > 0
#