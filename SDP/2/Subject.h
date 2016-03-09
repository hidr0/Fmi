struct Subject{
	char name[20];
	double grade;

	void read();
	void print();

	bool equal(const Subject&);
};