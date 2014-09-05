#include "osgUtil_SmoothingVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/SmoothingVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_SmoothingVisitorQQQ_QModel::osgUtil_SmoothingVisitorQQQ_QModel(const osgUtil_SmoothingVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_SmoothingVisitorQQQ_QModel::~osgUtil_SmoothingVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_SmoothingVisitorQQQ_QModel::osgUtil_SmoothingVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::SmoothingVisitor*>(i->ptr);
}
QQuickItem *osgUtil_SmoothingVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_SmoothingVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_SmoothingVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_SmoothingVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_SmoothingVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_SmoothingVisitorQQQ_QModel(i);}