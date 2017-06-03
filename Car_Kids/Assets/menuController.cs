using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class menuController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void NextClicked(){
		Application.LoadLevel (Application.loadedLevel+1);
	}

	public void QuitClicked(){
		Application.Quit ();
	}
}
