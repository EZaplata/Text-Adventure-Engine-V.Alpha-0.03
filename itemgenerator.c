#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int itemgenerator(){
    //Need to find better way of generating random numbers
srand(time(NULL));
int weapontype = rand() % 10;
int sword = 0, axe = 0;
int noitem = 0;
int damage = 0, atspeed = 0;
int type = 0;
int ice = 0, fire = 0;

  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  WORD wOldColorAttrs;
  CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
  GetConsoleScreenBufferInfo(h, &csbiInfo);
  wOldColorAttrs = csbiInfo.wAttributes;

if(weapontype == 0 || weapontype == 1 || weapontype == 2  || weapontype == 3){
    sword++;
}
else if (weapontype == 4 || weapontype == 5 || weapontype == 6  || weapontype == 7){
    axe++;
}
else if(weapontype == 8 || weapontype == 9){
    noitem++;
}
else if(weapontype == 10){
    weaponready();
}

if(sword == 1){
    printf("You got: \n");
    type = (rand() % 3);
        if(type == 1){
        SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("Ice ");
         ice = (rand() % 7) + 1;
    }
    if (type == 2){
  SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
        printf("Fire ");
        fire = (rand() % 7) + 1;
    }
    (type == 1 || type == 2)?
    printf("sword \n"):printf("Sword \n");
    SetConsoleTextAttribute ( h, wOldColorAttrs);
    //Chances of damage stat
    damage = (rand() % 7) + 1;
    printf("Damage:%d\n", damage);
    //Chances of speed stat
    atspeed = (rand() % 10) + 1;
    printf("Attack Speed:%d\n", atspeed);
    printf("Ice damage:%d\n", ice);
    printf("Fire damage:%d\n\n", fire);

}

else if(axe == 1){
    printf("You got: \n");
    type = (rand() % 3);
    if(type == 1){
        SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
        printf("Ice ");
         ice = (rand() % 7) + 1;
    }

    if (type == 2){
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
        printf("Fire ");
        fire = (rand() % 7) + 1;
    }
    (type == 1 || type == 2)?
    printf("axe \n"):printf("Axe \n");
    SetConsoleTextAttribute ( h, wOldColorAttrs);
    damage = (rand() % 10) + 1;
    printf("Damage:%d\n", damage);
    atspeed = (rand() % 7) + 1;

    printf("Attack Speed:%d\n", atspeed);
    printf("Ice damage:%d\n", ice);
    printf("Fire damage:%d\n\n", fire);
}
else if(noitem == 1){
    printf("Nothing was dropped\n\n");
}


gameworld();

}


