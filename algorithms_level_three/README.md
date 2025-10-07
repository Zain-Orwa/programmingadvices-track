# 🚀 Algorithms Level 3 – 65 Advanced Date & Algorithmic Problems in C++

Welcome to my **Level 3 Algorithm Challenge**, a collection of **65 advanced algorithmic and date/time problems** written in **C++ (C++11+)** — inspired by *Programming Advices* and extended through my own structured problem set.

---

## 🎯 Goal
Master complex algorithmic logic, **date computations**, and **real-world time handling**, while improving C++ problem-solving fluency.

This level focuses on:
- Struct-based data modeling (`sDate`, `stPeriod`)
- Enum-driven logic (Before, Equal, After)
- Increment/decrement systems for days, months, and years
- Period comparisons and overlap detection
- Modular, reusable, and readable algorithm design

---

## 🧱 Project Structure

## 📂 Project Structure

| Folder / File | Description |
|----------------|-------------|
| **README.md** | 📘 Main progress tracker (this file) |
| **/include** | 🧩 Header files and shared helpers |
| └── `date_utils.h` | Common reusable date utility functions *(planned)* |
| **/src** | 💻 C++ source code for all problems |
| ├── `problem_01.cpp` → `problem_19.cpp` | Core algorithmic problems *(Dynamic Programming, Arrays, etc.)* |
| ├── `problem_20.cpp` | Increase Date (Days, Weeks, Months, Years, etc.) |
| ├── `problem_21.cpp` | Decrease Date (Days, Weeks, Months, Years, etc.) |
| ├── `problem_22.cpp` | Leap Year & Month-Day Calculation |
| ├── `problem_23.cpp` | Compare Dates (Before, Equal, After) |
| ├── `problem_24.cpp` | Check if Date is Within Period |
| ├── `problem_25.cpp` | Difference Between Two Dates |
| ├── `problem_26.cpp` | Days Until End of Week/Month/Year |
| ├── `problem_27.cpp` | Business Day / Weekend Check |
| ├── `problem_28.cpp` | Calculate Age in Days |
| ├── `problem_29.cpp` | Swap Dates & Handle Differences |
| ├── `problem_30.cpp` | Inclusive vs Exclusive Date Difference |
| ├── `problem_31.cpp` | Add Days, Weeks, Months, or Years |
| ├── `problem_32.cpp` | Combined Increment Functions *(Educational)* |
| ├── `problem_33.cpp` → `problem_46.cpp` | All Date Decrease Functions *(Day, Week, Month, Year, etc.)* |
| ├── `problem_47.cpp` → `problem_53.cpp` | DayOfWeek, Weekend, Business & End-of-Month Calculations |
| ├── `problem_54.cpp` | Period Length in Days |
| ├── `problem_55.cpp` | Vacation Return Date (Skip Weekends) |
| ├── `problem_56.cpp` | Compare Dates Using Enum |
| ├── `problem_57.cpp` | Check if Date Within Period |
| ├── `problem_58.cpp` | Compare Dates (Simplified Version) |
| ├── `problem_59.cpp` | Period Length (Inclusive/Exclusive) |
| ├── `problem_60.cpp` | Date In Period (Enum-based) |
| ├── `problem_61.cpp` | Count Overlapping Days Between Two Periods |
| ├── `problem_62.cpp` | 🔧 Coming Soon |
| ├── `problem_63.cpp` | 📂 To be implemented in `/source` |
| ├── `problem_64.cpp` | 📂 To be implemented in `/source` |
| └── `problem_65.cpp` | 🧠 Final Comprehensive Date Engine |
| **/problems** | 📄 Problem descriptions (Markdown format) |
| └── `problem_01.md` → `problem_65.md` | Each problem’s statement & notes |


---

## 🧮 Problem Tracker (1–65)

| # | Problem Name | Description | Difficulty | Status |
|---|---------------|-------------|-------------|---------|
| 1 | **Maximum Subarray Sum** | Kadane’s algorithm | 🔺 Medium | ⏳ Pending |
| 2 | **Longest Increasing Subsequence** | Classic DP sequence | 🔺 Medium | ⏳ Pending |
| 3 | **Knapsack Problem (DP)** | Optimization via recursion + DP | 🔥 Hard | ⏳ Pending |
| 4 | **Coin Change (Minimum Coins)** | Recursive + DP implementation | 🔥 Hard | ⏳ Pending |
| 5 | **Edit Distance (String Alignment)** | DP-based Levenshtein distance | 🔥 Hard | ⏳ Pending |
| 6 | **Matrix Chain Multiplication** | Parenthesization optimization | 🔥 Hard | ⏳ Pending |
| 7 | **Longest Common Subsequence** | Compare subsequences | 🔺 Medium | ⏳ Pending |
| 8 | **Optimal Binary Search Tree** | Dynamic programming tree cost | 🔥 Hard | ⏳ Pending |
| 9 | **Traveling Salesman Problem (TSP)** | DP with bitmask optimization | 🔥 Hard | ⏳ Pending |
| 10 | **Subset Sum Problem** | Recursive + DP version | 🔺 Medium | ⏳ Pending |
| 11 | **Partition Equal Subset Sum** | Subset sum validation | 🔺 Medium | ⏳ Pending |
| 12 | **Word Break Problem** | String segmentation | 🔺 Medium | ⏳ Pending |
| 13 | **Regular Expression Matching** | Custom DFA | 🔥 Hard | ⏳ Pending |
| 14 | **Wildcard Pattern Matching** | DP & recursion hybrid | 🔥 Hard | ⏳ Pending |
| 15 | **Minimum Path Sum in Grid** | Grid traversal optimization | 🔺 Medium | ⏳ Pending |
| 16 | **Unique Paths in Grid** | DP combinatorics | 🔺 Medium | ⏳ Pending |
| 17 | **Dungeon Game (Reverse DP)** | Backward state DP | 🔥 Hard | ⏳ Pending |
| 18 | **Best Time to Buy and Sell Stock** | Max profit window | 🔺 Medium | ⏳ Pending |
| 19 | **Burst Balloons** | Divide & conquer with DP | 🔥 Hard | ⏳ Pending |
| 20 | **Increase Date by Days, Weeks, Months, Years** | Core date increment utilities | 🔺 Medium | ✅ |
| 21 | **Decrease Date by Days, Weeks, Months, Years** | Reverse operations for date subtraction | 🔺 Medium | ✅ |
| 22 | **Leap Year & Number of Days in Month** | Calendar validation | 🔹 Easy | ✅ |
| 23 | **Compare Two Dates** | Determine if Before, Equal, or After | 🔹 Easy | ✅ |
| 24 | **Check if Date Within Period** | Inclusive range validation | 🔹 Easy | ✅ |
| 25 | **Get Difference in Days Between Two Dates** | Count total days difference | 🔺 Medium | ✅ |
| 26 | **Days Until End of Week/Month/Year** | Remaining days till period end | 🔺 Medium | ✅ |
| 27 | **Check Business Day / Weekend** | Determine weekday or weekend | 🔹 Easy | ✅ |
| 28 | **Calculate Age in Days** | Total days from birthdate to now | 🔺 Medium | ✅ |
| 29 | **Swap Dates & Handle Differences** | Swap and compute difference | 🔹 Easy | ✅ |
| 30 | **Days Between Dates (Inclusive/Exclusive)** | With optional end day inclusion | 🔺 Medium | ✅ |
| 31 | **Add Days/Weeks/Months/Years (Combined)** | Educational combined utilities | 🔸 Teaching | ✅ |
| 32 | **Full Date Increase Toolkit** | Combine increment functions (not optimized) | 🔸 Teaching | ✅ |
| 33 | **DecreaseDateByOneDay** | Decrement one day with rollover | 🔹 Easy | ✅ |
| 34 | **DecreaseDateByXDays** | Decrement N days | 🔹 Easy | ✅ |
| 35 | **DecreaseDateByOneWeek** | Decrement 7 days | 🔹 Easy | ✅ |
| 36 | **DecreaseDateByXWeeks** | Decrement N weeks | 🔹 Easy | ✅ |
| 37 | **DecreaseDateByOneMonth** | Handle month rollover | 🔺 Medium | ✅ |
| 38 | **DecreaseDateByXMonths** | Decrement multiple months | 🔺 Medium | ✅ |
| 39 | **DecreaseDateByOneYear** | Year decrement | 🔹 Easy | ✅ |
| 40 | **DecreaseDateByXYears** | Multi-year decrement | 🔹 Easy | ✅ |
| 41 | **DecreaseDateByXYears (Faster)** | Direct arithmetic approach | 🔹 Easy | ✅ |
| 42 | **DecreaseDateByOneDecade** | -10 years | 🔹 Easy | ✅ |
| 43 | **DecreaseDateByXDecades** | -10×N years | 🔹 Easy | ✅ |
| 44 | **DecreaseDateByXDecades (Faster)** | Direct formula method | 🔹 Easy | ✅ |
| 45 | **DecreaseDateByOneCentury** | -100 years | 🔹 Easy | ✅ |
| 46 | **DecreaseDateByOneMillennium** | -1000 years | 🔹 Easy | ✅ |
| 47 | **DayOfWeek Calculations** | Determine weekday name | 🔺 Medium | ✅ |
| 48 | **Days Until End of Week/Month/Year** | Remaining days logic | 🔺 Medium | ✅ |
| 49 | **Weekend & Business Day Checks** | Detect weekends and business days | 🔹 Easy | ✅ |
| 50 | **Vacation Days Calculator** | Skip weekends during vacation | 🔺 Medium | ✅ |
| 51 | **Compare Dates (Equal/Before/After)** | Simple comparison function | 🔹 Easy | ✅ |
| 52 | **Enum Comparison System (CompareDates)** | Enum-based return logic | 🔹 Easy | ✅ |
| 53 | **Check if Two Periods Overlap** | Detect overlap between date ranges | 🔺 Medium | ✅ |
| 54 | **Period Length in Days** | Days between StartDate and EndDate | 🔺 Medium | ✅ |
| 55 | **Vacation Return Date (Skip Weekends)** | Return date excluding weekends | 🔺 Medium | ✅ |
| 56 | **Compare Dates Using Enum** | Returns Before / Equal / After | 🔹 Easy | ✅ |
| 57 | **Check if Date is Within Period** | Inclusive check (Start ≤ Date ≤ End) | 🔹 Easy | ✅ |
| 58 | **Compare Two Dates (Simplified)** | Check if Date1 is after Date2 | 🔹 Easy | ✅ |
| 59 | **Calculate Period Length (Inclusive/Exclusive)** | Count days in period | 🔺 Medium | ✅ |
| 60 | **Date in Period (Enum-based)** | Uses CompareDate() logic | 🔹 Easy | ✅ |
| 61 | **Count Overlapping Days Between Two Periods** | Count overlap between two ranges | 🔺 Medium | ✅ |
| 62 | **Advanced Period Merge (Coming Soon)** | Merge overlapping date ranges | 🔥 Hard | ⏳ Planned |
| 63 | **Full Calendar Utility Integration** | Inside `/source` folder | 🔧 Integration | ⏳ Planned |
| 64 | **Automated Test System for All Date Utilities** | Source-based testing | 🔧 Integration | ⏳ Planned |
| 65 | **Final Comprehensive Date Engine** | All utilities combined (interactive) | 🧠 Final | ⏳ Planned |

---

## 🧩 Notes

🧠 **Grouping Summary:**
- Problems **1–19** → General Algorithms (DP, recursion, combinatorics)
- Problems **20–32** → Date Increment Systems
- Problems **33–46** → Date Decrement Systems
- Problems **47–53** → Week, Month, Year Calculations
- Problems **54–61** → Period Logic & Comparisons
- Problems **62–65** → Integration & Automation (Final Section)

---

## 🧰 Next Steps

- [ ] Upload Problems **1–19** to repository  
- [ ] Complete Problems **62–65**  
- [ ] Modularize logic into `date_utils.h`  
- [ ] Add unit tests (`tests/` folder planned)  
- [ ] Optimize all increment/decrement operations  

---

## 👨‍💻 Author

**Zain Orwa**  
📍 Austria 🇦🇹  
💻 C++ | Algorithms | System Design  
📚 Currently solving 65 advanced problems in structured order  
🔗 GitHub: [Zain-Orwa](https://github.com/Zain-Orwa)

---

⭐ *Progress so far: 61 / 65 problems completed and documented!*

