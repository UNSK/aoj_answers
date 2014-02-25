first = 0
second = 0
third = 0
10.times do
	tmp = STDIN.gets.to_i
	if tmp > third then
		if tmp > second then
			if tmp > first then
				third = second
				second = first
				first = tmp
			else
				third = second
				second = tmp
			end
		else
			third = tmp
		end
	end
end
STDOUT.puts(first)
STDOUT.puts(second)
STDOUT.puts(third)