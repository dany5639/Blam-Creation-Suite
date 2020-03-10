#pragma once

struct nicename("rumble") group('rmbl') s_rumble_definition
{
	// Vibration : 
	float nicename("Low Frequency Vibration Duration") low_frequency_vibration_duration;
	DataReference nicename("Low Frequency Vibration Function") low_frequency_vibration_function_data_reference;
	float nicename("High Frequency Vibration Duration") high_frequency_vibration_duration;
	DataReference nicename("High Frequency Vibration Function") high_frequency_vibration_function_data_reference;
};
