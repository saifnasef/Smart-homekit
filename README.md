# Smart-homekit

A smart home project where im trying to use apple homekit to control everything in my room and soon the whole house.

1) The lights: this was the first thing I installed and could control using home app on ios. but i removed again idk why lol
2) The bed LED: this is fully controlled from my phone now.
3) The AC: this was quite challenging, first i had to read the signals from the remote and decode it. Each button could have more than one signal depending on the condition of the AC eg. Temp, Swing, Fan and many more. So for now i just programmed turning it on and off, but i will add the rest of the functions soon.

In this project im using ESP32 Dev module with homespan library.

Components:
- Relays 220VAC
- IR emitter module
- 12 VDC supply
- IR receiver (this was used to read the singals from the AC remote, and will be used more in the future. i won't say in what it's a secret )
