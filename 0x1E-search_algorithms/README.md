<h1 style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 36px;">0x1E. C - Search Algorithms</h1>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(219, 62, 62);font-size: 14px;">C</span></strong><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(219, 62, 62);font-size: 14px;">Algorithm</span></strong></div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <ul style="font-size: 11px;">
        <li style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">By: Wilfried Hennuyer</li>
        <li style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">Weight: 1</li>
        <li style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">Project will start <span title=""><span style="border-bottom: 0.5px dashed currentcolor;">Mar 11, 2024 6:00 AM</span></span>, must end by <span title=""><span style="border-bottom: 0.5px dashed currentcolor;">Mar 14, 2024 6:00 AM</span></span></li>
        <li style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">Checker was released at <span title=""><span style="border-bottom: 0.5px dashed currentcolor;">Mar 12, 2024 12:00 AM</span></span></li>
        <li style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">An auto review will be launched at the deadline</li>
    </ul>
</div>
<div style="text-align: start;color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);font-size: 14px;border: 1px solid rgb(221, 221, 221);">
    <div>
        <h2 style="color: inherit;font-size: 30px;">Resources</h2>
        <p><strong><strong>Read or watch</strong></strong>:</p>
        <ul>
            <li><a href="https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw" title="Search algorithm" target="_blank" style="color: transparent;">Search algorithm</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g" title="Space complexity (1)" target="_blank" style="color: transparent;">Space complexity (1)</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/_4-JUPlg6lfKZO2YPHCA7g" title="Serach Algorithms video playlist" target="_blank" style="color: transparent;">Serach Algorithms video playlist</a></li>
        </ul>
        <h2 style="color: inherit;font-size: 30px;">Learning Objectives</h2>
        <p>At the end of this project, you are expected to be able to <a href="https://intranet.alxswe.com/rltoken/i0Ru9NIvGBHVAlsg7w5vVg" title="explain to anyone" target="_blank" style="color: transparent;">explain to anyone</a>, <strong><strong>without the help of Google</strong></strong>:</p>
        <h3 style="color: inherit;font-size: 24px;">General</h3>
        <ul>
            <li>What is a search algorithm</li>
            <li>What is a linear search</li>
            <li>What is a binary search</li>
            <li>What is the best search algorithm to use depending on your needs</li>
        </ul>
        <h3 style="color: inherit;font-size: 24px;">Copyright - Plagiarism</h3>
        <ul>
            <li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
            <li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work.</li>
            <li>You are not allowed to publish any content of this project.</li>
            <li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
        </ul>
        <h2 style="color: inherit;font-size: 30px;">Requirements</h2>
        <h3 style="color: inherit;font-size: 24px;">General</h3>
        <ul>
            <li>Allowed editors: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">vi</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">vim</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">emacs</code></li>
            <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
            <li>All your files should end with a new line</li>
            <li>A <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">README.md</code> file, at the root of the folder of the project, is mandatory</li>
            <li>Your code should use the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank" style="color: transparent;">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank" style="color: transparent;">betty-doc.pl</a></li>
            <li>You are not allowed to use global variables</li>
            <li>No more than 5 functions per file</li>
            <li>You are only allowed to use the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">printf</code> function of the standard library. Any call to another function like <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">strdup</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">malloc</code>, &hellip; is forbidden.</li>
            <li>In the following examples, the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main.c</code> files at compilation. Our <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main.c</code> files might be different from the one shown in the examples</li>
            <li>The prototypes of all your functions should be included in your header file called <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">search_algos.h</code></li>
            <li>Don&rsquo;t forget to push your header file</li>
            <li>All your header files should be include guarded</li>
        </ul>
        <h2 style="color: inherit;font-size: 30px;">More Info</h2>
        <p>You will be asked to write files containing big O notations. Please use this format:</p>
        <ul>
            <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(1)</code></li>
            <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(n)</code></li>
            <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(n!)</code></li>
            <li>n*m -&gt; <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(nm)</code></li>
            <li>n square -&gt; <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(n^2)</code></li>
            <li>sqrt n -&gt; <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(sqrt(n))</code></li>
            <li>log(n) -&gt; <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(log(n))</code></li>
            <li>n * log(n) -&gt; <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">O(nlog(n))</code></li>
            <li>&hellip;</li>
        </ul>
    </div>
</div>
<h2 style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 30px;">Tasks</h2>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);border-bottom: 1px solid rgb(221, 221, 221);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">0. Linear search</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>Write a function that searches for a value in an array of integers using the <a href="https://intranet.alxswe.com/rltoken/17RKhbmvh_u4ebCwaSxCxg" title="Linear search algorithm" target="_blank" style="color: transparent;">Linear search algorithm</a></p>
            <ul>
                <li>Prototype : <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int linear_search(int *array, size_t size, int value);</code></li>
                <li>Where <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code> is a pointer to the first element of the array to search in</li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">size</code> is the number of elements in <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code></li>
                <li>And <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">value</code> is the value to search for</li>
                <li>Your function must return the first index where <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">value</code> is located</li>
                <li>If <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">value</code> is not present in <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code> or if <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code> is <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">NULL</code>, your function must return <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">-1</code></li>
                <li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
            </ul>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;border: 1px solid rgb(204, 204, 204);"><code style="color: inherit;font-size: inherit;">wilfried@0x1E-search_algorithms$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 3, linear_search(array, size, 3));
    printf(&quot;Found %d at index: %d\n\n&quot;, 42, linear_search(array, size, 42));
    printf(&quot;Found %d at index: %d\n&quot;, 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
</code></pre>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x1E-search_algorithms</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0-linear.c</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);border-top: 0px solid rgb(221, 221, 221);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Check your code</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);border-bottom: 1px solid rgb(221, 221, 221);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">1. Binary search</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>Write a function that searches for a value in a sorted array of integers using the <a href="https://intranet.alxswe.com/rltoken/SnveFJhSDE7o8bEx-kGGpA" title="Binary search algorithm" target="_blank" style="color: transparent;">Binary search algorithm</a></p>
            <ul>
                <li>Prototype : <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int binary_search(int *array, size_t size, int value);</code></li>
                <li>Where <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code> is a pointer to the first element of the array to search in</li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">size</code> is the number of elements in <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code></li>
                <li>And <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">value</code> is the value to search for</li>
                <li>Your function must return the index where <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">value</code> is located</li>
                <li>You can assume that <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code> will be sorted in ascending order</li>
                <li>You can assume that <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">value</code> won&rsquo;t appear more than once in <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code></li>
                <li>If <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">value</code> is not present in <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code> or if <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code> is <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">NULL</code>, your function must return <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">-1</code></li>
                <li>You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)</li>
            </ul>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;border: 1px solid rgb(204, 204, 204);"><code style="color: inherit;font-size: inherit;">wilfried@0x1E-search_algorithms$ cat 1-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 2, binary_search(array, size, 2));
    printf(&quot;Found %d at index: %d\n\n&quot;, 5, binary_search(array, 5, 5));
    printf(&quot;Found %d at index: %d\n&quot;, 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary 
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
</code></pre>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x1E-search_algorithms</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">1-binary.c</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);border-top: 0px solid rgb(221, 221, 221);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Check your code</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);border-bottom: 1px solid rgb(221, 221, 221);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">2. Big O #0</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>What is the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">time complexity</code> (worst case) of a linear search in an array of size <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">n</code>?</p>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x1E-search_algorithms</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">2-O</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);border-top: 0px solid rgb(221, 221, 221);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Check your code</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);border-bottom: 1px solid rgb(221, 221, 221);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">3. Big O #1</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>What is the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">space complexity</code> (worst case) of an iterative linear search algorithm in an array of size <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">n</code>?</p>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x1E-search_algorithms</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">3-O</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);border-top: 0px solid rgb(221, 221, 221);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Check your code</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);border-bottom: 1px solid rgb(221, 221, 221);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">4. Big O #2</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>What is the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">time complexity</code> (worst case) of a binary search in an array of size <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">n</code>?</p>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x1E-search_algorithms</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">4-O</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);border-top: 0px solid rgb(221, 221, 221);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Check your code</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);border-bottom: 1px solid rgb(221, 221, 221);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">5. Big O #3</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>What is the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">space complexity</code> (worst case) of a binary search in an array of size <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">n</code>?</p>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x1E-search_algorithms</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">5-O</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);border-top: 0px solid rgb(221, 221, 221);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;border: 1px solid rgb(204, 204, 204);">Check your code</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);border: 1px solid rgb(221, 221, 221);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);border-bottom: 1px solid rgb(221, 221, 221);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">6. Big O #4</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>What is the space complexity of this function / algorithm?</p>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;border: 1px solid rgb(204, 204, 204);"><code style="color: inherit;font-size: inherit;">int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i &lt; n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
</code></pre>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x1E-search_algorithms</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">6-O</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>