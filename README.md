# URL Parser

A Uniform Resource Locator (URL) is the standard way of representing content on the internet. Actually URLs are used for describing the location of many kinds of resources. URLs are strings composed of several different components:

- The __scheme__ which is a sequence of characters followed by a `:` symbol.
- The __authority__ which begins with a `//` and contains all the character up to but not including another `/` character
- The __path__ which begins with a `/` character and contains everything else in the URL

_Note: This is a simplification, URLs are a bit more intricate than this. You can see the full specification at [rfc3986](https://tools.ietf.org/html/rfc3986)._

For example, the URL `https://example.com/` would be broken down as:

```txt
scheme = https:
authority = //example.com
path = /
```

Likewise `https://www.highline.edu/about-us/` would be broken down as:

```txt
scheme = https:
authority = //www.highline.edu
path = /about-us/
```

## Project Requirements

For this assignment you will familiarize yourself with using the functions built into the standard library for working with `std::string` objects and use them to break down URLs into their component parts.

You will write a program that asks the user to input a URL as a `std::string` object, and then prints out the component parts to the console similar to the examples above.

You may assume that when I am testing your code, I will only use well-formed URLs which have all three components present. For instance I will not test `http://example.com` because it is missing the _path_ component. I would also not test `http:///hello`, or `//c/ProgramData/Information` as these are likewise missing the _authority_ and _scheme_ respectively.

Part of this project involves using the internet to look up which functions are available to you and how you might use them. A good place to start is [CPPReference: std::basic_string](https://en.cppreference.com/w/cpp/string/basic_string).

__example output:__

```txt
Please enter a URL: https://example.com/some/path/to/file.txt
scheme = https:
authority = //example.com
path = /some/path/to/file.txt
```