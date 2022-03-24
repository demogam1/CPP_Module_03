/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:33:50 by misaev            #+#    #+#             */
/*   Updated: 2022/03/24 11:17:11 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << GRN << "-----[Scavtrap Constructor called]-----" << NC << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "-----[ScavTrap Destructor called]-----" << NC << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hp = 30;
    this->energy = 40;
    this->attack_dmg = 10;
    std::cout << std::endl;
    std::cout << GRN << "-----[ScavTrap Constructor Called]-----" << NC << std::endl;
    print_claptrap_inf();
    return;
}

void ScavTrap::operator=(ScavTrap const &p)
{
    this->name = p.name;
    this->hp = p.hp;
    this->energy = p.energy;
    this->attack_dmg = p.attack_dmg;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << std::endl;
    if (this->hp > 0 && this->energy > 0)
    {
        std::cout << GRN << " >> " << "ScavTrap " << this->name << " attacks " << target;
        std::cout << " causing " << this->attack_dmg << " point of damage !" << NC << std::endl;
        this->energy--;
    }
    else if (this->hp <= 0)
    {
        std::cout << REDB << " >> " << this->name << " has no HP" << NC << std::endl;
        return;
    }
    else
    {
        std::cout << REDB << " >> " << this->name << " has no energy left" << NC << std::endl;
        return;
    }
}

void ScavTrap::guardGate()
{
    std::cout << std::endl;
    std::cout << CYN << " >> " << "ScavTrap is in Gate keeper mod" << NC << std::endl;
    std::cout << std::endl;
    return;
}