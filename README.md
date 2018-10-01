# MoonLander

<h2>Overview</h2>
Lunar Lander was one of many influential early video games released by Atari in 1979, and was a precursor to their release of Asteroids (which we will also implement this semester). The object of the game is to safely navigate a lunar module to land on a flat portion of the moon's surface. To pilot the lander, horizontal thrusters can be activated to maneuver the ship left and right, and vertical thrusters can be fired to slow its descent.
<h2>Game Play and Rules</h2>
<ul>
  <li>The following describes the rules and game play of Moon Lander:</li>
  <ul>
    <li>The dimensions of the screen are: (-200, -200) to (200, 200).</li>
    <li>The lander begins with 500 units of fuel.</li>
    <li>To land successfully, the lander must:</li>
      <ul>
        <li>Have its center within the horizontal boundaries of the platform.</li>
        <li>Be within 4 pixels vertically, above the platform.</li>
        <li>Arrive at the platform with a velocity of no more than 3 pixels per frame in any direction.</li>
      </ul>
    <li>Gravity on the moon is modeled at 0.1 pixels per frame.</li>
    <li>The left arrow key causes thrust on the left of the lander which propels it to the right (and similar for the right and down arrows).</li>
    <li>The left and right thrust amounts are 0.1 pixels per frame, and consume 1 unit of fuel.</li>
    <li>The upward thrust (caused by the down arrow) amount is 0.3 pixels per frame, and consumes 3 units of fuel.</li>
    <li>The lander has an inertia, in other words, once it begins moving left, it continues moving left unless additional thrust is made.</li>
    <li>The lander will not continue to move after crashing or landing.</li>
    <li>After successfully landing, the game displays, "You have successfully landed!"</li>
    <li>After crashing, the game displays, "You have crashed."</li>
    <li>After running out of fuel, the lander will not be able to apply thrusters (but can continue falling).</li>
    <li>Any other contact with the ground or platform results in a crash.</li>
  </ul>
</ul>
