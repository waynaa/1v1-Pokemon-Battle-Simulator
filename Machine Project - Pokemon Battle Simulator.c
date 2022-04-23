#Author: Ynna Marie D. Martin
#include<stdio.h>
#include<stdlib.h>

void displayChoices () //This function displays the Pokemon choices
{	
	printf (".---------- POKEMON 1v1 BATTLE SIMULATOR ----------.\n");
	printf ("|                                                  |\n");
	printf ("|          Here are the Pokemon choices:           |\n");
	printf ("|                   1 - Entei                      |\n");
	printf ("|                   2 - Milotic                    |\n");
	printf ("|                   3 - Torterra                   |\n");
	printf ("|                   4 - Pikachu                    |\n");
	printf ("|                   5 - Groudon                    |\n");
	printf ("|                   6 - Lapras                     |\n");
	printf ("|                   7 - Stunfisk                   |\n");
	printf (".--------------------------------------------------.\n");
}

void displayPokemon (int nChoice) //This function displays Pokemon's name
{
	switch (nChoice)
	{
	case 1: printf("Entei"); break;
	case 2: printf("Milotic"); break;
	case 3: printf("Torterra"); break;
	case 4: printf("Pikachu"); break;
	case 5: printf("Groudon"); break;
	case 6: printf("Lapras"); break;
	case 7: printf("Stunfisk"); break;
	}
}

//This function asks each player's Pokemon choice and displays it
void PlayersChoice (int *nP1Choice, int *nP2Choice)
{
	do
	{
		printf ("\nPlayer 1, please select a Pokemon: ");
		scanf ("%d", nP1Choice);
	} while (!((*nP1Choice) > 0 && (*nP1Choice) <= 7));
	
	printf ("Player 1 has selected ");
	displayPokemon (*nP1Choice);
	printf ("!");
	
	do
	{
		printf ("\n\nPlayer 2, please select a Pokemon: ");
		scanf ("%d", nP2Choice);
	} while (!((*nP2Choice) > 0 && (*nP2Choice) <= 7));
	
	printf ("Player 2 has selected ");
	displayPokemon (*nP2Choice);
	printf ("!");
}

//This function displays the Current and Max HP of the player's Pokemon
void displayHP (int nChoice, int playerArray[])
{
	displayPokemon(nChoice);
	printf(": %d/%d HP\n", playerArray[0], playerArray[1]);
}

/*
playerArray[0] - Current HP
playerArray[1] - Max HP
playerArray[2] - Move 1 Base Power
playerArray[3] - Move 1 Power Points 
playerArray[4] - Move 2 Base Power
playerArray[5] - Move 2 Power Points
playerArray[6] - Charge Up PP
playerArray[7] - Protect PP 
playerArray[8] - Pokemon Type 1
playerArray[9] - Pokemon Type 2
playerArray[10] - Move1 Type
playerArray[11] - Move2 Type

1 - Fire
2 - Water
3 - Grass
4 - Electric
5 - Ground
6 - Ice
7 - None

To use:
playerArray[10] = 1 (Move 1 = Fire Type)
*/ 

void initializeStats (int playerArray[], int nChoice){
	switch (nChoice) 
	{
		//Entei
		case 1: playerArray[0] = 150; playerArray[1] = 150;	//Current HP ; Max HP
				playerArray[2] = 30;  playerArray[3] = 5;	//Move 1 BP ; Move 1 PP
				playerArray[4] = 30;  playerArray[5] = 5;	//Move 2 BP ; Move 2 PP
				playerArray[6] = 5;  playerArray[7] = 5;	//Protect ; Charged Up
				playerArray[8] = 1; playerArray[9] = 7;		//Pokemon Type 1 ; Pokemon Type 2
				playerArray[10] = 1; playerArray[11] = 5;	//Move 1's type ; Move 2's type
			break;
		
		//Milotic
		case 2:	playerArray[0] = 200; playerArray[1] = 200;	//Current HP ; Max HP
				playerArray[2] = 20;  playerArray[3] = 7;	//Move 1 BP ; Move 1 PP 
				playerArray[4] = 20;  playerArray[5] = 7;	//Move 2 BP ; Move 2 PP  
				playerArray[6] = 5;  playerArray[7] = 5;	//Protect ; Charged Up 
				playerArray[8] = 2; playerArray[9] = 7;		//Pokemon Type 1 ; Pokemon Type 2
				playerArray[10] = 2; playerArray[11] = 6;	//Move 1's type ; Move 2's type
			break;
		
		//Torterra
		case 3: playerArray[0] = 220; playerArray[1] = 220;	//Current HP ; Max HP
				playerArray[2] = 20;  playerArray[3] = 7;	//Move 1 BP ; Move 1 PP 
				playerArray[4] = 40;  playerArray[5] = 5;	//Move 2 BP ; Move 2 PP  
				playerArray[6] = 5;  playerArray[7] = 5;	//Protect ; Charged Up 
				playerArray[8] = 3; playerArray[9] = 5;		//Pokemon Type 1 ; Pokemon Type 2
				playerArray[10] = 5; playerArray[11] = 3;	//Move 1's type ; Move 2's type
			break;

		//Pikachu
		case 4:	playerArray[0] = 120; playerArray[1] = 120;	//Current HP ; Max HP  
				playerArray[2] = 10;  playerArray[3] = 10;	//Move 1 BP ; Move 1 PP 
				playerArray[4] = 20;  playerArray[5] = 7;	//Move 2 BP ; Move 2 PP  
				playerArray[6] = 5;  playerArray[7] = 5;	//Protect ; Charged Up 
				playerArray[8] = 4; playerArray[9] = 7;		//Pokemon Type 1 ; Pokemon Type 2
				playerArray[10] = 4; playerArray[11] = 5;	//Move 1's type ; Move 2's type
			break;
		
		//Groudon
		case 5: playerArray[0] = 150; playerArray[1] = 150;	//Current HP ; Max HP 
				playerArray[2] = 40;  playerArray[3] = 5;	//Move 1 BP ; Move 1 PP 
				playerArray[4] = 30;  playerArray[5] = 5;	//Move 2 BP ; Move 2 PP  
				playerArray[6] = 5;  playerArray[7] = 5;	//Protect ; Charged Up 
				playerArray[8] = 5; playerArray[9] = 7;		//Pokemon Type 1 ; Pokemon Type 2
				playerArray[10] = 5; playerArray[11] = 1;	//Move 1's type ; Move 2's type
			break;
		
		//Lapras
		case 6: playerArray[0] = 190; playerArray[1] = 190;	//Current HP ; Max HP 
				playerArray[2] = 20;  playerArray[3] = 7;	//Move 1 BP ; Move 1 PP 
				playerArray[4] = 20;  playerArray[5] = 7;	//Move 2 BP ; Move 2 PP  
				playerArray[6] = 5;  playerArray[7] = 5;	//Protect ; Charged Up 
				playerArray[8] = 6; playerArray[9] = 2;		//Pokemon Type 1 ; Pokemon Type 2
				playerArray[10] = 6; playerArray[11] = 2;	//Move 1's type ; Move 2's type
			break;
		
		//Stunfisk
		case 7: playerArray[0] = 130; playerArray[1] = 130;	//Current HP ; Max HP  
				playerArray[2] = 10;  playerArray[3] = 10;	//Move 1 BP ; Move 1 PP 
				playerArray[4] = 30;  playerArray[5] = 5;	//Move 2 BP ; Move 2 PP
				playerArray[6] = 5;  playerArray[7] = 5;	//Protect ; Charged Up
				playerArray[8] = 5; playerArray[9] = 4;		//Pokemon Type 1 ; Pokemon Type 2
				playerArray[10] = 2; playerArray[11] = 5;	//Move 1's type ; Move 2's type
			break;
	}	
}

//This function will display the moves of each player's Pokemon
void displayMoves (int nChoice, int attackerStats[], int isChargedUp) 
{
	displayPokemon(nChoice); printf("'s moves are: ");
	
	switch(nChoice)
	{
	case 1: //Entei
			if (isChargedUp){ //If the player used Charged Up, the BP of the moves are doubled
				printf ("\n1 - Fire Blast (%d BP, %d PP)", attackerStats[2] * 2, attackerStats[3]);
				printf ("\n2 - Earthquake (%d BP, %d PP)", attackerStats[4] * 2, attackerStats[5]);
			}
			else{
				printf ("\n1 - Fire Blast (%d BP, %d PP)", attackerStats[2], attackerStats[3]);
				printf ("\n2 - Earthquake (%d BP, %d PP)", attackerStats[4], attackerStats[5]);
			}
			printf ("\n3 - Protect (%d PP)", attackerStats[6]); 
			printf ("\n4 - Charge up (%d PP)", attackerStats[7]);
			break;
	
	case 2: //Milotic
			if (isChargedUp){
				printf ("\n1 - Scald (%d BP, %d PP)", attackerStats[2] * 2, attackerStats[3]);
				printf ("\n2 - Ice Beam (%d BP, %d PP)", attackerStats[4] * 2, attackerStats[5]);
			}
			else {
				printf ("\n1 - Scald (%d BP, %d PP)", attackerStats[2], attackerStats[3]);
				printf ("\n2 - Ice Beam (%d BP, %d PP)", attackerStats[4], attackerStats[5]);
			}
			printf ("\n3 - Protect (%d PP)", attackerStats[6]);
			printf ("\n4 - Charge up (%d PP)", attackerStats[7]); break;
	
	case 3: //Torterra
			if (isChargedUp){
				printf ("\n1 - Dig (%d BP, %d PP)", attackerStats[2] * 2, attackerStats[3]); 
				printf ("\n2 - Leaf Storm (%d BP, %d PP)", attackerStats[4] * 2, attackerStats[5]);
			}
			else {
				printf ("\n1 - Dig (%d BP, %d PP)", attackerStats[2], attackerStats[3]); 
				printf ("\n2 - Leaf Storm (%d BP, %d PP)", attackerStats[4], attackerStats[5]);
			}
			printf ("\n3 - Protect (%d PP)", attackerStats[6]);
			printf ("\n4 - Charge up (%d PP)", attackerStats[7]); break;
	
	case 4: //Pikachu
			if (isChargedUp){
				printf ("\n1 - Thunderbolt (%d BP, %d PP)", attackerStats[2] * 2, attackerStats[3]);
				printf ("\n2 - Dig (%d BP, %d PP)", attackerStats[4] * 2, attackerStats[5]);
			}
			else{
				printf ("\n1 - Thunderbolt (%d BP, %d PP)", attackerStats[2], attackerStats[3]);
				printf ("\n2 - Dig (%d BP, %d PP)", attackerStats[4], attackerStats[5]);				
			}
			printf ("\n3 - Protect (%d PP)", attackerStats[6]);
			printf ("\n4 - Charge up (%d PP)", attackerStats[7]); break;
	
	case 5: //Groudon
			if (isChargedUp){
				printf ("\n1 - Fissure (%d BP, %d PP)", attackerStats[2] * 2, attackerStats[3]);
				printf ("\n2 - Fire Blast (%d BP, %d PP)", attackerStats[4] * 2, attackerStats[5]);
			}
			else{
				printf ("\n1 - Fissure (%d BP, %d PP)", attackerStats[2], attackerStats[3]);
				printf ("\n2 - Fire Blast (%d BP, %d PP)", attackerStats[4], attackerStats[5]);
			}
			printf ("\n3 - Protect (%d PP)", attackerStats[6]);
			printf ("\n4 - Charge up (%d PP)", attackerStats[7]); break;
	case 6: //Lapras
			if (isChargedUp){
				printf ("\n1 - Ice Beam (%d BP, %d PP)", attackerStats[2] * 2, attackerStats[3]);
				printf ("\n2 - Scald (%d BP, %d PP)", attackerStats[4] * 2, attackerStats[5]);
			}
			else {
			printf ("\n1 - Ice Beam (%d BP, %d PP)", attackerStats[2], attackerStats[3]);
			printf ("\n2 - Scald (%d BP, %d PP)", attackerStats[4],attackerStats[5]);
			}
			printf ("\n3 - Protect (%d PP)", attackerStats[6]);
			printf ("\n4 - Charge up (%d PP)", attackerStats[7]); break;
	
	case 7: //Stunfisk
			if (isChargedUp){
				printf ("\n1 - Water Gun (%d BP, %d PP)", attackerStats[2] * 2, attackerStats[3]);
				printf ("\n2 - Earthquake (%d BP, %d PP)", attackerStats[4] * 2, attackerStats[5]);
			}
			else {
				printf ("\n1 - Water Gun (%d BP, %d PP)", attackerStats[2], attackerStats[3]);
				printf ("\n2 - Earthquake (%d BP, %d PP)", attackerStats[4],attackerStats[5]);
			}
			printf ("\n3 - Protect (%d PP)", attackerStats[6]);
			printf ("\n4 - Charge up (%d PP)", attackerStats[7]); break;
	}
}
/*
* 1 - Fire
* 2 - Water  
* 3 - Grass
* 4 - Electric
* 5 - Ground
* 6 - Ice
* 7 - None 
*/

//This function returns the damage of the Pokemon. It will be compute based on their certain types
float TypeEffectivenessMultiplier(int moveType, int pokemonType){
	float multiplier = 1.0;
	switch(moveType){
		case 1: //Fire
			if (pokemonType == 1) multiplier = 0.5; 		//Against fire
			else if (pokemonType == 2) multiplier = 0.5;	//Against water
			else if (pokemonType == 3) multiplier = 2.0;	//Against grass
			else if (pokemonType == 5) multiplier = 0.5;	//Against ground
			else if (pokemonType == 6) multiplier = 2.0;	//Against Ice
			break;

		case 2: //Water
			if (pokemonType == 1) multiplier = 2.0;			//Against fire
			else if (pokemonType == 2) multiplier = 0.5;	//Against water
			else if (pokemonType == 3) multiplier = 0.5;	//Against grass
			else if (pokemonType == 5) multiplier = 2.0;	//Against ground
			break;
			
		case 3: //Grass
			if (pokemonType == 1) multiplier = 0.5;			//Against fire
			else if (pokemonType == 2) multiplier = 2.0;	//Against water
			else if (pokemonType == 3) multiplier = 0.5;	//Against grass
			else if (pokemonType == 4) multiplier = 0.0;	//Against electric
			else if (pokemonType == 5) multiplier = 2.0;	//Against ground
			else if (pokemonType == 6) multiplier = 0.0;	//Against ice
			break;
		
		case 4: //Electric
			if (pokemonType == 2) multiplier = 2.0;			//Against water
			else if (pokemonType == 3) multiplier = 0.5;	//Against grass
			else if (pokemonType == 5) multiplier = 0.0;	//Against ground
			break;
			
		case 5: //Ground
			if (pokemonType == 1) multiplier = 2.0; 		//Against fire
			else if (pokemonType == 2) multiplier = 0.5;	//Against water
			else if (pokemonType == 3) multiplier = 0.5;	//Against grass
			else if (pokemonType == 4) multiplier = 2.0;	//Against electric
			else if (pokemonType == 6) multiplier = 0.5;	//Against Ice
			break;
		
		case 6: //Ice
			if (pokemonType == 1) multiplier = .05;			//Against fire
			else if (pokemonType == 2) multiplier = 2.0;	//Against water
			else if (pokemonType == 3) multiplier = 2.0;	//Against grass
			else if (pokemonType == 5) multiplier = 2.0;	//Against ground
			break;
	}	
	return multiplier;
}	

//This function is the game itself and everything is found here(player's moves, damage calculation, result screen, etc.)
void mainGame(int P1Choice, int P2Choice){
	int P1Stats[12]; //Array for player 1's stats
	int P2Stats[12]; //Array for player 2's stats
	
	initializeStats (P1Stats, P1Choice); 
	initializeStats (P2Stats, P2Choice);
	 
	int isP1Protected = 0, isP2Protected = 0;
	int isP1ChargedUp = 0, isP2ChargedUp = 0; 

	int P1ProtectCooldown = 0, P2ProtectCooldown = 0; //So players can't use protect on next turn if used on the previous turn

	int nTurn = 1; //Facilitates turn taking between players
	int isValidAction = 0; //Checks if pokemon chose a valid action 
		//e.g. if pokemon used protect last turn and used protect again, isValidAction = 0;
		//e.g. if pokemon used an attack with 1 PP, PP becomes 0, do attack, and isValidAction = 1 

	int nAction;
	do {
		if (isValidAction){
			if (nTurn == 1 && P1ProtectCooldown == 2){ //Player 1 can use Protect now
				isP1Protected = 0;
				P1ProtectCooldown = 0;		
			}

			else if (nTurn == 0 && P2ProtectCooldown == 2){ //Player 2 can use Protect now
				isP2Protected = 0;
				P2ProtectCooldown = 0;		
			}
		}

		//Reset value
		isValidAction = 0;

		printf ("\n\n**************************************************\n\n");
		displayHP (P1Choice, P1Stats);
		displayHP (P2Choice, P2Stats);
		printf ("\n");

		//Check whose move it is and display moves accordingly
		if (nTurn == 1) //Player 1's turn	
			displayMoves (P1Choice, P1Stats, isP1ChargedUp);
		else if (nTurn == 0) //Player 2's turn
			displayMoves (P2Choice, P2Stats, isP2ChargedUp);

		do {
			if (nTurn == 1)
				printf("\n\nPlayer 1, Select a move: ");
			else if (nTurn == 0)
				printf("\n\nPlayer 2, Select a move: ");
		
			scanf("%d", &nAction);
		} while (!(nAction > 0 && nAction < 5)); 
		
		//If no other available moves except PROTECT but it can't be used twice in a row, go directly to STRUGGLE
		int hasValidMoves = 0;
		if (nTurn == 1){ 
			if (((P1Stats[3] > 0) && (P1Stats[5] > 0) && (P1Stats[6] > 0) && (P1Stats[7] > 0) ||
			(P1Stats[3] == 0) && (P1Stats[5] == 0) && (P1Stats[7] == 0) && (P1ProtectCooldown) != 0))
				hasValidMoves = 1;
			else hasValidMoves = 0;
		}
		else if (nTurn == 0){
			if (((P2Stats[3] > 0) || (P2Stats[5] > 0) || (P2Stats[6] > 0) || (P2Stats[7] > 0) ||
				(P2Stats[3] == 0) && (P2Stats[5] == 0) && (P2Stats[7] == 0) && (P2ProtectCooldown) != 0))
				hasValidMoves = 1;
			else hasValidMoves = 0;
		}

		if (hasValidMoves){
			switch(nAction){
				case 1: //Move 1
					if(nTurn == 1){ //Player 1's turn
						//Check if move is usable 
						if (P1Stats[3] > 0){
							//Check if enemy is protected
							if(isP2Protected){
								isP2Protected = 0;
								isValidAction = 1;
								P1Stats[3]--;
							} 
							else{
								//Calculate damages
								float finalDamage = P1Stats[2];
								
								//ChargedUp
								if (isP1ChargedUp)
									finalDamage *= 2.0;
								
								//STAB
								if (P1Stats[8] == P1Stats[10] || P1Stats[8] == P1Stats[11])
									finalDamage *= 1.5;

								//Enemy Pokemon type 1
								finalDamage *= TypeEffectivenessMultiplier(P1Stats[8], P2Stats[10]);
								finalDamage *= TypeEffectivenessMultiplier(P1Stats[8], P2Stats[11]);

								//Deal damage
								P2Stats[0] -= finalDamage;
								P1Stats[3]--;
								isValidAction = 1;	
							} 
						}
						else{
							isValidAction = 0;
							printf("That move has 0 PP.");
						}
					} 
					else if (nTurn == 0){ //Player 2's turn
						//Check if move is usable
						if (P2Stats[3] > 0){
							//check if enemy is protected
							if(isP1Protected){
								isP1Protected = 0;
								isValidAction = 1;
								P2Stats[3]--;
							} 
							else{
								//Calculate damages
								float finalDamage = P2Stats[2];
								
								//ChargedUp
								if (isP2ChargedUp)
									finalDamage *= 2.0;
								
								//STAB
								if (P2Stats[8] == P2Stats[10] || P2Stats[8] == P2Stats[11])
									finalDamage *= 1.5;

								//Enemy Pokemon type 1
								finalDamage *= TypeEffectivenessMultiplier(P2Stats[8], P1Stats[10]);
								finalDamage *= TypeEffectivenessMultiplier(P2Stats[8], P1Stats[11]);

								//Deal damage
								P1Stats[0] -= finalDamage;
								P2Stats[3]--;
								isValidAction = 1;
							}
					}
					break;
				case 2: //Move 2
					//Damage calculation here
					if(nTurn == 1){ //Player 1's turn
						//Check if move is usable 
						if (P1Stats[5] > 0){
							//check if enemy is protected
							if(isP2Protected){
								isP2Protected = 0;
								isValidAction = 1;
								P1Stats[5]--;
							} 
							else{
								//Calculate damages
								float finalDamage = P1Stats[4];
								
								//ChargeUp
								if (isP1ChargedUp)
									finalDamage *= 2.0;
								
								//STAB
								if (P1Stats[9] == P1Stats[10] || P1Stats[9] == P1Stats[11])
									finalDamage *= 1.5;

								//Enemy Pokemon type 1
								finalDamage *= TypeEffectivenessMultiplier(P1Stats[9], P2Stats[10]);
								finalDamage *= TypeEffectivenessMultiplier(P1Stats[9], P2Stats[11]);

								//Deal damage
								P2Stats[0] -= finalDamage;
								P1Stats[5]--;
								isValidAction = 1;
							} 
						}
						else{
							isValidAction = 0;
							printf("That move has 0 PP.");
						}
					} 
					else if (nTurn == 0){ //Player 2's turn
					if (P2Stats[5] > 0){
							//check if enemy is protected
							if(isP1Protected){
								isP1Protected = 0;
								isValidAction = 1;
								P2Stats[5]--;
							} 
							else{
								//Calculate damages
								float finalDamage = P2Stats[4];
								
								//ChargeUp
								if (isP2ChargedUp)
									finalDamage *= 2.0;
								
								//STAB
								if (P2Stats[9] == P2Stats[10] || P2Stats[9] == P2Stats[11])
									finalDamage *= 1.5;

								//Enemy Pokemon type 1
								finalDamage *= TypeEffectivenessMultiplier(P2Stats[9], P1Stats[10]);
								finalDamage *= TypeEffectivenessMultiplier(P2Stats[9], P1Stats[11]);

								//Deal damage
								P1Stats[0] -= finalDamage;
								P2Stats[5]--;
								isValidAction = 1;
							}
					}
				}
					break;
				case 3:	//Protect
					if (nTurn == 1){ //P1 Turn
						if (P1Stats[6] > 0){ 
							if (P1ProtectCooldown == 0){ //Check if protect is usable
								isP1Protected = 1;
								P1Stats[6]--;
								isValidAction = 1;
							}
							else 
							printf("You selected Protect last turn, you cannot protect this turn.");
						}
						else{
							isValidAction = 0;
							printf("That move has 0 PP.");
						}
					}
					
					else if (nTurn == 0){ //P2 Turn
						if (P2Stats[6] > 0){ 
							if (P2ProtectCooldown == 0){ //Check if protect is usable
								isP2Protected = 1;
								P2Stats[6]--;
								isValidAction = 1;
							}
							else
							printf("You selected Protect last turn, you cannot protect this turn.");
						}
						else{
							isValidAction = 0;
							printf("That move has 0 PP.");
						}
					}
					break;
				case 4:		//Charge Up
				if (nTurn == 1){ //Player 1's turn
					if (P1Stats[7] > 0){
						isP1ChargedUp = 1;
						P1Stats[7]--;
						isValidAction = 1;
						}
					else{
						isValidAction = 0;
						printf("That move has 0 PP.");
					}
				}
				else if (nTurn == 0){ //Player 2's turn
					if (P2Stats[7] > 0){
						isP2ChargedUp = 1;
						P2Stats[7]--;
						isValidAction = 1;
					}
					else{
						isValidAction = 0;
						printf("That move has 0 PP.");
					}
				}
					break;
			}
		}
	}
		else{
			//If no available moves left: Struggle
			/* If the Pokémon of Player 1 does not have any moves whose Power Points are greater 
			than 0, then the Pokémon of Player 1 takes 5 damage and deals 10 damage to the Pokémon
			of Player 2. The turn ends. */
			if (nTurn == 1){
				P1Stats[0] -=5;
				P2Stats[0] -=10;
				isValidAction = 1; 
			}
		else if (nTurn == 2){
				P2Stats[0] -=5;
				P1Stats[0] -=10;
				isValidAction = 1;
			}
		}

		//Validates protect cooldown
		if (isValidAction){
			if (nTurn == 1 && (isP1Protected || P1ProtectCooldown))
				P1ProtectCooldown++;
			else if (nTurn == 0 && (isP2Protected || P2ProtectCooldown))
				P2ProtectCooldown++;
		}
			
		if (isValidAction)
			nTurn = (nTurn + 1) % 2;

	} while (P1Stats[0] > 0 && P2Stats[0] > 0); //HP of either pokemon is > 0

	//Result screen
	if (P1Stats[0] > P2Stats[0]){
		printf("\n**************************************************");
		printf("\n|                                                |");
		printf("\n|       The pokemon of Player 2 has 0 HP!        |");
		printf("\n|               Player 1 wins!                   |");	
		printf("\n|                                                |");	
		printf("\n**************************************************");
	}
	else {
		printf("\n**************************************************");
		printf("\n|                                                |");
		printf("\n|       The pokemon of Player 1 has 0 HP!        |");
		printf("\n|               Player 2 wins!                   |");
		printf("\n|                                                |");		
		printf("\n**************************************************");
	}
}

int main()
{
	int P1, P2;
	
	displayChoices();
	PlayersChoice(&P1,&P2);
	mainGame (P1, P2);
		
	return 0;
}
