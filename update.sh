cd $(dirname $(readlink -f $0) )
git add .
git commit  -a 
#if [ ping ya.ru ]; then
#    echo No internet connection.
#else
 #   echo Connected
#fi
git pull origin master
git push origin master