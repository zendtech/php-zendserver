# Zend Server
#
# Version 0.2

# TODO:

FROM ubuntu:14.04
#FROM debian:wheezy

RUN apt-key adv --keyserver pgp.mit.edu --recv-key 799058698E65316A2E7A4FF42EAE1437F7D2C623
RUN echo "deb http://repos.zend.com/zend-server/8.0.0-beta/deb_apache2.4 server non-free" >> /etc/apt/sources.list.d/zend-server.list
#RUN echo "deb http://repos.zend.com/zend-server/8.0.0-beta/deb_ssl1.0 server non-free" >> /etc/apt/sources.list.d/zend-server.list
RUN apt-get update && apt-get install -y zend-server-php-5.5 && /usr/local/zend/bin/zendctl.sh stop
#RUN apt-get update && apt-get install -y libc6-dev adduser net-tools && apt-get install -y zend-server-php-5.5 && /usr/local/zend/bin/zendctl.sh stop

#COPY ./run /usr/local/bin/run
#COPY ./sanity.php /usr/local/bin/
#COPY ./nothing /usr/local/bin/nothing
COPY ./scripts /usr/local/bin
COPY ./libmysqlclient.so.18 /usr/lib/x86_64-linux-gnu/

COPY ./logo.png /root/
COPY ./zray.php /root/

#COPY ./site /var/www/html

EXPOSE 80
EXPOSE 443
EXPOSE 10081
EXPOSE 10082
#EXPOSE 10060
#EXPOSE 10061
#EXPOSE 10062

CMD ["/usr/local/bin/run"]
