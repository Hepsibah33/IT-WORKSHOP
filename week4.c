\documentclass{article}
\usepackage[table]{xcolor}

\begin{document}
	
	\begin{tabular}{|c|c|}
		\hline
		\cellcolor{green}V &
		\cellcolor{red}E \\
		\hline
		\cellcolor{yellow}N &
		\cellcolor{brown}K \\
		\hline
	\end{tabular}
\end{document}



//
\documentclass{article}
\begin{document}
	\begin{table}
	\centering 
	\begin{tabular}{|c|c|c|}
		\hline
		\textbf{Column1} &
		\textbf{Column2} &
		\textbf{Column3} \\
		\hline
		Row1, cell 1 & Row1, cell 2 & Row1, cell 3\\
		Row2, cell 1 & Row2, cell 2 & Row2, cell 3\\
		Row3, cell 1 & Row3, cell 2 & Row3, cell 3\\
		\hline
	\end{tabular}
	\caption{Example table}
	\label{tab:example}
\end{table}
\end{document}


//formula
\documentclass{article}
\usepackage{amsmath}

\begin{document}
	\[x^2+b^2+2ab\]
	
	\[
	\begin{bmatrix}
		3 & 5 & 9\\
		3 & 5 & 9\\
	\end{bmatrix}
    \]
    
    \begin{equation}
    	ax^2+vb^2=abx^2
    \end{equation}
    
    \begin{equation}
    	x^2+b^2=bx^2
    \end{equation}
    
    
\end{document}

//multi image insertion

\documentclass{article}
\usepackage{graphicx}
\usepackage{subcaption}

\begin{document}
	\begin{figure}[h]
		\centering
		\begin{subfigure}[b]
			{0.45\textwidth}
			\centering
			\includegraphics[width=\linewidth]{click.jpg}
			\caption{Image 1}
			\label{fig:image 1}
			
			
		\end{subfigure}
		\hfill
		\begin{subfigure}[b]
			{0.45\textwidth}
			\centering
			\includegraphics[width=\linewidth]{b.jpg}
			\caption{Image 2}
			\label{fig:image 2}
		\end{subfigure}
		\caption{Side-by-Side Images}
		\label{fig:sidebyside}
	\end{figure}
\end{document}



//table creation

\documentclass{article}
\usepackage{graphicx}
\usepackage{subcaption}

\begin{document}
	\begin{figure}[h]
		\centering
		\begin{subfigure}[b]
			{0.45\textwidth}
			\centering
			\includegraphics[width=\linewidth]{click.jpg}
			\caption{Image 1}
			\label{fig:image 1}
			
			
		\end{subfigure}
		\hfill
		\begin{subfigure}[b]
			{0.45\textwidth}
			\centering
			\includegraphics[width=\linewidth]{b.jpg}
			\caption{Image 2}
			\label{fig:image 2}
		\end{subfigure}
		\caption{Side-by-Side Images}
		\label{fig:sidebyside}
	\end{figure}
\end{document}

// table coloring

\documentclass{article}
\usepackage{graphicx}
\usepackage{subcaption}

\begin{document}
	\begin{figure}[h]
		\centering
		\begin{subfigure}[b]
			{0.45\textwidth}
			\centering
			\includegraphics[width=\linewidth]{click.jpg}
			\caption{Image 1}
			\label{fig:image 1}
			
			
		\end{subfigure}
		\hfill
		\begin{subfigure}[b]
			{0.45\textwidth}
			\centering
			\includegraphics[width=\linewidth]{b.jpg}
			\caption{Image 2}
			\label{fig:image 2}
		\end{subfigure}
		\caption{Side-by-Side Images}
		\label{fig:sidebyside}
	\end{figure}
\end{document}


// maths formula

\documentclass{article}
\usepackage{amsmath}

\begin{document}
	\[x^2+b^2+2ab\]
	
	\[
	\begin{bmatrix}
		3 & 5 & 9\\
		3 & 5 & 9\\
	\end{bmatrix}
    \]
    
    \begin{equation}
    	ax^2+vb^2=abx^2
    \end{equation}
    
    \begin{equation}
    	x^2+b^2=bx^2
    \end{equation}
    
    the formula of 
    \[[(a+b)^2]\]
    This is a simple math expression  \(sqrt{x^2+1}\)
    inside text.
    And this is also the same:
    \begin{math}
    	\sqrt{x^2+1}
    \end{math}
    but by using another command.
    This is a simple math expression without numbering 
    \[\sqrt{x^2+1}\]
    separated from text.
    This is also the same:
    \begin{displaymath}
    	\sqrt{x^2+1}
    \end{displaymath}
    
    
    \begin{align}
    	f(x) &= x^2\\
    	g(x) &=\frac{1}{x}\\
    	g(x) = \int_{o}^{x} e{-t^2} dt\\
    	F(x) =\int^a_b\frac{1}{3}x^3 dt
    \end{align}
    
    
\end{document}
