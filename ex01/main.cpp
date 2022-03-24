/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:05:25 by misaev            #+#    #+#             */
/*   Updated: 2022/03/23 17:43:59 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"



int main()
{
    ClapTrap toto("Toto");
    ScavTrap Tata("Tata");
    toto.attack("titi");
    Tata.attack("titi");
    toto.takeDamage(5);
    Tata.takeDamage(10);
    Tata.guardGate();
    return 1;
}