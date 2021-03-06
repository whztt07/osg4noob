#ifndef osg_TextureCubeMap_pmocHPP
#define  osg_TextureCubeMap_pmocHPP 1
#include <osg/TextureCubeMap_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/TextureCubeMap>
#include <osg/TextureCubeMap>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TextureCubeMap: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Face{
POSITIVE_X =TextureCubeMap::POSITIVE_X,
NEGATIVE_X =TextureCubeMap::NEGATIVE_X,
POSITIVE_Y =TextureCubeMap::POSITIVE_Y,
NEGATIVE_Y =TextureCubeMap::NEGATIVE_Y,
POSITIVE_Z =TextureCubeMap::POSITIVE_Z,
NEGATIVE_Z =TextureCubeMap::NEGATIVE_Z};
  Q_ENUMS(Face)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TextureCubeMap * _model;
QReflect_TextureCubeMap(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TextureCubeMap( );
//TextureCubeMap
// SubloadCallback * getSubloadCallback();
// void  setSubloadCallback( SubloadCallback *);
//const  SubloadCallback * getSubloadCallback();
Q_INVOKABLE  GLenum  getTextureTarget()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  int  getTextureDepth()const;
Q_INVOKABLE  unsigned int  getNumImages()const;
Q_INVOKABLE  unsigned int&  getModifiedCount( unsigned int  , unsigned int )const;
Q_INVOKABLE const unsigned int  getNumMipmapLevels()const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int );
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int )const;
Q_INVOKABLE void  apply(osg::QReflect_State *)const;
Q_INVOKABLE void  copyTexSubImageCubeMap(osg::QReflect_State * , int  , int  , int  , int  , int  , int  , int );
Q_INVOKABLE void  setImage( unsigned int  ,osg::QReflect_Image *);
Q_INVOKABLE void  setTextureSize( int  , int )const;
Q_INVOKABLE void setNumMipmapLevels(const unsigned int &);
Q_PROPERTY(int TextureHeight  READ getTextureHeight WRITE setTextureHeight NOTIFY TextureHeightChanged)
Q_PROPERTY(int TextureWidth  READ getTextureWidth WRITE setTextureWidth NOTIFY TextureWidthChanged)
Q_PROPERTY(unsigned int NumMipmapLevels  READ getNumMipmapLevels WRITE setNumMipmapLevels NOTIFY NumMipmapLevelsChanged)
virtual Q_INVOKABLE const int  getTextureHeight()const;
virtual Q_INVOKABLE const int  getTextureWidth()const;
virtual Q_INVOKABLE void setTextureHeight(const int &);
virtual Q_INVOKABLE void setTextureWidth(const int &);
signals: void NumMipmapLevelsChanged(const unsigned int&);
public:
signals: void TextureHeightChanged(const int&);
public:
signals: void TextureWidthChanged(const int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TextureCubeMap: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TextureCubeMap> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TextureCubeMap();
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

#endif //osg_TextureCubeMap_pmocHPP

