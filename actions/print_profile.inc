<?php
if ($_SESSION['logged'] == true){
    echo "User ID: ".$_SESSION['userID']."</br>";
    echo "User name: ".$_SESSION['userName']."</br>";
    echo "User e-mail: ".$_SESSION['email']."</br>";
    echo "Gender: ".$_SESSION['gender']."</br>";
    echo "Birth date: ".$_SESSION['birthdate']."</br>";
    echo "Registered on: ".$_SESSION['date_Registered']."</br>";
    echo "Account type: ".$_SESSION['account_Type']."</br>";
}
else{
    echo "You are not logged in and we will be redirect you to login page in a moment. If redirection fails click the following link: <a href='?login'>Redirect me now </a>";
    echo '<script type="text/javascript">
           window.location = "?login"
      </script>';
}

?>