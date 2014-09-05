#include "osgUtil_IntersectVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/IntersectVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_IntersectVisitorQQQ_QModel::osgUtil_IntersectVisitorQQQ_QModel(const osgUtil_IntersectVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_IntersectVisitorQQQ_QModel::~osgUtil_IntersectVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_IntersectVisitorQQQ_QModel::osgUtil_IntersectVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::IntersectVisitor*>(i->ptr);
}
QQuickItem *osgUtil_IntersectVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_IntersectVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_IntersectVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_IntersectVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_IntersectVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_IntersectVisitorQQQ_QModel(i);}