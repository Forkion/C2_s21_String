#Dockerfile
FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
	gcc \
	check \
	make \
	clang \
	valgrind \
	lcov && \
	rm -rf /var/lib/apt/lists/* && \
	mkdir -p /app/src /app/src && chmod 777 /app/src /app/src && \
	groupadd --system --gid 777 appuser && \
	useradd --system --gid appuser --uid 777 appuser

COPY . /app/src/

RUN chown -R appuser:appuser /app/src

WORKDIR /app/src/

USER appuser

HEALTHCHECK NONE
