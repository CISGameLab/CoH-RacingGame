using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarController : MonoBehaviour {

	// Use this for initialization
	public GameObject ReadyText;
	public GameObject Settext;
	public GameObject GoText;
	public GameObject StartBtn;
	public GameObject cam;
	public UnityEngine.UI.Text ScoreText;
	public UnityEngine.UI.Text BlinkerText;
	public UnityEngine.UI.Text Timer;



	public GameObject Panel;
	public UnityEngine.UI.Text header;
	public UnityEngine.UI.Text PanelScore;
	public UnityEngine.UI.Text PanelFinishBonus;
	public UnityEngine.UI.Text PanelTotalScore;
	public UnityEngine.UI.Text GoFoods;
	public UnityEngine.UI.Text SlowFoods;
	public UnityEngine.UI.Text WhoaFoods;

	public GameObject QuitPanel;



	int currentTime;
	public int carVel;
	public int score;

	int greenCount;
	int orangeCount;
	int redCount;


	public bool canMove;


	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(Timer.IsActive())
			Timer.text = (45-Mathf.CeilToInt(Time.time - currentTime)).ToString ();
		transform.Translate (0,Time.deltaTime*carVel,0,Space.World);
		cam.transform.position = new Vector3 (0,this.transform.position.y+3.67f,-10.0f);

		if (45 - Mathf.CeilToInt (Time.time - currentTime) <= 0) {
			Debug.Log ("GameOver");
			carVel = 0;
			Time.timeScale = 0;
			Panel.gameObject.SetActive (true);
			header.text = "Time up!!!";
			PanelScore.text = "Score : "+score.ToString ();
			PanelFinishBonus.text="Finsih Bonus : 0";
			PanelTotalScore.text = "Total Score : " + score.ToString ();
			GoFoods.text = greenCount + " Go Foods";
			SlowFoods.text = orangeCount + " Slow Foods";
			WhoaFoods.text = redCount + " Whoa Foods";
		}
			if (Input.GetKey (KeyCode.LeftArrow)) {
				if(this.transform.position.x>-2.4f)
				this.transform.Translate (-Time.deltaTime*3, Time.deltaTime * carVel, 0, Space.World);
			} else if (Input.GetKey (KeyCode.RightArrow)) {
					if(this.transform.position.x<2.0f)
				this.transform.Translate (Time.deltaTime*3, Time.deltaTime * carVel, 0, Space.World);
			} else {
				this.transform.Translate (0, Time.deltaTime * carVel, 0, Space.World);
			}


		if (Input.GetKey (KeyCode.Escape)) {
			QuitPanel.gameObject.SetActive (true);
		}


	}

	/*void OnCollisionEnter2D(Collision2D col)
	{
		Debug.Log ("Collided");
		if (col.collider.gameObject.transform.parent.name == "Green") {
			carVel = 5;

		}
	}*/


	void OnTriggerEnter2D(Collider2D col){
		Debug.Log ("Collided");

		if (col.GetComponent<Collider2D> ().gameObject.transform.name == "Finish") {
			carVel = 0;
			Debug.Log ("GameFinish");

			Panel.gameObject.SetActive (true);
			header.text = "Level Complete!";
			PanelScore.text = "Score : "+score.ToString ();
			PanelFinishBonus.text="Finsih Bonus : 500";
			PanelTotalScore.text = "Total Score : " + (score+500).ToString ();
			GoFoods.text = greenCount + " Go Foods";
			SlowFoods.text = orangeCount + " Slow Foods";
			WhoaFoods.text = redCount + " Whoa Foods";
			currentTime = 9999;


		}else if (col.GetComponent<Collider2D>().gameObject.transform.parent.name == "Green") {
			carVel = 5;
			score += 400;
			greenCount++;
			ScoreText.text = score.ToString ();
			BlinkerText.gameObject.SetActive (true);
			//BlinkerText.color = Color.green;
			BlinkerText.text = "Go!!";

			StartCoroutine (WaitForBlink());
			Destroy (col.gameObject);
		}
		else if (col.GetComponent<Collider2D>().gameObject.transform.parent.name == "Orange") {
			carVel = 3;
			score += 200;
			orangeCount++;
			ScoreText.text = score.ToString ();
			BlinkerText.gameObject.SetActive (true);
			BlinkerText.text = "Slow!";
			//BlinkerText.color = Color.magenta;
			StartCoroutine (WaitForBlink());
			Destroy (col.gameObject);
		}
		else if (col.GetComponent<Collider2D>().gameObject.transform.parent.name == "Red") {
			carVel = 1;
			score += 100;
			redCount++;
			ScoreText.text = score.ToString ();
			BlinkerText.gameObject.SetActive (true);
			BlinkerText.text = "Whoa!!!";
			//BlinkerText.color = Color.red;
			StartCoroutine (WaitForBlink());
			Destroy (col.gameObject);
		}




	}

	public void StartClicked(){
		
		StartCoroutine (WaitForOneSecond());
	}

	public void MenuClicked(){
		Application.LoadLevel (0);
	}

	public void NextClicked(){
		Application.LoadLevel (Application.loadedLevel+1);
	}

	public void QuitClicked(){
		Application.Quit ();
	}

	IEnumerator WaitForOneSecond(){
		StartBtn.gameObject.SetActive (false);
		ReadyText.gameObject.SetActive (true);
		yield return new WaitForSeconds(1);
		ReadyText.gameObject.SetActive (false);
		Settext.gameObject.SetActive (true);
		yield return new WaitForSeconds (1);
		Settext.gameObject.SetActive (false);
		GoText.gameObject.SetActive (true);
		yield return new WaitForSeconds (1);
		GoText.gameObject.SetActive (false);
		Timer.gameObject.SetActive (true);
		currentTime =Mathf.CeilToInt(Time.time);

		carVel = 1;
		//canMove = true;
	}

	IEnumerator WaitForBlink(){
		yield return new WaitForSeconds(0.5f);
		BlinkerText.gameObject.SetActive (false);
	}
}
