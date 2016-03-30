#include <iostream>
#include <stdlib.h>
#include <string>
#include "Characters.h"

using namespace std;

int main(){
	float PlayerHealth = 0;
	float PlayerAttack = 0;
	float PlayerDefense = 0;
	float PlayerDefensePercent = 0;
	int PlayerPotion = 0;
	string PlayerClass;
	string PlayerName;
	int PlayerGold = 0;

	string A("Archer");
	string B("Berserker");
	string S("Spartan");

	string ws("Wandering Soul");
	string vs("Vengeful Spirit");
	string h("Hellhound");
	string efe("Eurynomos the Flesh Eater");
	string e("Erinye");
	string c("Cerberus");
	string hgs("Hecate Goddess of Sorcery");
	string tgd("Thanatos God of Death");
	string hgu("Hades God of the Underworld");
	string tsbp("Tartarus Spirit of th Bottomless Pit");

	int BattleMenu = 0;
	float EnemyHealth = 0;
	float EnemyAttack = 0;
	float EnemyAttackPercent = 0;
	int EnemyGold = 0;
	int Wins = 0;
	int Losses = 0;
	int RoundLoss = 0;
	int DivideGold = 4;
	int LossGold = 0;
	string EnemyName("None");

	int menu = 0;
	int ShopMenu = 0;

	PlayableCharacters pchar;
	Enemies nmy;

	cout << "Welcome to Battles of The Underworld" << endl;
	cout << "Please select a character class: " << endl;
	cout << endl;

	cout << "Archer: " << endl;
	cout << "Health = " << pchar.getArcherHealth() << endl;
	cout << "Attack = " << pchar.getArcherAttack() << endl;
	cout << "Defense = " << pchar.getArcherDefense() << endl;
	cout << endl;

	cout << "Berserker: " << endl;
	cout << "Health = " << pchar.getBerserkerHealth() << endl;
	cout << "Attack = " << pchar.getBerserkerAttack() << endl;
	cout << "Defense = " << pchar.getBerserkerDefense() << endl;
	cout << endl;

	cout << "Spartan: " << endl;
	cout << "Health = " << pchar.getSpartanHealth() << endl;
	cout << "Attack = " << pchar.getSpartanAttack() << endl;
	cout << "Defense = " << pchar.getSpartanDefense() << endl;
	cout << endl;

	cout << "Enter the name of the class you would like to select: " << endl;
	cin >> PlayerClass;
	if (PlayerClass == A){
		PlayerHealth = pchar.getArcherHealth();
		PlayerAttack = pchar.getArcherAttack();
		PlayerDefense = pchar.getArcherDefense();
	}
	if (PlayerClass == B){
		PlayerHealth = pchar.getBerserkerHealth();
		PlayerAttack = pchar.getBerserkerAttack();
		PlayerDefense = pchar.getBerserkerDefense();
	}
	if (PlayerClass == S){
		PlayerHealth = pchar.getSpartanHealth();
		PlayerAttack = pchar.getSpartanAttack();
		PlayerDefense = pchar.getSpartanDefense();
	}

	cout << endl;

	PlayerDefensePercent = PlayerDefense;
	PlayerDefensePercent /= 10;

	cout << "Name your " << PlayerClass << endl;
	cin >> PlayerName;
	cout << endl;

	cout << "Welcome " << PlayerName << "!" << endl;
	cout << "Your health: " << PlayerHealth << endl;
	cout << "Your attack: " << PlayerAttack << endl;
	cout << "Your defense: " << PlayerDefense << endl;
	cout << endl;

	cout << "As " << PlayerName << " entered the Underworld to begin his quest and defeat Tartarus," << endl;
	cout << "the spirit of the bottomless pit, he stumbled upon a wandering soul." << endl;
	cout << "Without warning, the soul attacked! " << PlayerName << " knew that stealth was not " << endl; 
	cout << "an option now and decided to fight." << endl;
	cout << endl;

	EnemyHealth = nmy.getwsHealth();

	EnemyAttack = nmy.getwsAttack();
	EnemyAttackPercent = EnemyAttack;
	EnemyAttackPercent *= PlayerDefensePercent;
	EnemyAttack -= EnemyAttackPercent;

	EnemyGold = nmy.getwsGold();
	EnemyName = "Wandering Soul";

	do{
		cout << EnemyName << ": " << EnemyHealth << " health" << endl;
		cout << PlayerName << ": " << PlayerHealth << " health" << endl;
		cout << endl;

		cout << "1. Attack" << endl;
		cout << "2. Use potion (" << PlayerPotion << " potions in inventory)" << endl;
		cout << "3. Retreat (This wil count as a loss but no money will be lost)" << endl;
		cout << endl;
		cout << "Enter the number of your option: " << endl;

		cin >> BattleMenu;
		cout << endl;
		switch (BattleMenu){

		case 1:
			EnemyHealth -= PlayerAttack;
			cout << PlayerName << " attacked!" << endl;
			cout << EnemyName << "'s health is now " << EnemyHealth << endl;
			cout << endl;
			break;

		case 2:
			if (PlayerPotion > 0){
				PlayerHealth += 25;
				cout << PlayerName << " used a potion!" << endl;
				cout << endl;
				break;
			}
			else{
				cout << "You have no potions remaining!" << endl;
				cout << endl;
				continue;
			}

		case 3:
			cout << PlayerName << " has fled!" << endl;
			cout << endl;
			RoundLoss = 1;
			Losses += 1;
			break;

		default:
			cout << "That is not an option" << endl;
			continue;
		}

		if (EnemyHealth > 0 && RoundLoss != 1){
			PlayerHealth -= EnemyAttack;
			cout << EnemyName << " attacked!" << endl;
			cout << PlayerName << "'s health is now " << PlayerHealth << endl;
			cout << endl;
		}

	} while (RoundLoss != 1 && PlayerHealth > 0 && EnemyHealth > 0);

	if (PlayerHealth > 0 && RoundLoss != 1){
		cout << "Victory! You have defeated " << EnemyName << "!" << endl;
		cout << "Gold earned: " << EnemyGold << endl;
		PlayerGold += EnemyGold;
		cout << endl;
	}

	if (PlayerHealth <= 0){
		PlayerGold = LossGold;
		LossGold /= DivideGold;
		cout << "Deafeat! Your enemy has bested you. Return to the menu and heal." << endl;
		cout << "Gold lost: " << LossGold;
		PlayerGold -= LossGold;
		cout << endl;
	}

	if (RoundLoss != 0){
		cout << "Defeat! You were forced to retreat. Return to the menu and retry." << endl;
		cout << endl;
	}

	cout << "Welcome to the menu! Please make a selection (1-4)" << endl;
	cout << endl;

	cout << "1. Heal" << endl;
	cout << "2. Shop" << endl;
	cout << "3. Battle" << endl;
	cout << "4. Quit" << endl;

	cout << "Your selection: " << endl;

	do{

		cin >> menu;
		switch (menu){

		case 1:
			PlayerHealth = PlayerMaxHealth;
			cout << "Your health has been fully restored!" << endl;
			break;

		case 2:
			cout << "Welcome to the shop! What would you like to purchase?" << endl;
			cout << endl;

			cout << "1. Potion   $" << shop.getPotionCost() << endl;
			cout << "2. Basic Armor   $" << shop.getBasicArmorCost() << endl;
			cout << "3. Sturdy Armor   $" << shop.getSturdyArmorCost() << endl;
			cout << "4. Strong Armor   $" << shop.getStrongArmorCost() << endl;
			cout << "5. Olympian Armor   $" << shop.getOlympianArmorCost() << endl;

			if (PlayerClass == A){
				cout << "6. Longbow   $" << shop.getLongbowCost() << endl;
				cout << "7. Enchanted Bow   $" << shop.getEnchantedBowCost() << endl;
				cout << "8. Bow of Apollo   $" << shop.getBowOfApolloCost() << endl;
			}
			if (PlayerClass == B){
				cout << "6. Thick Club   $" << shop.getThickClubCost() << endl;
				cout << "7. Enchanted Mace   $" << shop.getEnchantedMaceCost() << endl;
				cout << "8. Hammer of Hephaestus   $" << shop.getHammerOfHephaestusCost() << endl;
			}
			if (PlayerClass == S){
				cout << "6. Bronze Dagger   $" << shop.getBronzeDaggerCost() << endl;
				cout << "7. Enchanted Gladius   $" << shop.getEnchantedGladiusCost() << endl;
				cout << "8. Sword of Ares   $" << shop.getSwordOfAresCost() << endl;
			}

			cout << "9. Exit" << endl;
			cout << endl;
			cout << "Make your selection (1-9)" << endl;


	do{

		cin >> menu;
		switch (menu){

		case 1:
			PlayerHealth = PlayerMaxHealth;
			cout << "Your health has been fully restored!" << endl;
			break;

		case 2:
			cout << "Welcome to the shop! What would you like to purchase?" << endl;
			cout << endl;

			cout << "1. Potion   $" << shop.getPotionCost() << endl;
			cout << "2. Basic Armor   $" << shop.getBasicArmorCost() << endl;
			cout << "3. Sturdy Armor   $" << shop.getSturdyArmorCost() << endl;
			cout << "4. Strong Armor   $" << shop.getStrongArmorCost() << endl;
			cout << "5. Olympian Armor   $" << shop.getOlympianArmorCost() << endl;

			if (PlayerClass == A){
				cout << "6. Longbow   $" << shop.getLongbowCost() << endl;
				cout << "7. Enchanted Bow   $" << shop.getEnchantedBowCost() << endl;
				cout << "8. Bow of Apollo   $" << shop.getBowOfApolloCost() << endl;
			}
			if (PlayerClass == B){
				cout << "6. Thick Club   $" << shop.getThickClubCost() << endl;
				cout << "7. Enchanted Mace   $" << shop.getEnchantedMaceCost() << endl;
				cout << "8. Hammer of Hephaestus   $" << shop.getHammerOfHephaestusCost() << endl;
			}
			if (PlayerClass == S){
				cout << "6. Bronze Dagger   $" << shop.getBronzeDaggerCost() << endl;
				cout << "7. Enchanted Gladius   $" << shop.getEnchantedGladiusCost() << endl;
				cout << "8. Sword of Ares   $" << shop.getSwordOfAresCost() << endl;
			}

			cout << "9. Exit" << endl;
			cout << endl;
			cout << "Make your selection (1-9)" << endl;


			do{
				cin >> ShopMenu;

				switch (ShopMenu){

				case 1:
					if (PlayerGold >= shop.getPotionCost()){
						PlayerGold -= shop.getPotionCost();
						PlayerPotion += 1;
						cout << "You purchased a potion!" << endl;
						cout << "You can use this to heal during battle." << endl;
					}
					else{
						cout << "You do not have enough gold for that." << endl;
					}

					cout << endl;
					break;

				case 2:
					if (PlayerGold >= shop.getBasicArmorCost()){
						PlayerDefense = shop.getBasicArmorDefense();
						cout << "You purchased basic armor!" << endl;
						cout << "Your defense is now " << PlayerDefense << endl;
					}
					else{
						cout << "You do not have enough gold for that." << endl;
					}
					cout << endl;
					break;

				case 3:
					if (PlayerGold >= shop.getSturdyArmorCost()){
						PlayerDefense = shop.getSturdyArmorDefense();
						cout << "You purchased sturdy armor!" << endl;
						cout << "Your defense is now " << PlayerDefense << endl;
					}
					else{
						cout << "You do not have enough gold for that." << endl;
					}
					cout << endl;
					break;

				case 4:
					if (PlayerGold >= shop.getStrongArmorCost()){
						PlayerDefense = shop.getStrongArmorDefense();
						cout << "You purchased strong armor!" << endl;
						cout << "Your defense is now " << PlayerDefense << endl;
					}
					else{
						cout << "You do not have enough gold for that." << endl;
					}
					cout << endl;
					break;

				case 5:
					if (PlayerGold >= shop.getOlympianArmorCost()){
						PlayerDefense = shop.getOlympianArmorDefense();
						cout << "You purchased Olympian armor!" << endl;
						cout << "Your defense is now " << PlayerDefense << endl;
					}
					else{
						cout << "You do not have enough gold for that." << endl;
					}
					cout << endl;
					break;

				case 6:
					if (PlayerClass == A){
						if (PlayerGold >= shop.getLongbowCost()){
							PlayerAttack = shop.getLongbowAttack();
							cout << "You purchased a longbow!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}

					if (PlayerClass == B){
						if (PlayerGold >= shop.getThickClubCost()){
							PlayerAttack = shop.getThickClubAttack();
							cout << "You purchased a thick club!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}

					if (PlayerClass == S){
						if (PlayerGold >= shop.getBronzeDaggerCost()){
							PlayerAttack = shop.getBronzeDaggerAttack();
							cout << "You purchased a bronze dagger!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}

					cout << endl;
					break;

				case 7:
					if (PlayerClass == A){
						if (PlayerGold >= shop.getEnchantedBowCost()){
							PlayerAttack = shop.getEnchantedBowAttack();
							cout << "You purchased an enchanted bow!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}


					if (PlayerClass == B){
						if (PlayerGold >= shop.getEnchantedMaceCost()){
							PlayerAttack = shop.getEnchantedMaceAttack();
							cout << "You purchased an enchanted mace!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}

					if (PlayerClass == S){
						if (PlayerGold >= shop.getEnchantedGladiusCost()){
							PlayerAttack = shop.getEnchantedGladiusAttack();
							cout << "You purchased an enchanted gladius!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}

					cout << endl;
					break;

				case 8:
					if (PlayerClass == A){
						if (PlayerGold >= shop.getBowOfApolloCost()){
							PlayerAttack = shop.getBowOfApolloAttack();
							cout << "You purchased the bow of Apollo!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}

					if (PlayerClass == B){
						if (PlayerGold >= shop.getHammerOfHephaestusCost()){
							PlayerAttack = shop.getHammerOfHephaestusAttack();
							cout << "You purchased the hammer of Hephaestus!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}


					if (PlayerClass == S){
						if (PlayerGold >= shop.getSwordOfAresCost()){
							PlayerAttack = shop.getSwordOfAresAttack();
							cout << "You purchased the sword of Ares!" << endl;
							cout << "Your attack is now " << PlayerAttack << endl;
						}
						else{
							cout << "You do not have enough gold for that." << endl;
						}
					}

					cout << endl;
					break;

				case 9:
					cout << PlayerName << " left the shop." << endl;
					cout << endl;
					break;
				}

			} while (ShopMenu != 9);

			cout << "Welcome to the menu! Please make a selection (1-4)" << endl;
			cout << endl;

			cout << "1. Heal" << endl;
			cout << "2. Shop" << endl;
			cout << "3. Battle" << endl;
			cout << "4. Quit" << endl;

			cout << "Your selection: " << endl;
			//Insert battle option here next
		}

	} while (menu != 4);

	system("pause");
	return 0;
}
