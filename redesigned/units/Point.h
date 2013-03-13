#ifndef POINT_H
#define POINT_H

class Point {
  private:
		int x;
		int y;
  public:
  		Point(double xp = 0, double yp = 0){
  			x = xp; 
  			y = yp;
  		}
  		
  		double getX()const;
  		
  		double getY()const;
  		
  		void setX(const double& xp);
  		
  		void setY(const double& yp);
  		
  		double distance(Point otherP){
  			double xdis = (double)x - otherP.x;
  			double ydis = (double)y - otherP.y;
  			return sqrt(xdis*xdis + ydis*ydis);
  		}
  		
  		void move(double a, double b){
  			(double)x += a;
  			(double)y += b;
  		}
  		
  		
};

#endif
