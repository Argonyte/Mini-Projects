#include <stdio.h>
#include <ctype.h>

int main(void){

	int month = 0, day = 0, sign = 0;

	printf("\n\n Enter your birth month (1-12): ");
	scanf("%d", &month);
	printf("\n\n Enter your birth day (1-31): ");
	scanf("%d", &day);

	if((isdigit(month) == 0) && (isdigit(day)) == 0 && (month >= 1) && (month <= 12) && (day >= 1) && (day <= 31)) {

		switch (month) {

			case 1:
					if (day <= 20) {
						sign = 10;
					}else if (day >= 21) {
						sign = 11;
					}
					break;
			case 2:
					if (day <= 19){
						sign = 11;
					}else if((day >= 20) && (day <= 28)) {
						sign = 12;
					}else {
						sign = 99;
					}
					break;
			case 3:
					if (day <= 20) {
						sign = 12;
					} else if (day >= 21) {
						sign = 1;
					}
					break;
			case 4:
					if (day <= 20) {
						sign = 1;
					}else if((day >= 20) && (day <= 30)) {
						sign = 2;
					}else {
						sign = 99;
					}
					break;
			case 5:
					if (day <= 20) {
						sign = 2;
					} else if (day >= 21) {
						sign = 3;
					}
					break;
			case 6:
					if (day <= 20) {
						sign = 3;
					}else if((day >= 20) && (day <= 30)) {
						sign = 4;
					}else {
						sign = 99;
					}
					break;
			case 7:
					if (day <= 20) {
						sign = 4;
					} else if (day >= 21) {
						sign = 5;
					}
					break;
			case 8:
					if (day <= 20) {
						sign = 5;
					} else if (day >= 21) {
						sign = 6;
					}
					break;
			case 9:
					if (day <= 20) {
						sign = 6;
					}else if((day >= 20) && (day <= 30)) {
						sign = 7;
					}else {
						sign = 99;
					}
					break;
			case 10:
					if (day <= 20) {
						sign = 7;
					} else if (day >= 21) {
						sign = 8;
					}
					break;
			case 11:
					if (day <= 20) {
						sign = 8;
					}else if((day >= 20) && (day <= 30)) {
						sign = 9;
					}else {
						sign = 99;
					}
					break;
			case 12:
					if (day <= 20) {
						sign = 9;
					} else if (day >= 21) {
						sign = 10;
					}
					break;
		} // EOf for Right Sign 

		if (sign == 1) {
			printf("\nYou are born in the sign of the Aries. You have following traits:\n \nAdventurous \nEnergetic \nPioneering \nCourageous \nEnthusiastic \nConfident \nDynamic \nQuick-Witted\n");
		}else if(sign == 2) {
			printf("\nYou are born in the sign of the Taurus. You have following traits:\n \nPatient \nReliable \nWarmhearted \nLoving \nPersistent \nDetermined \nPlacid \nSecurity loving\n");
		}else if(sign == 3) {
			printf("\nYou are born in the sign of the Gemini. You have following traits:\n \nAdaptable \nVersatile \nCommunicative \nWitty \nIntellectual \nEloquent \nYouthful \nLively\n");
		}else if(sign == 4) {
			printf("\nYou are born in the sign of the Cancer. You have following traits:\n \nEmotional \nLoving \nIntuitiv \nImaginative \nShrewd \nCautious \nProtective \nSympathetic\n");
		}else if(sign == 5) {
			printf("\nYou are born in the sign of the Leo. You have following traits:\n \nGenerous \nWarmhearted \nCreative \nEnthusiastic \nBroad-minded\nExpansive \nFaithful \nLoving\n");
		}else if(sign == 6) {
            printf("\nYou are born in the sign of the Virgo. You have following traits:\n \nModest \nShy \nMeticulous \nReliable \nPractical \nDiligent \nIntelligent \nAnalytical\n");
        }else if(sign == 7) {
            printf("\nYou are born in the sign of the Libra. You have following traits:\n \nDiplomatic \nUrbane \nRomantic \nCharming \nEasygoing \nSociable \nIdealistic \nPeaceable\n");
        }else if(sign == 8) {
            printf("\nYou are born in the sign of the Scorpio. You have following traits:\n \nDetermined \nForceful \nEmotional \nIntuitive \nPowerful\nPassionate \nExciting \nMagnetic\n");
        }else if(sign == 9) {
            printf("\nYou are born in the sign of the Sagittarius. You have following traits:\n \nOptimistic \nFreedom-loving \nJovial \nGood-humored\nHonest \nStraightforward \nIntellectual \nPhilosophical\n");
        }else if(sign == 10) {
            printf("\nYou are born in the sign of the Capricorn. You have following traits:\n \nPractical \nPrudent \nAmbitious \nDisciplined\nHumorous \nReserved\n");
        }else if(sign == 11) {
            printf("\nYou are born in the sign of the Aquarius. You have following traits:\n \nFriendly \nHumanitarian \nHonest \nLoyal \nOriginal \nInventive \nIndependent \nIntellectual\n");
        }else if(sign == 12) {
            printf("\nYou are born in the sign of the Pisces. You have following traits:\n \nImaginative \nSensitive \nCompassionate \nKind \nSelfless\nUnworldly \nIntuitive \nSympathetic\n");
        }else if(sign == 99) {
        	printf("\nThis day does not exist in the month\n");
        }//EOf for forcasting
	}else {
		printf("\nYou did not put correct date\n");
	}//EOf date check
return 0;
}