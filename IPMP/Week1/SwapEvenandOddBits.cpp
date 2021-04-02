//swap odd and even bits of an unsigned integer

unsigned int swapBits(unsigned int n)
    {
    	// Your code here
        unsigned int evenbits = n & 0xAAAAAAAA;
        unsigned int oddbits = n & 0x55555555;
        evenbits = evenbits >> 1;
        oddbits = oddbits << 1;
        return (evenbits | oddbits);
    }