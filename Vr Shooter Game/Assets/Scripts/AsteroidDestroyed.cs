using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidDestroyed : MonoBehaviour
{
    [SerializeField] private GameObject astroidExplosion;


    public void AsteroidExplosion()
    {
        Instantiate(astroidExplosion, transform.position,transform.rotation);
        Destroy(this.gameObject);
    }

}
