class Box {
    private:
       int Length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
      void setLength(double l);
      void setWidth(double w);
      void setHeight(double h);
       // write prototypes of getters for length, width and height
      int getLength();
      int setWidth();
      int setHeight();

      int calcVolume();
};
