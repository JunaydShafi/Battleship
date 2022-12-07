#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
 int main()
{
    //Create a video mode object
    VideoMode vm(1920, 1080);
    
    // create and open a window for the game
    RenderWindow window(vm, "Battleship-Ground Forces!", Style::Fullscreen);

    //Create texture
    Texture introScreen;
    //Load graphic into texture
    introScreen.loadFromFile("Textures/GameIntroScreen (1).png");
    //make sprite
    Sprite loadingScreen;
    //Attach texture to sprite
    loadingScreen.setTexture(introScreen);
    // Set the sprite Backround to cover screen
    loadingScreen.setPosition(0,0);

    //Battleship map texture
    Texture battleshipMap;
    battleshipMap.loadFromFile("Textures/OceanMapBackround2.png");
    Sprite battleShipMap;
    battleShipMap.setTexture(battleshipMap);
    battleShipMap.setPosition(0,0);

    //Ground Forces map texture backround
    Texture groundforces;
    groundforces.loadFromFile("Textures/TankMapBackroundTexture.png");
    Sprite groundForcesMap;
    groundForcesMap.setTexture(groundforces);
    groundForcesMap.setPosition(0,0);


    //main game loop
    while(window.isOpen())
    {
        // Create event object
        Event event;
        //Handle player input 
        while(window.pollEvent(event))
        {
            if(Keyboard::isKeyPressed(Keyboard::Escape))
            {
                window.close();
            }

            switch(event.type)
            {
                case Event::Closed:
                    window.close();
                    break;

                case Event::KeyPressed:1
                   // window.draw(battleShipMap);
                    //break;

                case Event::KeyPressed:2
                    //window.draw(groundForcesMap);
                    //break;
            }

            // Update scene

            //Draw scene

            // Clear everything from last frame
            window.clear();

            // Draw our game scene
            //window.draw(loadingScreen);
            window.draw(groundForcesMap);

            //Show eveyerything you drew
            window.display();
        }
        

    }

    return 0;

Texture Battleshiptexture;
Battleshiptexture.loadFromFile("Textures/BattleShipSprite.png"):
Sprite TestureBattleship;
TestureBattleship.setTexture(Battleshiptexture);
TestureBattleship.setPosition(190,0):
Texture scout;
scout. loadFromFile("Textures/ScoutCruizerSprite.png");
Sprite scoutcruzer;
scoutCruzer.setTexture(scout);
scoutCruzer.setPosition(190.490):
Texture submarine;
submarine. loadFromFile("Textures/SubmarineSprite.png");
Sprite submarineTexture;
submarineTexture.setTexture(submarine);
submarineTexture.setPosition(640,-165);
Texture aircraftCarrier;
aircraftCarrier.loadFromFile("Textures/AircraftCarrierSprite.png"):
Sprite aircraftcarrierTexture;
aircrafttarrierTexture.setTexture(aircraftcarrier):
aircraftCarrierTexture.setPosition(530,25);

window. draw(aircraftCarrierTexture):
window.draw(submarineTexture);
window.draw(scoutCruzer);
window. draw(TestureBattleship);


// Enemy ship sprites

Sprite enemyTestureBattleship;
enemyTestureBattleship.setTexture(Battleshiptexture):
enemyTestureBattleship.setPosition(190,490);
  
Sprite enemyscoutcruzer;
enemyscoutCruzer.setTexture(scout):
enemyscoutCruzer.setPosition(190,0):
  
Sprite enemysubmarineTexture;
enemysubmarineTexture.setTexture(submarine);
enemysubmarineTexture.setPosition(220,45);
  
Sprite enemyaircraftCarrierTexture;
enemyaircraftCarrierTexture.setTexture(aircraftCarrier);
enemyaircraftcarrierTexture.setPosition(640,-125):
// User Tank Sprites









window.draw(enemyaircraftCarrierTexture);
window.draw (enemysubmarineTexture);
window. draw (enemyscoutCruzer);
window. draw (enemyTestureBattleship);



Texture Maus;
Maus.loadFromFile("Textures/MausTankSprite.png");
Sprite MausTexture;
MausTexture. setTexture (Maus) ;
MausTexture. setPosition(50, 370) :
133
134
135
136
137
138
Texture littleTank;
littleTank.loadFromFile("Textures/TankSpritez.png");
Sprite littleTankTexture;
littleTankTexture.setTexture(littleTank);
littleTankTexture.setPosition(370,110):
139
140
141
142
143
144
Texture sturmTiger:
sturmTiger. loadFromFile ("Textures/Tank.png") ;
Sprite sturmTigerTexture;
sturmTigerTexture.setTexture(sturmTiger);
sturmTigerTexture.setPosition(580,99);
145
146
147
148
149
150
Texture isthree:
isthree.loadFromFile("Textures/EnemyTankIS-3Sprtie(1).png");
Sprite isthreeTexture;
isthreeTexture,setTexture(isthree);
isthreeTexture,setPosition(630,25)
