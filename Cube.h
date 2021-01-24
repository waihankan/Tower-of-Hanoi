#pragma once
class Cube{
	public:
		Cube(double length);
		void setLength(double length);
		double getLength() const;
		double getVolume() const;

	private:
		double length_;

};
