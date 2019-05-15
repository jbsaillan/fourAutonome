/**
 * 	@file 	Porte.h
 *
 *	@author Jean-Baptiste Saillan
 *
 *  @date 	15 mai 2019
 *
 *  @brief 	Fichier d'entete de la classe Porte
 */
#ifndef PORTE_H
#define PORTE_H

/**
 * @class Porte
 * @brief Classe representant la porte du four
 */
class Porte{

public:

	/**
	 * @fn Porte()
	 * @brief Constructeur par défaut  de la classe Porte
     */
	Porte();

	/**
	 * @fn ouvrePorte()
	 * @brief Ouvre la porte du four s'il est eteint
     */
	void ouvrePorte();

	/**
	 * @fn fermePorte()
	 * @brief Ferme la porte du four
	 */
	void femrePorte();

private:

	bool m_etatOuverture; //<! Variable de classe representant l'etat d'ouverture de la porte
	int m_servoMoteur; //<! Variable de classe avec la pin de controle du servomoteur

};

#endif