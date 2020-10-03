FROM debian:buster

# Install necessary services / software.
RUN apt update
RUN apt -y install nginx mariadb-server php7.3-fpm php-mysql php-json php-mbstring

# Copying main Index page for NGINX Server & additional source files
WORKDIR /var/www/ft_server/
COPY ./srcs/index.html .
COPY ./srcs/error.html .
COPY ./srcs/index_styles.css .
COPY ./srcs/indexprofilepic.jpg .
COPY ./srcs/wp-cli.phar .
COPY ./srcs/database.sql .
COPY ./srcs/wordpress.tar.gz .
COPY ./srcs/phpMyAdmin.tar.gz .

# Setting up Server block for blog & self-signed certificate and key for SSL encryption
COPY ./srcs/nginx.config /etc/nginx/sites-available/ft_server
COPY ./srcs/certificate.crt /etc/nginx/ssl/certificate.crt
COPY ./srcs/private.key /etc/nginx/ssl/private.key
RUN ln -s /etc/nginx/sites-available/ft_server /etc/nginx/sites-enabled/ft_server

# Refreshing nginx configuration
RUN nginx -t

#Install WP-CLI
RUN chmod +x wp-cli.phar && mv wp-cli.phar /usr/local/bin/wp
RUN wp cli update

#phpMyAdming Setup
RUN tar -xf phpMyAdmin.tar.gz && rm phpMyAdmin.tar.gz && mv phpMyAdmin-5.0.2-english phpmyadmin
COPY ./srcs/config.inc.php /var/www/ft_server/phpmyadmin/
COPY ./srcs/php.ini /etc/php/7.3/fpm/
RUN chmod 660 phpmyadmin/config.inc.php && \
	chown -R www-data:www-data /var/www/ft_server/phpmyadmin

#MariaDB SQL Setup
RUN service mysql start && \
        echo "CREATE DATABASE database_blog;" | mariadb && \
        echo "GRANT ALL PRIVILEGES ON *.* TO 'database_user'@'localhost' IDENTIFIED BY 'user_password123';" | mariadb && \
        echo "CREATE DATABASE phpmyadmin" | mariadb && \
        echo "FLUSH PRIVILEGES" | mariadb && \
	mysql phpmyadmin < /var/www/ft_server/phpmyadmin/sql/create_tables.sql

#Wordpress installation & database recovery
RUN tar -xzvf wordpress.tar.gz && rm wordpress.tar.gz && chmod 644 ./wordpress/wp-config.php
RUN service mysql start && mysql -u root -p database_blog < database.sql --password= 

#Permissions and access config
RUN chown -R www-data:www-data /var/www/ft_server/*
RUN chmod 755 -R /var/www/ft_server/*

EXPOSE 80 443 25

CMD service php7.3-fpm start &&\
	 service nginx start &&\
	 service mysql start &&\
	 bash
