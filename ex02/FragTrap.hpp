/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:39:44 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 13:18:49 by misaev           ###   ########.fr       */
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
        FragTrap &operator=(FragTrap const &p);
        ~FragTrap();
        /* END */ 
        
        FragTrap(std::string name);
        void highFivesGuys(void);
};