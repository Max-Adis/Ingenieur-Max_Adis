# Ingenieur-Max_Adis

> **✅ DÉPÔT VALIDÉ — VERSION DE RÉFÉRENCE**
> Ce dépôt est retenu comme portfolio public de référence pour les projets électroniques et Arduino. La mention indique une sélection éditoriale ; elle ne constitue pas une certification du montage ou de la sécurité électrique.

Ce dépôt rassemble des projets pratiques en électronique, automatisation et programmation de microcontrôleurs. Il a vocation à présenter les principes de fonctionnement, les codes sources, les schémas de câblage, les photographies et les liens de démonstration associés aux réalisations de Max_Adis.

## Projet actuellement documenté

### Détecteur de proximité à ultrasons

Le sketch Arduino mesure une distance à l’aide d’un capteur ultrasonique et pilote deux LED selon le résultat :

- une LED indique la situation normale lorsque la distance est supérieure ou égale au seuil ;
- une LED d’alerte s’allume lorsqu’un objet est détecté à moins de **10 cm** ;
- la distance mesurée est également envoyée sur le moniteur série.

## Matériel utilisé

| Élément | Connexion indiquée dans le sketch | Rôle |
|---|---:|---|
| Capteur ultrasonique | TRIG sur D5, ECHO sur D4 | Mesure de la distance. |
| LED d’alerte | D3 | Indication de proximité. |
| LED d’état | D2 | Indication de situation normale. |
| Carte compatible Arduino | — | Exécution du programme et lecture des entrées/sorties. |

> Vérifie toujours le câblage, la tension d’alimentation et la compatibilité des niveaux logiques avant de reproduire le montage.

## Installation et utilisation

1. Installe l’IDE Arduino.
2. Ouvre le fichier `Détecteur de proximité/Détecteur de proximité.ino`.
3. Sélectionne la carte et le port série correspondants.
4. Téléverse le programme.
5. Ouvre le moniteur série pour observer la distance mesurée.
6. Place un objet devant le capteur et vérifie le changement d’état des LED.

## Organisation du dépôt

```text
Détecteur de proximité/
└── Détecteur de proximité.ino    Programme Arduino
README.md                         Documentation du portfolio
```

## Évolutions prévues

- Ajouter un schéma de câblage illustré.
- Documenter les composants et les valeurs électriques utilisées.
- Ajouter des photographies du montage réel.
- Ajouter des vidéos de démonstration lorsque disponibles.
- Regrouper les prochains projets Arduino dans des dossiers séparés et documentés.

## Contribution

Pour proposer une amélioration, décris le matériel utilisé, le comportement observé et la modification proposée. Toute évolution du code doit être testée sur le montage correspondant.

## Licence

La licence du code et les conditions de réutilisation doivent être précisées avant une diffusion externe.

## Références

- [Dépôt Ingenieur-Max_Adis](https://github.com/Max-Adis/Ingenieur-Max_Adis)
- [Documentation Arduino](https://docs.arduino.cc/)
