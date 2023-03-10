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

# 3.1 Activation des LL drivers
2. Regardez les fichiers générés. Quelles sont les différences ?
=> En paramètrant avec LL on utilise les fonctions du meme nom qui sont moins lourd par exemple stm32l0xx.ll.usart.c fais 400 ligne contre 4000 pour sont équivalent en HAL
=> On doit utiliser ces fonctions car notre processeur n'aura pas assez de mémoire

4. Que signifie __STATIC_INLINE ?
=>Inline veut dire que la fonction n'est pas une réel fonction mais que l'on va recopier son code à l'endroit ou on la appeler
5. Et pourquoi y a-t-il du code dans un .h alors que Môssieur Fiack vous a expres-sément demandé de pas le faire ? (Les deux questions sont peut-être liés, va savoir)
=> C'est justement a cause de Inline que l'on écrit dans le header

# 3.2 LED simple
2. On compte de 0 à 255 on a donc une fréquence de 32 000 000 /256 = 125 000 Hz. On doit donc avoir un prescaler de 125-1 (on compte de 0)
8. Le fonctionnement a été validé par l'enseignant.

# 3.3 LED avec timer
3. On peut laisser PSC à 0 et seuleument mettre ARR à 32 000-1(on compte de 0) pour obtenir notre fréquence de 1 kHz (32 000 000/32 000=1 000 Hz).
6. Dans"stm32l0xx_it.c"
7. Il manque la fonction qui retire l'interuption
8. On reste bloqué indéfinement dans l'interuption
9. Appeler immidiatement la fonction du timer qui retire le flag dans notre fonction d'interruption du Timer
11. Le fonctionnement a été validé par l'enseignant.

# 3.4 UART, un simple echo

5. Il manque & à ch pour passer l'adresse de ch

6. Le fonctionnement a été validé par l'enseignant.
