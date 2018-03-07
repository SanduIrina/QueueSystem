#ifndef SORTED_LIST_H
#define SORTED_LIST_H

#include <stdio.h>

typedef struct ListNode {
    struct ListNode *urmator;
    struct ListNode *anterior;
    int prioritate;
    char *nume;
} ListNode;

typedef struct List {
    ListNode *primul;
    ListNode *ultimul;
} List;

void deschide_ghisee(List ***ghisee, int N) {
	// TODO
}

void inchide_ghisee(List ***ghisee) {
	// TODO
}

void adauga_persoana(List ***ghisee, char *nume, int prioritate, 
		int numar_ghiseu) {
	// TODO
}

void sterge_persoana(List ***ghisee, char *nume, int prioritate, 
		int numar_ghiseu) {
	// TODO
}

void sterge_primii_oameni(List ***ghisee) {
	// TODO
}

int calculeaza_numar_oameni_ghiseu(List **ghisee, int numar_ghiseu) {
	// TODO
	return -1;
}

int calculeaza_numar_total_oameni(List **ghisee) {
	// TODO
	return -1;
}

int gaseste_pozitie_persoana (List **ghisee, char *nume, int prioritate, 
		int numar_ghiseu) {
	// TODO
	return -1;
}

char* gaseste_persoana_din_fata(List **ghisee, char *nume, int prioritate, 
		int numar_ghiseu) {
	// TODO
	return "Nu exista.";
}

void afiseaza_rand_ghiseu(FILE *f, List **ghisee, int numar_ghiseu) {
	// TODO
}

#endif
