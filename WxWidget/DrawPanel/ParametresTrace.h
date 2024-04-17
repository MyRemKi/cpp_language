#ifndef PARAMETRESTRACE_H
#define PARAMETRESTRACE_H


class ParametresTrace
{
    public:
        ParametresTrace();
        ParametresTrace(float xmin, float xmax, 
                        float ymin, float ymax, float inc);
        ~ParametresTrace();
        float Getxmin() { return m_xmin; }
        void Setxmin(float val) { m_xmin = val; }
        float Getxmax() { return m_xmax; }
        void Setxmax(float val) { m_xmax = val; }
        float Getymin() { return m_ymin; }
        void Setymin(float val) { m_ymin = val; }
        float Getymax() { return m_ymax; }
        void Setymax(float val) { m_ymax = val; }
        float Getinc() { return m_inc; }
        void Setinc(float val) { m_inc = val; }

    protected:
private:
 
        float m_xmin;
        float m_xmax;
        float m_ymin;
        float m_ymax;
        float m_inc;
};

#endif // PARAMETRESTRACE_H
