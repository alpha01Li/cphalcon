
extern zend_class_entry *phalcon_events_managerinterface_ce;

ZEPHIR_INIT_CLASS(Phalcon_Events_ManagerInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_events_managerinterface_attach, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_events_managerinterface_dettachall, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_events_managerinterface_fire, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_events_managerinterface_getlisteners, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_events_managerinterface_method_entry) {
	PHP_ABSTRACT_ME(Phalcon_Events_ManagerInterface, attach, arginfo_phalcon_events_managerinterface_attach)
	PHP_ABSTRACT_ME(Phalcon_Events_ManagerInterface, dettachAll, arginfo_phalcon_events_managerinterface_dettachall)
	PHP_ABSTRACT_ME(Phalcon_Events_ManagerInterface, fire, arginfo_phalcon_events_managerinterface_fire)
	PHP_ABSTRACT_ME(Phalcon_Events_ManagerInterface, getListeners, arginfo_phalcon_events_managerinterface_getlisteners)
	PHP_FE_END
};