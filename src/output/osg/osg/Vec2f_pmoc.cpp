#include <osg/Vec2f>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec2f::isNaN()const{
return _model->isNaN();

}
 bool  osg::QReflect_Vec2f::valid()const{
return _model->valid();

}
 float  osg::QReflect_Vec2f::length()const{
return _model->length();

}
 float  osg::QReflect_Vec2f::length2()const{
return _model->length2();

}
 float  osg::QReflect_Vec2f::normalize(){
return _model->normalize();

}
 float  osg::QReflect_Vec2f::x()const{
return _model->x();

}
 float  osg::QReflect_Vec2f::y()const{
return _model->y();

}
 float&  osg::QReflect_Vec2f::x(){
return _model->x();

}
 float&  osg::QReflect_Vec2f::y(){
return _model->y();

}
 float*  osg::QReflect_Vec2f::ptr(){
return _model->ptr();

}
 void osg::QReflect_Vec2f::set( float p0 , float p1){
 _model->set(p0 ,p1);

}
 void osg::QReflect_Vec2f::set(osg::QReflect_Vec2f *p0){
 _model->set(*p0->_model);

}
const  float*  osg::QReflect_Vec2f::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec2f::QReflect_Vec2f(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2f*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2f::~QReflect_Vec2f( ){
 }
///update this according _model new state
void osg::QReflect_Vec2f::updateModel(){
}
Instance osg::MetaQReflect_Vec2f::createInstance( ){
osg::Vec2f* osg_Vec2f_ptr	;
osg_Vec2f_ptr= new osg::Vec2f()	;
Instance o(PMOCGETMETACLASS("osg::Vec2f"),(void*)osg_Vec2f_ptr	,true);
_managedinstances.insert(osg_Vec2f_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2f::MetaQReflect_Vec2f():MetaQQuickClass( "osg::Vec2f"){
_typeid=&typeid(osg::Vec2f );           qRegisterMetaType<QMLVec2f>();
qmlRegisterType<QReflect_Vec2f>("pmoc.osg",1,0,"QReflect_Vec2f");
           qmlRegisterType<QMLVec2f>("pmoc.osg",1,0,"QMLVec2f");
};
const std::string osg::MetaQReflect_Vec2f::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2f::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2f::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2f::createQQModel(Instance*i){ //return new MetaQReflect_Vec2f_QModel(i);}
QMLVec2f *ret =new QMLVec2f(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2f_pmoc.cpp"
#endif


