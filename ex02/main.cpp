/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:05:25 by misaev            #+#    #+#             */
/*   Updated: 2022/03/24 11:18:43 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    ClapTrap toto("Toto");
    ScavTrap tata("tata");
    FragTrap titi("titi");
    toto.attack("titi");
    tata.attack("titi");
    titi.attack("titi");
    toto.takeDamage(5);
    tata.takeDamage(10);
    titi.takeDamage(20);
    titi.highFivesGuys();
    tata.guardGate();
    return 1;
}