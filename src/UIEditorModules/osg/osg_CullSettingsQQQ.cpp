#include "osg_CullSettingsQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/CullSettings>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CullSettingsQQQ_QModel::osg_CullSettingsQQQ_QModel(const osg_CullSettingsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CullSettingsQQQ_QModel::~osg_CullSettingsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CullSettingsQQQ_QModel::osg_CullSettingsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CullSettings*>(i->ptr);
}
QQuickItem *osg_CullSettingsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CullSettingsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CullSettingsQQQ::PREcompoQML()const{return string("");}
const std::string osg_CullSettingsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CullSettingsQQQ::createQQModel(Instance*i){ return new osg_CullSettingsQQQ_QModel(i);}