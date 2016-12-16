<?php
//spliting url to array
$str = strtolower($_SERVER['REQUEST_URI']);
$str = str_replace(array("?","|"), '/', $str);
$urlArray = array_map('trim', explode('/', $str));

//removing null values due to leading / in the url
foreach($urlArray as $key => $link)
{
    if($link === '')
    {
        unset($urlArray[$key]);
    }
}
//getting the actions according the length of the array
$length=count($urlArray);
switch ($length){
    case 0:{
        include 'template/front_page_templ.inc';
    }
    break;
    case 1:{
        if ($urlArray[1] == 'softtechproject'){
            include 'template/front_page_templ.inc';
        }
        else{
            switch ($urlArray[1]){
                case 'login':{
                    include 'template/login_page_templ.inc';
                }
                    break;
                case 'logout':{
                    include 'template/logout_page_templ.inc';
                }
                    break;
                case 'register':{
                    include 'template/register_page_templ.inc';
                }
                    break;
                case 'profile':{
                    include 'template/profile_page_templ.inc';
                }
                    break;
                case 'contact':{
                    include 'template/contact_page_templ.inc';
                }
                    break;
                case 'sitenews':{
                    include 'template/sitenews_page_templ.inc';
                }
                    break;
                case 'blog':{
                    include 'template/blog_page_templ.inc';
                }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";
                }
                    break;
            }
        }
    }
        break;
    case 2:{
        if ($urlArray[1] == 'softtechproject'){
            switch ($urlArray[3]){
                case 'login':{
                    include 'template/login_page_templ.inc';
                }
                    break;
                case 'logout':{
                    include 'template/logout_page_templ.inc';
                }
                    break;
                case 'register':{
                    include 'template/register_page_templ.inc';
                }
                    break;
                case 'profile':{
                    include 'template/profile_page_templ.inc';
                }
                    break;
                case 'contact':{
                    include 'template/contact_page_templ.inc';
                }
                    break;
                case 'sitenews':{
                    include 'template/sitenews_page_templ.inc';
                }
                    break;
                case 'blog':{
                    include 'template/blog_page_templ.inc';
                }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";

                }
                    break;
            }
        }
        else{
            switch ($urlArray[1]){
                case 'sitenews':{
                    switch ($urlArray[2]){
                        case 'create':{
                            include 'template/createnews_page_templ.inc';
                        }
                        break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;
                case 'blog':{
                    switch ($urlArray[2]){
                        case 'create':{
                            include 'template/createblog_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }                             }
                    break;
                case 'profile':{
                    switch ($urlArray[2]){
                        case 'edit':{
                            include 'template/editprofile_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deleteprofile_page_templ.inc';

                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }                             }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";

                }
                    break;
            }
        }
    }
        break;
    case 3:{
        if ($urlArray[1] == 'softtechproject'){
            switch ($urlArray[3]){
                case 'sitenews':{
                    switch ($urlArray[4]){
                        case 'create':{
                            include 'template/createnews_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;
                case 'blog':{
                    switch ($urlArray[4]){
                        case 'create':{
                            include 'template/createblog_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }                             }
                    break;
                case 'profile':{
                    switch ($urlArray[4]){
                        case 'edit':{
                            include 'template/editprofile_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deleteprofile_page_templ.inc';

                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }                             }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";

                }
                    break;
            }
        }
        else{
            switch ($urlArray[1]){
                case 'sitenews':{
                    $newsID=$urlArray[3];
                    switch ($urlArray[2]){
                        case 'edit':{
                            include 'template/editnews_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deletenews_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;
                case 'blog':{
                    $blogID=$urlArray[3];
                    switch ($urlArray[2]){
                        case 'edit':{
                            include 'template/editblog_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deleteblog_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";
                }
                    break;
            }

        }

    }
        break;
    case 4:{
        if ($urlArray[1] == 'softtechproject') {
            switch ($urlArray[3]){
                case 'sitenews':{
                    $newsID=$urlArray[5];
                    switch ($urlArray[4]){
                        case 'edit':{
                            include 'template/editnews_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deletenews_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;
                case 'blog':{
                    $blogID=$urlArray[5];
                    switch ($urlArray[4]){
                        case 'edit':{
                            include 'template/editblog_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deleteblog_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }                             }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";
                }
                    break;
            }

        }

    }

        break;
    default:{

    }
        break;
}

?>