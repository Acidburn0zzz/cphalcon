
<<<<<<< HEAD:ext/phalcon/cache/backend/xcache.zep.h
extern zend_class_entry *phalcon_cache_backend_xcache_ce;

ZEPHIR_INIT_CLASS(Phalcon_Cache_Backend_Xcache);

PHP_METHOD(Phalcon_Cache_Backend_Xcache, __construct);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, get);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, save);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, delete);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, queryKeys);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, exists);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, increment);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, decrement);
PHP_METHOD(Phalcon_Cache_Backend_Xcache, flush);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_xcache___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, frontend, Phalcon\\Cache\\FrontendInterface, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()
=======
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  |          Vladimir Kolesnikov <vladimir@extrememember.com>              |
  +------------------------------------------------------------------------+
*/

#ifndef PHALCON_CACHE_BACKEND_XCACHE_H
#define PHALCON_CACHE_BACKEND_XCACHE_H
>>>>>>> master:ext/cache/backend/xcache.h

#include "php_phalcon.h"

extern zend_class_entry *phalcon_cache_backend_xcache_ce;

<<<<<<< HEAD:ext/phalcon/cache/backend/xcache.zep.h
ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_xcache_increment, 0, 0, 1)
	ZEND_ARG_INFO(0, keyName)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_xcache_decrement, 0, 0, 1)
	ZEND_ARG_INFO(0, keyName)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_cache_backend_xcache_method_entry) {
	PHP_ME(Phalcon_Cache_Backend_Xcache, __construct, arginfo_phalcon_cache_backend_xcache___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Cache_Backend_Xcache, get, arginfo_phalcon_cache_backend_xcache_get, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Cache_Backend_Xcache, save, arginfo_phalcon_cache_backend_xcache_save, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Cache_Backend_Xcache, delete, arginfo_phalcon_cache_backend_xcache_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Cache_Backend_Xcache, queryKeys, arginfo_phalcon_cache_backend_xcache_querykeys, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Cache_Backend_Xcache, exists, arginfo_phalcon_cache_backend_xcache_exists, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Cache_Backend_Xcache, increment, arginfo_phalcon_cache_backend_xcache_increment, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Cache_Backend_Xcache, decrement, arginfo_phalcon_cache_backend_xcache_decrement, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Cache_Backend_Xcache, flush, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
=======
PHALCON_INIT_CLASS(Phalcon_Cache_Backend_Xcache);

#endif /* PHALCON_CACHE_BACKEND_XCACHE_H */
>>>>>>> master:ext/cache/backend/xcache.h