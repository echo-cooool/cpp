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

#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
//int a[100000],n,i,y,xy[100000];

int main()
{
	int a[1000];
      int n;
      cin >> n;
      for (int i = 0;i<n;++i)
      
	    cin  >> a[i];
         for (int i =0;i<n-1;++i)
         {  
	    int tmpmin = i;
	       for (int j=i+1;j<n;++j)
	       {
		     if (a[j]<a[tmpmin])
			   tmpmin = j;
	       }
	    int tmp =a[i];
	       a[i]=a[tmpmin];
	       a[tmpmin]=tmp;
	 }
      for (int i=0;i<n;i++)
           cout << a[i]<<" ";
      
      
}
      