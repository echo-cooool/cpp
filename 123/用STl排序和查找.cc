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
#include <algorithm>
using namespace std;
int main()
{
      int a[100],n=0;
	    cin >> n;
	    for(int i ;i < n;++i)
	    cin >> a[i];
      sort(a,a+n);
      for(int i ;i < n;++i)
	    cout << a[i]<<" ";
      if (binary_search(a,a+n,38))
	    cout <<"yes";
      else
	    cout <<"no";
	    
	    
	    
}

