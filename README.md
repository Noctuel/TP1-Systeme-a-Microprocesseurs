# Domingo Dorian - SIMOES Raphael - TP1-Systeme-a-Microprocesseurs
# 1.1 Création de la structure du projet
6. Activez l’USART2 en mode Asynchrone. Gardez les paramètres par défaut, et notez le baud rate
=> baud rate 115200 Bits/s

# 1.2 Le microcontrôleur sous KiCAD
13. Pourquoi PB9 est relié à la masse ?
=>Cela permet de choisir le boot ici relier à la masse cela permet de boot sur la flash.
14. Quel est le rôle de L1, C5 et C7 ?
=>Il s'agit d'un filtre de la tension d'alimentation pour obtenir une tension d'alimentation pour l'ADC car ce composant est plus sensible
=> Il  y a deux capacité la petite filtre les petites variations et la grande les grandes variation
=> L'inductance est utiliser à la place d'une résistance pour éviter une chute de tension.


# 1.3 Le reste du schéma
3. Quelle page de la datasheet indique les valeurs des condensateurs ?
=> page 3 "Recommended Operating Conditions"
5. Quelle page de la datasheet nous indique les valeurs de condensateurs ?
=> Digital Pin Capacitance page 6
6. Quel est le rôle de la broche CS ?
=>C'est le Chip Select actif à l'état bas qui permet d'activer/choisir le composant
7. Quel est le rôle de la broche LDAC ?
=>Il sert à transférer le registre d'entré à celui de sortie si il est à 0. On peut le piloter pour si on veux synchroniser plusieur DAC
8. Pourquoi le signal MISO n’est pas utilisé ?
=> Car le DAC ne répond pas au µp
10. Où trouve-t-on les indications du pinout du connecteur SWD ?
On les trouve dans la datasheet du stlink3set il s'agit d'une recopie du connecteur STDC14 c'est à dire le connecteur JTAG qui permet de reprogrammer le µp avec le protocole SWD

# 1.4 Affectation des empreintes
3. Que signifie 0805 ? 0603 ? 1206 ?
=> il s'agit des taille des composant (largeur / longueur)
4. Que signifie LQFP ? SOT-223 ? SOIC ? Ne vous contentez pas de donner le sigle,j’attends une petite description (vous pouvez copier-coller depuis wikipedia, mais lisez avant quand même))
=> LQFP : Low Profile Quad Flat Package
En électronique, Quad Flat Package (QFP) est un type de boîtier de circuit intégré destiné à être directement soudé sur circuit imprimé. Ce boîtier est normalisé suivant la JEDEC1
Le boîtier rectangulaire (en plastique ou en céramique) est doté de broches de connexion sur ses 4 côtés (jusqu'à 200 broches). Les broches sont généralement espacées de 0,4 à 1 mm, et sont extérieures au boîtier contrairement aux QFN.
=> SOT-223 : Il s'agit d'un réguleur de tension LDO
=> small outline integrated circuit : Circuit intégré en boîtier à dimension réduite présentant des connexions en aile de mouette sur deux rangées.
