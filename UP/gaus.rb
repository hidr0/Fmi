n = gets.chomp
def sub a,b
	bb = []
	a.each_with_index do |aa, index|
		bb << aa - b[index]
	end
	return	bb
end
def mul a , b
	arr = []
	a.each do |aa|
		arr << aa * b
	end
	return arr
end
def print arr
	arr.each do |a|
		p a
	end
end
arr = []
n = n.to_i
n.times do |x|
	b = []
	n.times do |y|
		b << gets.chomp.to_i
	end
	arr << b
end

n = 3
n.times do |i|
	for j in (i+1)..(n-1)
		c = (arr[j][i]) * 1.0 / (arr[i][i]) * 1.0
		arr[j] = sub arr[j] , mul(arr[i] , c)
	end
end
a = 1
for i in 0..n-1
	a *= arr[i][i]
end
print arr
p a