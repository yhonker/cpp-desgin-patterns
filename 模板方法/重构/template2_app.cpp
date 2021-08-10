//应用程序开发人员
class Application : public Library{
	public:
		
		virtual bool step2(){
			//...
		}

		virtual void step4(){
			//...
		}

};

int main()
{
	Library app = new Application();
	app->run();

	delete app;	
}