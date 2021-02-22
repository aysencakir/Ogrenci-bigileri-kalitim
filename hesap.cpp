#include "hesap.h"
#pragma once

int hesap::gecmeDurumu(int vize, int final)
{
	if ((vize * 0.4) + (final * 0.6) < 49.5)
	{
		return 0;

	}
	else {
		return 1;
	}
}
