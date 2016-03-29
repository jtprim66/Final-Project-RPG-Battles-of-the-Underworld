#pragma once

class Shop {

private:

	//Potions
	int PotionCost = 5;
	int PotionPower = 25;

	//Armors
	int BasicArmorCost = 5;
	float BasicArmorDefense = 5; 

	int SturdyArmorCost = 10;
	float SturdyArmorDefense = 6;

	int StrongArmorCost = 15;
	float StrongArmorDefense = 7;

	int OlympianArmorCost = 20;
	float OlympianArmorDefense = 8;

	//Weapons

	//Archer Weapons
	int LongbowCost = 5;
	int LongbowAttack = 7;

	int EnchantedBowCost = 10;
	int EnchantedBowAttack = 8;

	int BowOfApolloCost = 20;
	int BowOfApolloAttack = 10;

	//Berserker Weapons
	int ThickClubCost = 3;
	int ThickClubAttack = 5;

	int EnchantedMaceCost = 7;
	int EnchantedMaceAttack = 6;

	int HammerOfHephaestusCost = 15;
	int HammerOfHephaestusAttack = 8;

	//Spartan Weapons
	int BronzeDaggerCost = 3;
	int BronzeDaggerAttack = 5;

	int EnchantedGladiusCost = 7;
	int EnchantedGladiusAttack = 6;

	int SwordOfAresCost = 15;
	int SwordOfAresAttack = 8;

public:

	int getPotionCost();
	int getPotionPower();

	int getBasicArmorCost();
	float getBasicArmorDefense();

	int getSturdyArmorCost();
	float getSturdyArmorDefense();

	int getStrongArmorCost();
	float getStrongArmorDefense();

	int getOlympianArmorCost();
	float getOlympianArmorDefense();

	int getLongbowCost();
	int getLongbowAttack();

	int getEnchantedBowCost();
	int getEnchantedBowAttack();

	int getBowOfApolloCost();
	int getBowOfApolloAttack();

	int getThickClubCost();
	int getThickClubAttack();

	int getEnchantedMaceCost();
	int getEnchantedMaceAttack();

	int getHammerOfHephaestusCost();
	int getHammerOfHephaestusAttack();

	int getBronzeDaggerCost();
	int getBronzeDaggerAttack();

	int getEnchantedGladiusCost();
	int getEnchantedGladiusAttack();

	int getSwordOfAresCost();
	int getSwordOfAresAttack();
};
