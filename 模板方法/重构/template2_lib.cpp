//程序库开发人员
class Library{

public:
	void Step1(){
		//...
	}

    void Step3(){
		//...
    }

    void Step5(){
		//...
    }

	virtual bool Step2(){
		//...
	}

	virtual void Step4(){
		//...
	}

	void run(){//算法总体固定,过程方法实现变化

		Step1();

		if (Step2()){
			Step3();
		}

		for (int i = 0; i < 4; i++){
			Step4();
		}

		Step5();
	}
};