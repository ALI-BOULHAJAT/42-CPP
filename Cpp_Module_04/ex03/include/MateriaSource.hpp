/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:00:56 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/02 09:28:32 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria        *_materias[4];
        unsigned int    _num_materia;
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &materiasource);
        MateriaSource &operator=(MateriaSource& materiasource);
        ~MateriaSource(void);
        
        virtual void learnMateria(AMateria *imateria);
        virtual AMateria *createMateria(std::string const &type);
};

#endif