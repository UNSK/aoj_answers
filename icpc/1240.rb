class String
  def C
    self.rotate 1
  end

  def J
    self.rotate -1
  end

  def E
    h = self.length/2
    if self.length.odd?
      self.slice(h+1, self.length)+self[h]+self.slice(0,h)
    else
      self.slice(h,self.length)+self.slice(0,h)
    end
  end

  def A
    self.reverse
  end

  def M
    s=''
    self.chars.each do |c|
      if c =~ /[0-9]/
        s += c=='9' ? '0' : (c.to_i+1).to_s
      else 
        s += c
      end
    end
    s
  end

  def P
    s=''
    self.chars.each do |c|
      if c =~ /[0-9]/
        s += c=='0' ? '9' : (c.to_i-1).to_s
      else 
        s += c
      end
    end
    s
  end

  def rotate(n)
    n += self.length if n < 0
    self.slice(n, self.length-n)+self.slice(0,n)
  end
end

n = gets.to_i
n.times do
  s = gets.chomp
  msg = gets.chomp
  s.reverse.chars.each do |c|
    msg = msg.J if c == 'J'
    msg = msg.C if c == 'C'
    msg = msg.E if c == 'E'
    msg = msg.A if c == 'A'
    msg = msg.P if c == 'P'
    msg = msg.M if c == 'M'
  end
  puts msg
end
