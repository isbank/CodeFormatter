<p align="center">     
  <a href="https://github.com/sebetci/CodeFormatter/issues">
    <img src="https://img.shields.io/github/issues/sebetci/CodeFormatter.svg?style=flat" alt="GitHub Issues">
  </a>   
  
  <a href="https://github.com/sebetci/sebetci.github.io/releases">
    <img src="https://img.shields.io/github/release/sebetci/CodeFormatter.svg" alt="GitHub release">
  </a>
  
  <a href="https://github.com/sebetci/sebetci.github.io/blob/master/LICENSE">
    <img src="https://img.shields.io/badge/license-MIT-blue.svg?style=flat" alt="MIT License">
  </a>
</p>

<div class="header">
    <h3 style="color:back;" align="center">Code Formatter for Eclipse CDT IDE</h3>
</div>

This repository contains a code formatter organized for use in C/C++ projects on the Eclipse CDT IDE. This particular formatter was forked from the [GNU formatter](https://www.gnu.org/prep/standards/html_node/Formatting.html). TAB key causes indentation issue when uploading C/C++ projects developed on Eclipse CDT IDE to GitHub. When the source code, which looks normal on Eclipse CDT IDE locally, is uploaded to GitHub, it is seen that TAB keys cause shifting. If you use this formatter, press TAB and the editor will replace TAB with 4 spaces; this behavior will prevent shifts caused by the TAB key when the source code is uploaded to GitHub.

<div class="header">
    <h3 style="color:back;" align="center">Using The Code Formatter</h3>
</div>

After cloning this repository you need to include the **CodeFormatter.xml** file in the project in Eclipse CDT IDE. After selecting the project on the **Project Explorer** window, open the **Properties** window by using the <kbd>ALT</kbd> + <kbd>ENTER</kbd> shortcut. From the **Properties** window, go to **C/C++ General** > **Formatter** tab and click the **Import...** button to include the **CustomFormatter.xml** file in the project. Use the <kbd>CTRL</kbd> + <kbd>SHIFT</kbd> + <kbd>F</kbd> shortcut on the Eclipse CDT IDE to apply the formatter to the source code.
