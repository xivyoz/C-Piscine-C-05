# Piscine C - C 05

Ce document est le sujet du module C 05 de la piscine C de 42, version 6.3.

## Table des matières
1. [Consignes](#consignes)
2. [Préambule](#préambule)
3. [Exercice 00 : ft_iterative_factorial](#exercice-00-ft_iterative_factorial)
4. [Exercice 01 : ft_recursive_factorial](#exercice-01-ft_recursive_factorial)
5. [Exercice 02 : ft_iterative_power](#exercice-02-ft_iterative_power)
6. [Exercice 03 : ft_recursive_power](#exercice-03-ft_recursive_power)
7. [Exercice 04 : ft_fibonacci](#exercice-04-ft_fibonacci)
8. [Exercice 05 : ft_sqrt](#exercice-05-ft_sqrt)

## Consignes
- Seule cette page servira de référence : ne vous fiez pas aux bruits de couloir.
- Relisez bien le sujet avant de rendre vos exercices. À tout moment, le sujet peut changer.
- Attention aux droits de vos fichiers et de vos répertoires.
- Vous devez suivre la procédure de rendu pour tous vos exercices.
- Vos exercices seront corrigés par vos camarades de piscine.
- En plus de vos camarades, vous serez corrigés par un programme appelé la Moulinette.
- La Moulinette est très stricte dans sa notation. Elle est totalement automatisée. Il est impossible de discuter de sa note avec elle. Soyez d’une rigueur irréprochable pour éviter les surprises.
- La Moulinette n’est pas très ouverte d’esprit. Elle ne cherche pas à comprendre le code qui ne respecte pas la Norme. La Moulinette utilise le programme norminette pour vérifier la norme de vos fichiers.
- Les exercices sont très précisément ordonnés du plus simple au plus complexe. En aucun cas nous ne porterons attention ni ne prendrons en compte un exercice complexe si un exercice plus simple n’est pas parfaitement réussi.
- L’utilisation d’une fonction interdite est un cas de triche. Toute triche est sanctionnée par la note de -42.
- Vous ne devrez rendre une fonction main() que si nous vous demandons un programme.
- La Moulinette compile avec les flags -Wall -Wextra -Werror, et utilise cc.
- Si votre programme ne compile pas, vous aurez 0.
- Vous ne devez laisser dans votre répertoire aucun autre fichier que ceux explicitement spécifiés par les énoncés des exercices.
- Vous avez une question ? Demandez à votre voisin de droite. Sinon, essayez avec votre voisin de gauche.
- Votre manuel de référence s’appelle Google / man / Internet / ....

## Préambule
Voici des paroles extraites du premier livre de la saga Harry Potter : [...]

## Exercice 00 : ft_iterative_factorial
- Écrire une fonction itérative qui renvoie un nombre. Ce nombre est le résultat de l’opération factorielle à partir du nombre passé en paramètre.
- Si l’argument n’est pas valide, la fonction doit renvoyer 0.
- Il ne faut pas gérer les "int overflow", le retour de la fonction sera indéfini.
- Prototype : `int ft_iterative_factorial(int nb);`

## Exercice 01 : ft_recursive_factorial
- Écrire une fonction récursive qui renvoie la factorielle du nombre passé en paramètre.
- Si l’argument n’est pas valide, la fonction doit renvoyer 0.
- Il ne faut pas gérer les "int overflow", le retour de la fonction sera indéfini.
- Prototype : `int ft_recursive_factorial(int nb);`

## Exercice 02 : ft_iterative_power
- Écrire une fonction itérative qui renvoie une puissance d’un nombre. Une puissance inférieure à 0 renverra 0.
- Comme il n’y a pas de consensus sur 0 puissance 0, nous considérerons que le résultat sera 1.
- Il ne faut pas gérer les "int overflow", le retour de la fonction sera indéfini.
- Prototype : `int ft_iterative_power(int nb, int power);`

## Exercice 03 : ft_recursive_power
- Écrire une fonction récursive qui renvoie une puissance d’un nombre.
- Comme il n’y a pas de consensus sur 0 puissance 0, nous considérerons que le résultat sera 1.
- Il ne faut pas gérer les "int overflow", le retour de la fonction sera indéfini.
- Prototype : `int ft_recursive_power(int nb, int power);`

## Exercice 04 : ft_fibonacci
- Écrire une fonction ft_fibonacci qui renvoie le n-ième élément de la suite de Fibonacci, le premier élément étant à l’index 0. Nous considérerons que la suite de Fibonacci commence par 0, 1, 1, 2.
- Les overflows ne devront pas être gérés.
- Prototype : `int ft_fibonacci(int index);`

## Exercice 05 : ft_sqrt
- Écrire une fonction qui renvoie la racine carrée entière d’un nombre si elle existe, 0 si la racine carrée n’est pas entière.
- Prototype : `int ft_sqrt(int nb);`

**Note :** Assurez-vous de bien nommer vos fichiers et répertoires conformément aux exigences du sujet et de suivre les consignes de rendu.

