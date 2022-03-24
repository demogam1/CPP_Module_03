/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:05:21 by misaev            #+#    #+#             */
/*   Updated: 2022/03/23 17:42:47 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
/*------------------Forme canonique------------------*/ 
ClapTrap::ClapTrap()
{
    std::cout << GRN << "-----[ClapTrap Constructor Called]-----" << NC << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &p)
{
   this->name = p.name;
   this->hp = p.hp;
   this->energy = p.energy;
   this->attack_dmg = p.attack_dmg;
}

void ClapTrap::operator=(ClapTrap const &p)
{
    this->name = p.name;
    this->hp = p.hp;
    this->energy = p.energy;
    this->attack_dmg = p.attack_dmg;
}

ClapTrap::~ClapTrap()
{
    std::cout << std::endl;
    std::cout << RED << "-----[ClapTrap Destructor called]-----" << NC <<std::endl;
    std::cout << std::endl;
    return;
}
/*------------------END------------------*/
/*------------------Constructeur------------------*/ 
ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hp = 100;
    this->energy = 50;
    this->attack_dmg = 20;
    std::cout << std::endl;
    std::cout << GRN << "-----[ClapTrap Constructor Called]-----" << NC << std::endl;
    print_claptrap_inf();
    return;
}
/*------------------END------------------*/ 
/*------------------FONCTION MEMBRE------------------*/ 
void ClapTrap::attack(const std::string &target)
{
    std::cout << std::endl;
    if (this->hp > 0 && this->energy > 0)
    {
        std::cout << GRN << " >> " << "ClapTrap " << this->name << " attacks " << target;
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

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << std::endl;
    std::cout << REDB << " >> " << "ClapTrap " << this->name << " take " << amount << " point of damage" << NC << std::endl;
    this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << std::endl;
    if (this->hp > 0 && this->energy > 0)
    {
        std::cout << GRN << " >> " << "ClaptTrap " << this->name << " has " << amount << " added to he's HP point" << NC << std::endl;
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
    std::cout << std::endl;
}

void ClapTrap::print_claptrap_inf()
{
    std::cout << std::endl;
    std::cout << "|--------[" << CYN << "Claptrap " << this->name << NC << "]--------|"  << std::endl;
    std::cout << CYN << " HP : " << this->hp << NC << std::endl;
    std::cout << CYN << " Energy : " << this->energy << NC  << std::endl;
    std::cout << CYN << " Attack Damage : " << this->attack_dmg << NC << std::endl;
    std::cout << "|--------[" << CYN << "Claptrap " << this->name << NC << "]--------|"  << std::endl;
    std::cout << std::endl;
}
/*------------------END------------------*/ 