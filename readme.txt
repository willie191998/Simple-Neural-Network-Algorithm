# Vanilla Neural Network in C++

## Overview of This project implements a simple vanilla neural network algorithm using C++. The network utilizes forward propagation and backpropagation for training and supports regularization techniques to reduce overfitting and improve output accuracy. The highly customizable neural network allows you to adjust its structure to include between 3 to 7 layers and handle up to 50,000 parameters.

**Key Features Customizable Architecture**: Supports between 3 to 7 layers. It can handle up to 50,000 parameters.

**Activation Functions**: Utilizes both Sigmoid and Cosh functions.

**Training Data**: Embedded within the codebase.

**Performance**: Fast training, completing 50,000 iterations in approximately 20 seconds.

**Fully Native Implementation**: Written entirely in C++. No external libraries are used; all functionalities, including matrix multiplication, are implemented from scratch.

**Regularization**: Built-in regularization to minimize overfitting and enhance the model's generalization capabilities.

**Attention**: It uses a simple attention mechanism, with the best effort to score which input to use for determining the output.

## How It Works 
The neural network is trained using forward propagation to compute the output, followed by backpropagation to adjust the weights based on the error. The network includes regularization to penalize large weights, which helps in reducing overfitting and improving the overall performance on unseen data.

Custom Matrix Multiplication One of the key aspects of this project is the implementation of native matrix multiplication functions, which ensures efficient computation and contributes to fast training times.

## Performance 
Thanks to the fully native C++ implementation and optimization, the neural network can complete training for 50,000 iterations in about 20 seconds, making it a quick and efficient tool for various machine-learning tasks.

## Project History 
**Start Date**: 2020 
**Last Significant Modification**: 2021 

## Getting Started 
Clone the repository. 'git clone https://github.com/willie191998/Simple-Neural-Network-Algorithm.git' 
Compile the C++ code using your preferred compiler. 
Run the executable to start training the neural network with the embedded data.

## Contribution 
Contributions are welcome! Feel free to open issues or submit pull requests.

## License 
This project is licensed under the MIT License - see the LICENSE file for details.

## Thoughts on the Project 
This project is quite impressive, especially considering its fully native implementation and performance efficiency. It demonstrates a solid understanding of both neural networks and C++ programming.

The project would be particularly beneficial for those interested in understanding the inner workings of neural networks without relying on external libraries. It's also a great demonstration of building high-performance machine learning models from scratch. 
