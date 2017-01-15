/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 6; tab-width: 8 -*-  */
/*
 * main.cc
 * Copyright (C) 2017 WangYuyang <wangyuyang@wangyuyang-TM1612>
 * 
 * foobar-cpp is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * foobar-cpp is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <stdio.h>
using namespace std;
int f=0,s=0,t=0;
int main()

{
      int n=0;
      cin >> n ;
      int a[4][20];
      //cin >> n;
      for(int m= 0;m<3;m++)
      {
      for (int i=0 ; i<n;++i)
	    cin >> a[i][m];

      }
      
      for(int i =0 ;i<n;i++)
      {
	    f=f+a[i][0];
      }
       for(int i =0 ;i<n;i++)
      {
	    s=s+a[i][1];
      }
       for(int i =0 ;i<n;i++)
      {
	    t=t+a[i][2];
      }

      int sum = s+f+t;
      printf("%d %d %d %d",f,s,t,sum);
      
}

