
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Test_Oo_AbstractClass) {

	ZEPHIR_REGISTER_CLASS(Test\\Oo, AbstractClass, test, oo_abstractclass, test_oo_abstractclass_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	return SUCCESS;

}

PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclaration) {



}

PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclarationWithReturnType) {



}

PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclarationWithParameter) {

	zval *a;

	zephir_fetch_params(0, 1, 0, &a);




}

PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclarationWithParameterAndReturnType) {

	zval *a;

	zephir_fetch_params(0, 1, 0, &a);




}

/**
 *
 */
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclaration) {



}

/**
 *
 */
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithReturnType) {



}

/**
 *
 */
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithParameter) {

	zval *a;

	zephir_fetch_params(0, 1, 0, &a);




}

/**
 *
 */
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithParameterAndReturnType) {

	zval *a;

	zephir_fetch_params(0, 1, 0, &a);




}

