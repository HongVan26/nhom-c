//client.cpp - Su dung lop
#include "MyRectangle.h"

int main()
{
	cout << "So doi tuong hien hanh cua lop: " << MyRectangle::getCount() << endl; //count = 0
	//tao doi tuong r1
	MyRectangle r1; //goi den ham tao mac dinh
	//truy xuat ham thanh vien
	//r1.input();
	cout<<"Du lieu cua r1: "<<endl;
	r1.print();
	r1.setLen(-5);
	cout<<"Chieu dai cua r1 sau khi thay doi la:"<<r1.getLen()<<endl;
	cout<<"Dien tich cua r1: "<<r1.area()<<endl;
	//r1.len = 3;

	//tao con tro doi tuong r2
	MyRectangle *r2 = new MyRectangle(); //cap phat bo nho, goi ham tao mac dinh
	//r2->input();
	cout<<"Du lieu cua r2: "<<endl;
	r2->print();
	cout<<"Dien tich cua r2: "<<r2->area()<<endl;

	//tao doi tuong r3
	MyRectangle r3(5,4,"blue"); //tao doi tuong r3 goi ham tao co tham so
	cout<<"Du lieu cua r3 la: "<<endl;
	r3.print();

	//tao con tro doi tuong r4, su dung ham tao co tham so
	MyRectangle *r4 = new MyRectangle(7,6,"red");
	cout<<"Du lieu cua r4 la: "<<endl;
	r4->print();

	//tao doi tuong r5
	MyRectangle r5(r3);// goi ham tao sao chep
	r5.print();

	//huy bo tuong minh con tro doi tuong r2,r4
	delete r2; //goi ham huy
	delete r4; //goi ham huy
	//khai bao const object
	const 
	return 0;
}