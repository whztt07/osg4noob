#include <osg/Transform>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Transform_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Transform::computeLocalToWorldMatrix(osg::QReflect_Matrixd *p0 ,osg::QReflect_NodeVisitor *p1)const{
return _model->computeLocalToWorldMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_Transform::computeWorldToLocalMatrix(osg::QReflect_Matrixd *p0 ,osg::QReflect_NodeVisitor *p1)const{
return _model->computeWorldToLocalMatrix(*p0->_model ,p1->_model);

}
 void osg::QReflect_Transform::setReferenceFrame(osg::QReflect_Transform::ReferenceFrame p0){
 _model->setReferenceFrame(static_cast<osg::Transform::ReferenceFrame>(p0));

}
osg::QReflect_Transform*osg::QReflect_Transform::asTransform()const{
PMOCSAFEADDOBJECT(*_model->asTransform(),inst);
return inst.isValid()?((osg::QReflect_Transform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Transform*osg::QReflect_Transform::asTransform(){
PMOCSAFEADDOBJECT(*_model->asTransform(),inst);
return inst.isValid()?((osg::QReflect_Transform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Transform::ReferenceFrame  osg::QReflect_Transform::getReferenceFrame()const{
osg::QReflect_Transform::ReferenceFrame ret=static_cast<osg::QReflect_Transform::ReferenceFrame>( _model->getReferenceFrame());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_Transform::QReflect_Transform(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Transform*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Transform::~QReflect_Transform( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Transform::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Transform::createInstance( ){
osg::ref_ptr<osg::Transform> osg_Transform_ptr	;
osg_Transform_ptr = new osg::Transform ()	;
Instance o(PMOCGETMETACLASS("osg::Transform"),(void*)osg_Transform_ptr.get()		,true);
_managedinstances.insert(osg_Transform_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Transform::MetaQReflect_Transform():MetaQQuickClass( "osg::Transform"){
_typeid=&typeid(osg::Transform );           qRegisterMetaType<QMLTransform>();
qmlRegisterType<QReflect_Transform>("pmoc.osg",1,0,"QReflect_Transform");
           qmlRegisterType<QMLTransform>("pmoc.osg",1,0,"QMLTransform");
};
const std::string osg::MetaQReflect_Transform::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Transform::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Transform::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Transform::createQQModel(Instance*i){ //return new MetaQReflect_Transform_QModel(i);}
QMLTransform *ret =new QMLTransform(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::Transformis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::Transformis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Transform_pmoc.cpp"
#endif



