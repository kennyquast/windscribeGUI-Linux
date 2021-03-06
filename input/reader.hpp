#ifndef READER_HPP
#define READER_HPP

#include <iostream>
#include <stdlib.h>
#include <cstring>

#include "pstream.h"
#include <sstream>

/**
 * Reads and returns the output of the given shell command
 *
 * Parameters
 * ----------
 *
 * command
 *      The string command to enter in the shell.
 *
 * Return value
 * --------------
 *
 * Returns all lines on stdout.
 *
 * Example
 * -------
 *
 *      cout << read_output_from_command("echo hi"));
 *
 * output:
 * hi
 */
std::string read_output_from_command(std::string command);

/**
 * Reads and returns the output of 'windscribe status' in shell
 *
 * Parameters
 * ----------
 *
 * None
 *
 * Return value
 * --------------
 *
 * Returns the stdout of 'windscribe status' in shell
 *
 * Example
 * -------
 *
 *      cout << read_windscribe_status();
 *
 * output:
 * windscribe -- pid: 1414, status: running, uptime: 8h 56m, %cpu: 0.0, %mem: 0.4
 * IP: w.x.y.z
 * CONNECTED -- AServer UDP (443)
 *
 */
std::string read_windscribe_status();

/**
 * Reads and returns the output of 'windscribe account' in shell
 *
 * Parameters
 * ----------
 *
 * None
 *
 * Return value
 * --------------
 *
 * Returns the stdout of 'windscribe account' in shell
 *
 * Example
 * -------
 *
 *      cout << read_account_details();
 *
 * output:
 *  ------- My Account -------
 * Username: YourName
 * Data Usage: 1.00 GB / 10 GB
 * Plan: 10 GB Free
 *
 */
std::string read_account_details();

/**
 * Reads and returns the output of 'windscribe locations' in shell
 *
 * Parameters
 * ----------
 *
 * None
 *
 * Return value
 * --------------
 *
 * Returns the stdout of 'windscribe locations' in shell
 *
 * Example
 * -------
 *
 *      cout << read_locations();
 *
 * output:
 * Location        Short Name         City Name               Label      Pro
 * US Central      US-C                 Atlanta            Mountain
 * US Central      US-C                  Dallas               Ranch
 * US East         US                   Chicago                 Cub
 * US East         US                     Miami                Snow
 * US East         US                     Miami                Vice
 * ...
 *
 */
std::string read_locations();

/**
 * Reads and returns the output of 'windscribe firewall' in shell
 *
 * Parameters
 * ----------
 *
 * None
 *
 * Return value
 * --------------
 *
 * Returns the stdout of 'windscribe firewall' in shell
 *
 * Example
 * -------
 *
 *      cout << read_firewall();
 *
 * output:
 * Usage: windscribe firewall <mode>
 *
 * Firewall mode: auto
 *
 * Available modes:
 * auto (on when connected, off when disconnected)
 * on (always on)
 * off (always off)
 *
 */
std::string read_firewall();

#endif
