#include <osgParticle/AngularDampingOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/AngularDampingOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLAngularDampingOperator::QMLAngularDampingOperator(pmoc::Instance *i,QObject* parent):QReflect_AngularDampingOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLAngularDampingOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_AngularDampingOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLAngularDampingOperator::updateModel(){
	  QReflect_AngularDampingOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AngularDampingOperator_pmoc.cpp"
#endif




