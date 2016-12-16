/**
 * Created by mitko on 03.12.16.
 */
function onResize() {
    if(innerWidth<590){
        document.getElementById("user_in").innerHTML = "Menu";
        document.getElementById("user_out").innerHTML = "Menu";
    }
    else{
        document.getElementById("user_in").innerHTML ="<div class='menu'><ul ><li> <a href='../SoftTechProject'>Home</a>&nbsp;|&nbsp;</li> <li> <a href='blogs_view'>Blogs</a>&nbsp;|&nbsp;</li> <li>  <a href='contacts'>Feedback</a>&nbsp;|&nbsp;</li> <li><div class='dropdown'><button class='dropbtn'><a href='#'>Profile <span style='font-size:14px;'>&#9660;</span></a></button><div class='dropdown-content'><a href='?profile'>Profile info</a><a href='?myblog'>My Blog posts</a><a href='?blog/create'>Create Blog post</a><a href='?logout'>Logout</a></div></div></li> </ul> </div>";
        document.getElementById("user_out").innerHTML ="<div class='menu'><ul ><li> <a href='../SoftTechProject'>Home</a>&nbsp;|&nbsp;</li> <li> <a href='blogs_view'>Blogs</a>&nbsp;|&nbsp;</li> <li>  <a href='register'>Register</a>&nbsp;|&nbsp;</li> <li>  <a href='login' class='login_link'>Login</a></li> </ul> </div>";

    }
}