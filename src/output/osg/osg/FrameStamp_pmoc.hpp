#ifndef osg_FrameStamp_pmocHPP
#define  osg_FrameStamp_pmocHPP 1
#include <osg/FrameStamp_pmoc.hpp>
#include <QObject>
#include <osg/FrameStamp>
#include <osg/FrameStamp>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_FrameStamp: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
FrameStamp * _model;
QReflect_FrameStamp(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FrameStamp( );
//FrameStamp
// FrameStamp & operator=(const  FrameStamp &);
// void  getCalendarTime( tm &);
// void  setCalendarTime(const  tm &);
Q_INVOKABLE const double  getReferenceTime()const;
Q_INVOKABLE const double  getSimulationTime()const;
Q_INVOKABLE const unsigned int  getFrameNumber()const;
Q_INVOKABLE void setFrameNumber(const unsigned int &);
Q_INVOKABLE void setReferenceTime(const double &);
Q_INVOKABLE void setSimulationTime(const double &);
Q_PROPERTY(double ReferenceTime  READ getReferenceTime WRITE setReferenceTime NOTIFY ReferenceTimeChanged)
Q_PROPERTY(double SimulationTime  READ getSimulationTime WRITE setSimulationTime NOTIFY SimulationTimeChanged)
Q_PROPERTY(unsigned int FrameNumber  READ getFrameNumber WRITE setFrameNumber NOTIFY FrameNumberChanged)
signals: void FrameNumberChanged(const unsigned int&);
public:
signals: void ReferenceTimeChanged(const double&);
public:
signals: void SimulationTimeChanged(const double&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FrameStamp: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::FrameStamp> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FrameStamp();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 

#endif //osg_FrameStamp_pmocHPP

