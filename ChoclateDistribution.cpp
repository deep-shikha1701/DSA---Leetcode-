// Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 
// Each student gets one packet.
// The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.

class Solution{
	public:
		int DistributeChocolates(vector<int> packets, int m){
			if(packets.size() == 0 || m ==0 )
				return 0;
			if(packets.size() < m)
				return -1;
			
			sort(packets.begin(), packets.end());
			
			int min = INT_MAX;
			for(int i=0,i+m-1< packets.size();i++){
				int diff = packets[i+m-1] = packets[i];
				if(diff < min_diff){
					min_diff = diff;
				}
			}
			return min_diff;
			
				
		}
			
    
}
