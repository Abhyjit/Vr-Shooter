using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidDestroyed : MonoBehaviour
{
    [SerializeField] private GameObject astroidExplosion;
    [SerializeField] private Pose player;

    [SerializeField] private GameController gameController;


    public void Awake()
    {
        gameController = FindObjectOfType<GameController>();
    }
    public void AsteroidExplosion()
    {
        Instantiate(astroidExplosion, transform.position,transform.rotation);   //instantiate is used to add objects in to the scene and here it is used to istantiate destroying asteroid
        
        //calculate the score 
        float distanceFromPlayer = Vector3.Distance(transform.position,player.position);
        int bonusPoints = (int)distanceFromPlayer;

        int asteroidScore = 10 * bonusPoints;

        // passing asteroid score value to the game controller script
        gameController.UpdatePlayerScore(asteroidScore);
        
        
        
        Destroy(this.gameObject);//since this is added to the asteroid istself .....after instantiating destroying object destroying this object is called which will destroy the asteroid itself
    }

}
