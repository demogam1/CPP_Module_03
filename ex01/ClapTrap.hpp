/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:05:24 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 13:10:20 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ScavTrap.hpp"
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

class ClapTrap
{
    public:
        /* Forme canonique */
        ClapTrap();
        ClapTrap(const ClapTrap &p);
        ClapTrap &operator=(ClapTrap const &p);
        ~ClapTrap();
        /* END */
 
        ClapTrap(std::string name);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void print_claptrap_inf();
    protected:
        std::string name;
        int hp;
        int energy;
        int attack_dmg;
};

