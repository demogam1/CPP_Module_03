/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:40:07 by misaev            #+#    #+#             */
/*   Updated: 2022/03/24 11:23:02 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << GRN << "-----[FragTrap Constructor Called]-----" << NC << std::endl;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << std::endl;
    std::cout << RED << "-----[FragTrap Destructor called]-----" << NC <<std::endl;
    std::cout << std::endl;
    return;
}

void FragTrap::operator=(FragTrap const &p)
{
    this->name = p.name;
    this->hp = p.hp;
    this->energy = p.energy;
    this->attack_dmg = p.attack_dmg;
    return;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hp = 100;
    this->energy = 50;
    this->attack_dmg = 20;
    std::cout << std::endl;
    std::cout << GRN << "-----[FragTrap Constructor Called]-----" << NC << std::endl;
    print_claptrap_inf();
    return;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << std::endl;
    std::cout << CYN << " >> " << "High five ?!" << NC << std::endl;
    return;
}