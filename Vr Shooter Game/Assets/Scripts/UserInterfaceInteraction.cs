using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class UserInterfaceInteraction : MonoBehaviour, IRayCastInterface
{

    public UnityEvent OnHitByRaycast;
    public void HitByRaycast()
    {
        OnHitByRaycast.Invoke();
    }
}
   
