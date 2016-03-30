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
	float LongbowAttack = 7;

	int EnchantedBowCost = 10;
	float EnchantedBowAttack = 8;

	int BowOfApolloCost = 20;
	float BowOfApolloAttack = 10;

	//Berserker Weapons
	int ThickClubCost = 3;
	float ThickClubAttack = 5;

	int EnchantedMaceCost = 7;
	float EnchantedMaceAttack = 6;

	int HammerOfHephaestusCost = 15;
	float HammerOfHephaestusAttack = 8;

	//Spartan Weapons
	int BronzeDaggerCost = 3;
	float BronzeDaggerAttack = 5;

	int EnchantedGladiusCost = 7;
	float EnchantedGladiusAttack = 6;

	int SwordOfAresCost = 15;
	float SwordOfAresAttack = 8;

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
	float getLongbowAttack();

	int getEnchantedBowCost();
	float getEnchantedBowAttack();

	int getBowOfApolloCost();
	float getBowOfApolloAttack();

	int getThickClubCost();
	float getThickClubAttack();

	int getEnchantedMaceCost();
	float getEnchantedMaceAttack();

	int getHammerOfHephaestusCost();
	float getHammerOfHephaestusAttack();

	int getBronzeDaggerCost();
	float getBronzeDaggerAttack();

	int getEnchantedGladiusCost();
	float getEnchantedGladiusAttack();

	int getSwordOfAresCost();
	float getSwordOfAresAttack();
};
