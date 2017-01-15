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
#include<stdio.h>
int main() {
int a[3]={0};
scanf("%d%d%d",&a[0],&a[1],&a[2]);
printf ("%8d %8d %8d",a[0],a[1],a[2]);
return 0;
}