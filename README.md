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
<img src="https://github.com/AnnDkk/Coding3----Final-Project/blob/main/C3image/2.png" width="800" height="350">
</div> 

### The First Try

<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/4.png" width="700" height="500">
</div>

In order to reduce the effect of special layers overwriting the input image, I chose the most suitable starting point for the range of the generated image - Octave_scale values. So that the input image can produce the effect of a childhood toy - kaleidograph after passing through the selected channel.

<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/3.png" width="900" height="280">
</div>

Experientialists can choose different channels as filter effects according to the pictures they choose, and then create their own electronic kaleidograph.
> Generated results
> URL: https://colab.research.google.com/drive/1in-DDdF16WzmHUhmmtnaedY4hs2henkK#scrollTo=zE77ZZiAex0I


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

This particular point got me thinking. Through a search, I found that this argument appeared early in the argument for the existence of "Qualia". The independent existence and uniqueness of the subjective conscious experience is demonstrated in both John Locke's inverting the colour spectrum thought experiment and Frank Jackson's thought experiment. What intrigues me most is that we can never really experience how blue looks to other people and how blue looks to us. So I continued my research based on this paradox of color vision.

#### About Color Blindness
<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/5.png" width="550" height="280">
</div>

Based on the above theory, I carried out research on this kind of group. I have found that most people with color blindness (except for those with total color blindness) do not know they have it until they have a later medical test. And most patients with color blindness show that the disease does not completely affect their normal life after social training. As a result, many people may not even know they are color blindness. 

But it was interesting to see in the forum posts of people with color blindness their interpretation of some of the social care and definitions. They regard the excessive care expressed by most normal people as a form of "discrimination" and deny that the world they see is beautiful.
<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/6.png" width="600" height="280">
</div>


#### Connection
> When I asked the most popular AI at the moment - Chat GPT, what do you think is Stupid AI? Its answer shocked me, I didn't expect AI to blame humans. It believes that
> this stupidity is caused by the human inability to control and make mistakes with technology and code.
<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/7.png" width="600" height="280">
</div> 
</div> 


As we know, behind every machine and AI is a data set formed by the people who control them and form its network architecture, recognize information and give feedback. So all questions have a standard answer for AI as long as they exist in its database. This is also the epitome of a malformed phenomenon in modern society under the development of technology. People are stubbornly pursuing the "perfect", "good" and "normal" considered by the majority group, so as to exclude those small groups. The perfect AI, which is perfectly packaged under the smart mask, has chosen by people to a large extent in advance, but people are trapped in this information cocoon room without knowing it. It is like if a person who is not color blind has defined the colour blind as abnormal, then he will forever reject to be a color blind, forever refusing to accept that the color blind world is also beautiful. The formation of information cocoon is tantamount to homogenizing people's "sensibility". But is the original meaning of "definition" to distinguish between normal and abnormal? Or do they let people know about individual differences? If the difference is constantly abandoned and excluded, then what is creation?

I brainstorm about Stupid AI and the social status of people with color blindness.
<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/8.jpg" width="600" height="280">
</div> 

## Interview
Based on the above thinking, I conducted a questionnaire survey and test on people's social cognition.
<div align=center>
<img src="https://github.com/AnnDkk/MSc-Advanced-Project/blob/main/blog%20image/WechatIMG944.jpg" width="980" height="320">
</div> 





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
