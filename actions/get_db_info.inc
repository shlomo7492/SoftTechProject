<!-Getting the setup info for out DataBase ->

<h2> Your blog Database needs to be configured!</h2>
<div class="formFrame">
    <h3 style="margin-left:20px;margin-right:20px;"> We will install your blog for you in few easy to follow steps. Please provide your Data Base information in the form below:</h3>

    <form action="index.php" method="POST">
        <span>Your DataBase name:</span> <input type="text" name="dbname" size="50"></br></br>
        <span>DataBase user name:</span> <input type="text" name="user" size="50"></br></br>
        <span>DataBase Password:</span> <input type="password" name="password" size="50"></br></br>
        <input type="hidden" name="step" value = "1" >
        <input type="submit" value="Continue to step one &#9658;" class="submit">
    </form>
</div>