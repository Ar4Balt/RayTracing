#pragma once

/*Канонические уравнения второго порядка*/

float R = 0.5;

bool circle(float x, float y, float radius = R)
{
	if (x * x + y * y < radius) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool hyperbola(float x, float y, float radius = R)		//Смотреть только на контуры фигуры
{
	if (x * x - y * y < radius)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool parall_lines(float x, float y, float radius = R)		//Смотреть только на контуры фигуры
{
	if (y * y - radius * radius < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool intersecting_lines(float x, float y, float radius = R)		//Смотреть только на контуры фигуры
{
	if (x * x / radius - y * y / radius < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
