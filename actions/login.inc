<h2> Login</h2>
<div class="formFrame">
    <h3>Please enter e-mail and password.</h3>

    <!--Login form-->

    <form action="index.php/profile" method="post">
        <span> E-mail:</span> <input type="text" name="email" size="50"><br><br>
        <span>Password:</span><input type="password" name="password" size="50"><br><br>
        <input type="hidden" name="login" value="true">
        <input type="submit" value="Continue to step four &#9658;" class="submit">
    </form>
</div>