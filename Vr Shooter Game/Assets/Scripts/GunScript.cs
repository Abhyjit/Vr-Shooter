using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunScript : MonoBehaviour
{
    //animation
    [SerializeField] private Animator GunAnimator;

    //sfx
    [SerializeField] private AudioSource GunSource;
    [SerializeField] private AudioClip GunClip;
    //raycast
    public Transform raycastPoint;
    private RaycastHit hit;

    private void Awake()
    {
        GunSource = GetComponent<AudioSource>();
    }

    public void gunFired()
    {
        //animation for the gun trigger
        GunAnimator.SetTrigger("Fire");

        //Playaudio
        GunSource.PlayOneShot(GunClip);
        if(Physics.Raycast(raycastPoint.position  ,raycastPoint.forward,out hit, 800f))
        {
            if (hit.transform.GetComponent<AsteroidDestroyed>() != null)
            {
                hit.transform.GetComponent<AsteroidDestroyed>().AsteroidExplosion();
            }
        }

    }
}
