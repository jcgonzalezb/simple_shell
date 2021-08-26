<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/othneildrew/Best-README-Template">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">Best-README-Template</h3>

  <p align="center">
    An awesome README template to jumpstart your projects!
    <br />
    <a href="https://github.com/othneildrew/Best-README-Template"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/othneildrew/Best-README-Template">View Demo</a>
    ·
    <a href="https://github.com/othneildrew/Best-README-Template/issues">Report Bug</a>
    ·
    <a href="https://github.com/othneildrew/Best-README-Template/issues">Request Feature</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">Description of the shell project</a>
      <ul>
        <li><a href="#built-with">Requirements</a></li>
      <!-- <ul> -->
        <li><a href="#prerequisites">Prerequisites</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">The interactive mode</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Authors</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## Description of the shell project

[![Product Name Screen Shot][product-screenshot]](https://pbs.twimg.com/media/E9vMnVxWQAErBRB?format=png&name=medium)

The objective of this project is to create from scratch a simple UNIX command interpreter with limited functionality but applying the core concepts of a more robust shell. In simple words, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. It incorporates many features and generally executes other commands.

    How does a shell work.
    What is a PID and a ppid, and how to use them.
    How to manipulate the environment of the current process.
    What is the difference between a function and a system call.
    How to create processes.
    How does the shell use the PATH to find the programs.
    How to execute another program with the execve system call.
    How to suspend the execution of a process until one of its children terminates

### Requirements

A Unix computer operating system

<!-- GETTING STARTED -->
## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites

Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.
* visit link for more information
  ```sh
   https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04
  ```

1. Clone the repo
   ```sh
    git clone https://github.com/jcgonzalezb/simple_shell.git
   ```
2. Compilation
   ```sh
    gcc -Wall -pedantic -Werror Wextra *.c -o hsh
   ```



<!-- USAGE EXAMPLES -->
## Usage

The command interpreter can be use in two ways.

### The interactive mode :

Execute normaly and it would be show to prompt, feel free to enter your comand.

   ```sh
      ./hsh
   ```
  [(https://pbs.twimg.com/media/E9vA4R_X0AE2xQ6?format=png&name=medium)]

and always can quit safe, with comand exit or pushin in the keyboard crtl+d.

(https://pbs.twimg.com/media/E9vCAYOWYAYYo5Z?format=png&name=900x900)

### Non interactive-mode

You can pass the argument with echo option

   ```sh
    echo "ls" | ./hsh
   ```

(https://pbs.twimg.com/media/E9vClwrXsAA4DmC?format=png&name=medium)




<!-- CONTRIBUTING -->
## Contributing

Create a new branch with the name of your feature or fix and make a pull request to develop branch explaining your work.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request




<!-- CONTACT -->
## Contact
Juan Camilo Gonzalez - [@Juankter](https://twitter.com/Juankter) - jcgonzalezb@gmail.com

Pablo Osorio - [@Pabllitoosorio](https://twitter.com/Pabllitoosorio) - 3387@holbertonschool.com

Project Link: (https://github.com/jcgonzalezb/simple_shell)



<!-- ACKNOWLEDGEMENTS -->
## AUTHORS

Juan Camilo Gonzales

Pablo Garcia Osorio




<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png

