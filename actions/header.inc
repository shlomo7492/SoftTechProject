<div> <!--class="header_container "-->
    <div class="img">
        <img src="image/logo.png"  >
    </div>
    <div id="main-menu" >

    <?php

    if ($_SESSION['logged'] == true){
        echo "<div id='user_in'></div>";

    }
    if ($_SESSION['logged'] == false){
        echo "<div id='user_out'></div>";

    }


    ?>
    </div>
</div>

<div id='user_in' style='display:none;'></div>
<div id='user_out' style='display:none;'></div>