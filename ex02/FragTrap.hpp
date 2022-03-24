/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:39:44 by misaev            #+#    #+#             */
/*   Updated: 2022/03/24 10:40:12 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        /* Forme canonique */
        FragTrap();
        FragTrap(const FragTrap &p);
        void operator=(FragTrap const &p);
        ~FragTrap();
        /* END */ 
        
        FragTrap(std::string name);
        void highFivesGuys(void);
};