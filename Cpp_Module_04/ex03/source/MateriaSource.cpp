/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:14:40 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/03 09:21:09 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->_num_materia = 0;
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &materiasource)
{
    this->_num_materia = materiasource._num_materia;
    for (int i = 0; i < 4; i++)
    {
        delete this->_materias[i];
        if (materiasource._materias[i])
            this->_materias[i] = materiasource._materias[i];
        else
            this->_materias[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource &materiasource)
{
    if (this != &materiasource)
    {
        this->_num_materia = materiasource._num_materia;
        for (int i = 0; i < 4; i++)
        {
            delete this->_materias[i];
            if (materiasource._materias[i])
                this->_materias[i] = materiasource._materias[i];
            else
                this->_materias[i] = NULL;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        delete this->_materias[i];
}

void MateriaSource::learnMateria(AMateria *imateria)
{
    if (this->_num_materia < 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materias[i] == NULL)
            {
                this->_materias[i] = imateria;
                (this->_num_materia)++;
                return ;
            }
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL && this->_materias[i]->get_type() == type)
            return (this->_materias[i]->clone());
    }
    return (0);
}