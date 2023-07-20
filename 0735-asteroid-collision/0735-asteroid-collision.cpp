
class Solution {
public:


	vector<int> asteroidCollision(vector<int>& asteroids) {

		// create stack to save and track asteroid
		stack<int> storeStack;
		if(asteroids.size() < 1){
			vector<int> temp;
			return temp;


		}

		if(asteroids.size() == 1){
			vector<int> temp;
			temp.push_back(asteroids[0]);
			return temp;
		}


		// loop through asteroids and put them into stack
		for(int currentAsteroid : asteroids){
			if(storeStack.size() == 0){
				storeStack.push(currentAsteroid);
				continue;
			}

			int top = 0;
			while(true){
				if(storeStack.size() > 0){
					top = storeStack.top();
				}else{
					storeStack.push(currentAsteroid);
					break;
				}
				if(top == 0)break;
				if(top > 0 && currentAsteroid < 0){

					if(abs(top)> abs(currentAsteroid)){
						break;
					}else if(abs(top) < abs(currentAsteroid)){
						storeStack.pop();
					}else{
						storeStack.pop();
						break;
					}
				}else{
					storeStack.push(currentAsteroid);
					break;
				}
			}

			}




		// return whatever left in the stack
		vector<int> result(storeStack.size());

		for(int i = result.size() - 1; i >= 0; i --){
			result[i] = storeStack.top();
			storeStack.pop();
		}


		//while(!storeStack.empty()){
		//	result.push_back(storeStack.top());
		//	storeStack.pop();
		//}
		//reverse(result.begin(), result.end());
		return result;

	}
};