<h2><a href="https://www.hackerrank.com/challenges/inheritance-introduction/problem" target="_blank" rel="noopener noreferrer">Inheritance Introduction</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [HackerRank Challenge](https://www.hackerrank.com/challenges/inheritance-introduction/problem) |

## Topics
`C++` `Inheritance`

---

## Problem Statement

<div class="content-text challenge-text mlB hackdown-container theme-m"><div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>One of the important topics of Object Oriented Programming is Inheritance. Inheritance allows us to define a class in terms of another class, which allows us in the reusability of the code.Check out the code below:</p>

<pre><code>class Triangle{
    public:
        void triangle(){
            cout&lt;&lt;"I am a triangle\n";
        }
};
</code></pre>

<p>The class Triangle has a function called triangle(). Now we create a class derived from the base class Triangle called Isosceles.</p>

<pre><code>class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout&lt;&lt;"I am an isosceles triangle\n";
        }
};
</code></pre>

<p>Now we can create a derived class object and use it to access the functions of the base class.</p>

<pre><code>int main(){
    Isosceles isc;
    isc.isosceles();
    isc.triangle();
    return 0;
}
</code></pre>

<p>This code will print:</p>

<pre><code>I am an isosceles triangle
I am a triangle
</code></pre>

<p>Now write a function in Isosceles class such that the output is as given below.</p></div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle
</code></pre></div></div></div></div></div>