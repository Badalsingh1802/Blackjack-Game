🎮 Blackjack (21 Game) – Explained Simply

 ✅ Objective:

* Tumhara aur computer (dealer) ka goal hai **cards ka total value 21 ke kareeb rakhna**, bina usse zyada kiye.
* Jiska total **21 ke sabse close** hota hai (but not more than 21), wo **jeet ta hai**.
* Agar total **21 se zyada ho jaaye**, to wo **"bust"** ho jaata hai (haar jaata hai).

🃏 **Basic Rules to Implement:**

 1. **Cards Value:**

* Number cards (2–10): same value.
* Face cards (J, Q, K): 10 points.
* Ace (A): 1 ya 11 points (hum is project mein 11 fix rakhte hain for simplicity).

 2. **Gameplay Flow:**

 Step-by-step:

1. **Game Start** → User aur Computer ko 2–2 cards milte hain.
2. Show **user’s cards**, but computer ke sirf 1 card dikhayein.
3. User ka turn:

   * User decides: `Hit` (ek aur card lo) ya `Stand` (ruk jao).
   * Agar user ka total > 21 → Bust → Computer wins.
4. Computer ka turn:

   * Jab tak total < 17 hota hai, wo **Hit** karega.
5. Dono ke totals compare karo:

   * Jo 21 ke closest hai (without busting), wo jeet-ta hai.

 
 🧠 **Concepts You Will Use in C:**

* Arrays (cards store karne ke liye)
* Random number generation (`rand()`)
* Loops (for gameplay)
* Conditionals (`if-else`)
* Functions (clean code ke liye)

---

 new Feature 
* Scoring system (multiple rounds)
* Betting system (user ke paas 100 coins, har game mein bet kare)
* Ace ka dual value (1 ya 11, advanced logic)

---

 ⚙️ Example Output (Console):

Welcome to Blackjack!

Your cards: 10, 7  (Total: 17)
Dealer's shown card: 6

Do you want to Hit or Stand? h
You drew a 5. Your total is now 22.
You busted! Dealer wins.
 

 
