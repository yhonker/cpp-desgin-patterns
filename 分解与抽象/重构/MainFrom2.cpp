class MainForm : public From {
    private:
        Point p1;
        Point p2;

        //针对所有形状
        vector<Shape*> ShapeVector;
        
    public:
        MainForm(){
            //...
        }
    protected:

        virtual void OnMouseDown(const MouseEventArgs& e);
        virtual void OnMouseUp(const MouseEventArgs& e);
        virtual void OnPaint(const MouseEventArgs& e);
             
};

void MainFrom::OnMouseDown(const MouseEventArgs& e){
    p1.x = e.X;
    p1.y = e.Y;

    //...
    From::OnMouseDown(e);
}

void MainForm::OnMouseUp(const MouseEventArgs& e){
	p2.x = e.X;
	p2.y = e.Y;

	if (rdoLine.Checked){
        shapeVector.push_back(new Line(p1,p2));
	}
	else if (rdoRect.Checked){
		int width = abs(p2.x - p1.x);
		int height = abs(p2.y - p1.y);
		shapeVector.push_back(new Rect(p1, width, height));
	}
	else if (...){

		shapeVector.push_back(circle);
	}

	this->Refresh();

	Form::OnMouseUp(e);
}

void MainForm::OnPaint(const PaintEventArgs& e){

	for (int i = 0; i < ShapeVector.size(); i++){
		ShapeVector[i]->Draw(e.Graphic);
	}

	//...
	Form::OnPaint(e);
}