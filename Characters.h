#pragma once

class PlayableCharacters{

private:

	float ArcherHealth = 100;
	float ArcherAttack = 6;
	float ArcherDefense = 2;

	float BerserkerHealth = 150;
	float BerserkerAttack = 4;
	float BerserkerDefense = 3;

	float SpartanHealth = 100;
	float SpartanAttack = 4;
	float SpartanDefense = 4;

public:

	float getArcherHealth();
	float getArcherAttack();
	float getArcherDefense();

	float getBerserkerHealth();
	float getBerserkerAttack();
	float getBerserkerDefense();

	float getSpartanHealth();
	float getSpartanAttack();
	float getSpartanDefense();
};

class Enemies{

private:

	// Wandering Soul
	float wsHealth = 30;
	float wsAttack = 5;
	int wsGold = 1;

	// Vengeful Spirit
	float vsHealth = 50;
	float vsAttack = 10;
	int vsGold = 2;

	// Hellhound
	float hHealth = 70;
	float hAttack = 15;
	int hGold = 4;

	//Eurynomos the Flesh Eater
	float efeHealth = 100;
	float efeAttack = 15;
	int efeGold = 6;

	// Erinye
	float eHealth = 120;
	float eAttack = 20;
	int eGold = 7;

	// Cerberus
	float cHealth = 125;
	float cAttack = 25;
	int cGold = 10;

	// Hecate Goddess of Sorcery
	float hgsHealth = 140;
	float hgsAttack = 35;
	int hgsGold = 15;

	// Thanatos God of Death
	float tgdHealth = 150;
	float tgdAttack = 45;
	int tgdGold = 20;

	// Hades God of the Underworld
	float hguHealth = 200;
	int hguAttack = 50;
	int hguGold = 25;

	// Tartarus Spirit of the Bottomless Pit
	float tsbpHealth = 400;
	float tsbpAttack = 80;
	int tsbpGold = 50;

public:

	float getwsHealth();
	float getwsAttack();
	int getwsGold();

	float getvsHealth();
	float getvsAttack();
	int getvsGold();

	float gethHealth();
	float gethAttack();
	int gethGold();

	float getefeHealth();
	float getefeAttack();
	int getefeGold();

	float geteHealth();
	float geteAttack();
	int geteGold();

	float getcHealth();
	float getcAttack();
	int getcGold();

	float gethgsHealth();
	float gethgsAttack();
	int gethgsGold();

	float gettgdHealth();
	float gettgdAttack();
	int gettgdGold();

	float gethguHealth();
	float gethguAttack();
	int gethguGold();

	float gettsbpHealth();
	float gettsbpAttack();
	int gettsbpGold();
};
