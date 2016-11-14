#include "Helpers/configuremanager.h"
#include <QVariant>

ConfigureManager::ConfigureManager() {
}

ConfigureManager::~ConfigureManager() {
}

NetworkManager *ConfigureManager::getNetworkManager() {
    return networkManager_;
}

void ConfigureManager::setNetworkManager(NetworkManager *manager) {
    networkManager_ = manager;
}

QString ConfigureManager::getLogin() {
    return settings_.value("auth/login", "").toString();
}

QString ConfigureManager::getPassword() {
    return settings_.value("auth/password", "").toString();
}

QString ConfigureManager::getToken() {
    return settings_.value("auth/token", "").toString();
}

void ConfigureManager::setLogin(QString login) {
    settings_.setValue("auth/login", QVariant::fromValue(login));
}

void ConfigureManager::setPassword(QString password) {
    settings_.setValue("auth/password", QVariant::fromValue(password));
}

void ConfigureManager::setToken(QString token) {
    settings_.setValue("auth/token", QVariant::fromValue(token));
}
