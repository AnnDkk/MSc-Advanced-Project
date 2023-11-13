# MSc-Advanced-Project

Final Viedo：


## Introduction
In this project, I created an experiential device game —— Open the "Black Box", inspired by Deep Dream and the world in the eyes of people with colour blindness. In the game, I made a carefully packaged "Stupid AI" —— "A Blind Eye" —— as the main part of the game. The experientier needs to go through a series of explorations and research to obtain the "creative gems" in the "blind eye" and gain a new understanding of creativity. I hope the experiencer can realize that the inherent development thought of blindly pursuing perfection limits people's creativity by exploring this experience game. Especially in the era of rapid technological development, People should not only refrain from fearing the perfectly packaged technology and ideas behind the AI mask but should instead open this 'Black Box' to explore and study. Perhaps what is defined as stupid and imperfect can also be a source of new creativity.

<div align=center>
<img src="https://github.com/AnnDkk/Creative-Making-Advanced-Physical-Computing/blob/main/image/final.jpg" width="500" height="250">
</div>

## Inspiration
In my coding3 extension of machine learning research, I found a model called Deep Dream that cleverly uses a machine learning "mistake" - overprocessing discriminative features. Traditional deep learning uses gradient descent to minimize loss. However, the model uses the principle of gradient ascent to process images. It tries to intuitively express the characteristics and style of the picture seen by the machine at each level by increasing the activation value to maximize the expression of the identified single feature.

<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/1.png" width="700" height="250">
</div>

The creators explored the "stupidity" of neural networks, where excessive recognition and learning allowed each layer to emerge with its own properties. They took this property and used it to process images, abstracting them to form completely new things in images.
With technical iterations, it is even possible to use random noisy images to show the purely "creative" results of neural networks.
</div> 

<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/2.png" width="700" height="300">
</div>
I was pleasantly surprised by this fantastic innovative Angle! It also allowed me to see the interesting "soul" of complex and scary machine learning techniques. This started to change my mindset that maybe these wonderful technologies and AI might not be as "perfect" as I thought. But perhaps these imperfections are what make them. I began to explore further.

## Research on Deep Dream
By modifying the recognition range of the noise map and the accuracy of the iterative refinement, I obtained many strange texture layers. I tried to use the newly generated texture layer as a filter to apply a new effect to the input photo of the experiencer. 
> img_noise = np.random.uniform(size=(300,300,3)) + 100.0
> 
> img_noise = img_noise.astype(np.float32)
> 
> show_image(normalize_image(img_noise))

> def run_deep_dream_with_octaves(img, steps_per_octave=100, step_size=0.01, octaves=range(-2,3), octave_scale=1.3):
> 
> dream_img = render_deepdream(dream_model,img,steps=100,step_size=0.01)

<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/4.png" width="700" height="500">
</div>


In order to reduce the effect of special layers overwriting the input image, I chose the most suitable starting point for the range of the generated image - Octave_scale values. So that the input image can produce the effect of a childhood toy - kaleidograph after passing through the selected channel.

<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/3.png" width="900" height="280">
</div>

Experientialists can choose different channels as filter effects according to the pictures they choose, and then create their own electronic kaleidograph.

### Problem
However, what I want to explore through user testing is the understanding of when people use these imperfect and even stupid AI and the research and inspiration of their creative process. Almost all testers focus more on how powerful the technology is to perform the effect.They couldn't believe the stupidity of the complex technology that created it.
</div>
In fact, neural networks are complex if we talk about this huge technology. Especially when it is defined in a whole new realm, it can perform many human-like and even superhuman behaviours. But it is under this mask of perfection that people are afraid to explore AI. Gradually, there is an idea-creation process where technology can reach but there is no innovation. So I realized through initial experimentation that maybe I should help open up this scary "black box" for experiencers, so that people are not afraid to explore and not trapped in the definition of the program given by the creators of the technology. It's about daring to see what's different and even silly under the mask of perfection.

## Expanding
One interesting idea I've come across while exploring how people shift their perspective is “the colour blindness paradox” .
#### The color blindness paradox
> There is a man, who has a strange kind of colour blindness. He sees the two colours differently from others. He sees blue as green and green as blue. But he does not know
> that he is different from others, others see the sky as blue, he sees the green, but he and others are called the same, are "blue"; The grass is green, he saw is blue,
> but he called blue "green". So neither he nor anyone else knows the difference between him and anyone else.
> 
> So how do you tell the difference?  How do you prove that you don't have the disease？



## Interview


## Concept


## Design

## Open “Black Box”

##  Working Process

### Sketch
### Arduino & Circuit
### Challenge
### Laser Cutting
### Touch Designer & Code Testing
### Appearance & Content Setting

## Optimize

## Discussion
### Update & Future Work

## Achievement
