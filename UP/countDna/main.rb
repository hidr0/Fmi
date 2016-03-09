string = ARGV[0]

map = {}
string.each_char do |c|
	if map[c] == nil
		map[c] = 1
	else
		map[c] = map[c] + 1
	end
end

map.each do |key,value|
 print value.to_s + " "
end
print "\n"