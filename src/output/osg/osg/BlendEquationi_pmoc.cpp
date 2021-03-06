#include <osg/BlendEquationi>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BlendEquationi_pmoc.hpp>
#include <customCode/osg/BlendEquationi_pmoc.hpp>
#include <customCode/osg/BlendEquation_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_BlendEquationi::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_BlendEquationi::getMember()const{
return _model->getMember();

}
const unsigned int osg::QReflect_BlendEquationi::getIndex()const{return _model->getIndex();}
void  osg::QReflect_BlendEquationi::setIndex(const unsigned int &par){_model->setIndex(par);emit IndexChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_BlendEquationi::QReflect_BlendEquationi(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BlendEquationi*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BlendEquationi::~QReflect_BlendEquationi( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BlendEquationi::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BlendEquationi::createInstance( ){
osg::ref_ptr<osg::BlendEquationi> osg_BlendEquationi_ptr	;
osg_BlendEquationi_ptr = new osg::BlendEquationi ()	;
Instance o(PMOCGETMETACLASS("osg::BlendEquationi"),(void*)osg_BlendEquationi_ptr.get()		,true);
_managedinstances.insert(osg_BlendEquationi_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BlendEquationi::MetaQReflect_BlendEquationi():MetaQQuickClass( "osg::BlendEquationi"){
_typeid=&typeid(osg::BlendEquationi );           qRegisterMetaType<QMLBlendEquationi>();
qmlRegisterType<QReflect_BlendEquationi>("pmoc.osg",1,0,"QReflect_BlendEquationi");
           qmlRegisterType<QMLBlendEquationi>("pmoc.osg",1,0,"QMLBlendEquationi");
};
const std::string osg::MetaQReflect_BlendEquationi::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BlendEquationi::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BlendEquationi::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BlendEquationi::createQQModel(Instance*i){ //return new MetaQReflect_BlendEquationi_QModel(i);}
QMLBlendEquationi *ret =new QMLBlendEquationi(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BlendEquation *mother =dynamic_cast<osg::BlendEquation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BlendEquation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BlendEquation model for osg::BlendEquationiis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BlendEquation");
if(!cl){std::cerr<<"osg::BlendEquation QQModel for osg::BlendEquationiis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendEquationi_pmoc.cpp"
#endif


