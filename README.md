#Time ADT in C++

**Overview**

This project implements a Time Abstract Data Type (ADT) in C++. The Time ADT encapsulates time-related operations and data, such as hours, minutes, and seconds, offering a simple interface for managing and manipulating time values. It provides basic functionality like setting time, displaying time in various formats, and performing time arithmetic (addition and subtraction).

**Features**

  Time Representation: Encapsulates hours, minutes, and seconds as private data members.

  Set and Get Functions: Allows setting and retrieving time values (hours, minutes, and seconds).

  Display Formats: Displays time in either 24-hour or 12-hour (AM/PM) format.

  Arithmetic Operations: Supports adding and subtracting time values.

  Validation: Ensures that time values are valid (e.g., 24-hour format validation).

**Key Functions**

  setTime(int hours, int minutes, int seconds): Sets the time.

  displayTime24(): Displays time in 24-hour format.

  displayTime12(): Displays time in 12-hour format (AM/PM).

  addTime(Time other): Adds two time objects.

  subtractTime(Time other): Subtracts one time object from another.
