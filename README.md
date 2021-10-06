# Codefoxie-coding-challenge

->> PROBLEM STATEMENT:

## The Brewery - Transport Refrigeration Sensors

Meet Baz. He works at The Brewery, a boutique micro brewery based in rural NSW, creators of 6
unique beer varieties. Baz is responsible for driving the large transport truck, each Thursday
delivering goods from the brewery to a range of pubs across metropolitan Sydney.

Each beer has its own specific refrigeration needs whilst being transported:

	Beer 1 -> 4°C - 6°C
	Beer 2 -> 5°C - 6°C
	Beer 3 -> 4°C - 7°C
	Beer 4 -> 6°C - 8°C
	Beer 5 -> 3°C - 5°C
	
The refrigerated truck is loaded with multiple containers, each set to a specific temperature and
each containing a thermometer sensor.
While driving, Baz is alerted if any of the containers fall outside of the temperature range.
Unfortunately this is common due to factors such as when unloading the truck, the heat of
Sydney summer or sometimes due to human error in leaving the container doors ajar.

Instructions
------------
Develop a solution that shows Baz the current temperature of each container and notifies him
when the temperatures are out of the correct range.
1. You can choose the coding language you feel best meets the user needs
2. Don't gold plate the solution. Make best use of the time available to you to deliver the
most valuable solution
3. If you have any questions contact us or make your own assumptions and document them
with the solution
4. The solution is not required to use a database server, if needed mock the data you will
need internally in any of the application layers
5. The solution must be implemented with an acceptable level of automated tests
6. We prefer that you have this on a Git repository; Github, Gitlab or Bitbucket. If you can’t
then send us a zip file with your code or a link where we can download the package from
7. Make sure your package contains a readme file with any relevant information necessary
to run your project, including:

        a. What are the highlights of your logic/code writing style?
	
	b. What could have been done in a better way?
	
	c. Any other notes you feel relevant for the evaluation of your solution


## My Assumptions:

1. All the beers of a single type are kept in same container, i.e. number of containers is equal to number of types of beers.
2. We are aware about the time taken for journey beforehand.
3. The temperature sensors are able to provide us with current temperature readings at constant interval of time, shorter the interval, better the accuracy of result.



## Sample Input:

	6
        4 5 7 8 5 4
        5 4 7 4 5 4
        9 7 4 2 4 6
        4 5 7 8 5 2
        4 8 6 6 3 5


## Sample Output:

Enter the duration of journey(in seconds) from start to end: 6

Truck on it's way.


-->> At second 1:

Enter the present reading of each temperature sensor of the containers(in form of array, separated by space): 4 5 7 8 5 4
        All Beers are safe till now.

-->> At second 2:

Enter the present reading of each temperature sensor of the containers(in form of array, separated by space): 5 4 7 4 5 4
        Following containers have lower temperature than their minimum acceptable values:
                1. Container number 2
                2. Container number 4

        No container has higher temperature than the maximum temperature required by respective containers.

-->> At second 3:

Enter the present reading of each temperature sensor of the containers(in form of array, separated by space): 9 7 4 2 4 6
        Following containers have lower temperature than their minimum acceptable values:
                1. Container number 4

        Following containers have higher temperature than their maximum acceptable values:
                1. Container number 1
                2. Container number 2
                3. Container number 6

-->> At second 4:

Enter the present reading of each temperature sensor of the containers(in form of array, separated by space): 4 5 7 8 5 2
        All Beers are safe till now.

-->> At second 5:

Enter the present reading of each temperature sensor of the containers(in form of array, separated by space): 4 8 6 6 3 5
        No container has lower temperature than the minimum temperature of respective containers.

        Following containers have higher temperature than their maximum acceptable values:
                1. Container number 2
                2. Container number 6

Truck reached Destination:
