/*******************************************************************************
 * Copyright (C) 2011 Sean Voisen <http://sean.voisen.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/

#include "Melody.h"

uint16_t TONE_UP_NOTES[] = {NOTE_A4, NOTE_CS5, NOTE_E5};
uint16_t TONE_UP_DURATIONS[] = {DUR_QT, DUR_QT, DUR_QT};
Melody TONE_UP_MELODY = Melody(TONE_UP_NOTES, TONE_UP_DURATIONS, 3);

uint16_t TONE_UP2_NOTES[] = {NOTE_A5, NOTE_CS6, NOTE_E6};
uint16_t TONE_UP2_DURATIONS[] = {DUR_QT, DUR_QT, DUR_QT};
Melody TONE_UP2_MELODY = Melody(TONE_UP2_NOTES, TONE_UP2_DURATIONS, 3);

