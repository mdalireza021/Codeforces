 By Reza_Rahman, contest: Codeforces Round #806 (Div. 4), problem: (B) ICPC Balloons, Accepted, #, Copy

    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      char ch='A';
      map<char,bool> mp;
      for(char ch='A';ch!='Z'+1;ch++)
        {
          mp[ch]=true; 
        }
     
      int t;
      cin>>t;
      while(t--)
        {
          int n;
          cin>>n;
          string s;
          cin>>s;
     
          int count=0;
          for(int i=0;i<s.size();i++)
            {
              if(mp[s[i]])
              {
                count+=2;
                mp[s[i]]=false;
              }
              else
              {
                count++;
              }
            }
          cout<<count<<endl;
          for(char ch='A';ch!='Z'+1;ch++)
          {
          mp[ch]=true; 
          }
        }
        return 0;
    }

→Judgement Protocol
Test: #1, time: 0 ms., memory: 136 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

6

3

ABA

1

A

3

ORZ

5

BAAAA

4

BKPT

10

CODEFORCES

Output

5

2

6

7

8

17

Answer

5

2

6

7

8

17

Checker Log

ok 6 numbers

Test: #2, time: 0 ms., memory: 136 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

100

2

XX

4

AAAA

2

SS

8

BBBBBBBB

1

N

6

XXXXXX

6

DCXZXX

1

H

8

MVILLLVV

2

NN

2

FF

7

EEUEBBE

6

IMIIBX

7

EBNMBWW

4

YGGY

2

II

1

Y

7

FPPFYYF

5

VVVVO

5

ULLMU

1

Y

3

HHH

7

PPTTTTP

3

PPP

6

PPHPPH

5

TBQXT

5

NNNNN

4

CCEC

3

DMK

6

HLHLLS

2

SE

3

VMM

1

M

1

P

5

XXXXX

7

HHNHHNN

6

QQQQPQ

6

OOOOUA

5

VVVVV

4

QXXQ

7

BBWDODW

5

HUUUU

4

NFXN

8

BDWBBTCZ

1

Y

6

FFFFFF

4

YSBL

1

C

3

AAA

4

NNHN

6

UFLUFU

7

QQOOQOY

6

FPOOOU

8

EEKCOKG...

Output

3

5

3

9

2

7

10

2

12

3

3

10

10

12

6

3

2

10

7

8

2

4

9

4

8

9

6

6

6

9

4

5

2

2

6

9

8

9

6

6

11

7

7

14

2

7

8

2

4

6

9

10

10

13

8

13

10

6

5

4

3

5

4

9

8

10

12

9

12

9

12

4

2

2

10

3

2

6

3

5

2

8

8

8

6

2

9

7

8

9

11

6

9

8

14

10

10

11

7

2

Answer

3

5

3

9

2

7

10

2

12

3

3

10

10

12

6

3

2

10

7

8

2

4

9

4

8

9

6

6

6

9

4

5

2

2

6

9

8

9

6

6

11

7

7

14

2

7

8

2

4

6

9

10

10

13

8

13

10

6

5

4

3

5

4

9

8

10

12

9

12

9

12

4

2

2

10

3

2

6

3

5

2

8

8

8

6

2

9

7

8

9

11

6

9

8

14

10

10

11

7

2

Checker Log

ok 100 numbers

Test: #3, time: 15 ms., memory: 136 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

100

50

XKTXAULXYKWHHBTNXWZVASVYMHPLXHAJVHOUGLSNSKKWNVPNPK

50

MLLIMIHMIPJAFKFKJHWJMIHAHIMWKWIHMATPTKWKIAJKWFWKLH

50

WOCWEOFKXGNFXMEZNBBGNGKOWFEOGKGXFMGNEKOZOWMGWGNFZO

50

KTDGDNKDJCQNNRGYXNBOXTFYTQQGTXGNGJRBRAJIKBYEJOREFZ

50

VTIBHYIYHQBYIHYHYHVISIYFTSYTVFITTITYSYBTQVFSVTHTTI

50

VUDGDZUHTPXVUBCODXXCMHYGNIGRJCQPTZDIFZLQWMVSIRHOKS

50

DQOQQOODQODQDOQDQQQQQQOQDQDDQQQQQOQOQOODDQDDOQDDOO

50

HFIRKKPRTBMRDIGRDTFWKDKMBAMTKAROOISXFVOOPTSOQRBQLI

50

YJJSJJEUZJELUEEJSLEYSYYSJKZJKSKJJSSLJUZEKSEYUZZEKZ

50...

Output

69

61

62

68

59

74

53

69

58

55

70

66

62

69

61

61

64

59

66

55

66

72

71

72

68

69

69

72

61

56

67

62

69

56

70

71

72

58

65

70

55

63

73

66

57

69

61

56

72

69

73

60

66

53

73

69

61

61

70

68

64

56

60

57

65

66

62

65

56

68

53

68

62

58

68

66

51

56

62

75

51

70

66

68

56

51

62

62

73

63

63

62

72

63

55

73

68

69

57

76

Answer

69

61

62

68

59

74

53

69

58

55

70

66

62

69

61

61

64

59

66

55

66

72

71

72

68

69

69

72

61

56

67

62

69

56

70

71

72

58

65

70

55

63

73

66

57

69

61

56

72

69

73

60

66

53

73

69

61

61

70

68

64

56

60

57

65

66

62

65

56

68

53

68

62

58

68

66

51

56

62

75

51

70

66

68

56

51

62

62

73

63

63

62

72

63

55

73

68

69

57

76

Checker Log

ok 100 numbers

Test: #4, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

4

HACK

Output

8

Answer

8

Checker Log

ok 1 number(s): "8"

