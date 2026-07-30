

#include "huaweicloud/modelarts/v1/model/Endpoints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Endpoints::Endpoints()
{
    devService_ = "";
    devServiceIsSet_ = false;
    extensionsIsSet_ = false;
    sshKeysIsSet_ = false;
}

Endpoints::~Endpoints() = default;

void Endpoints::validate()
{
}

web::json::value Endpoints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(devServiceIsSet_) {
        val[utility::conversions::to_string_t("dev_service")] = ModelBase::toJson(devService_);
    }
    if(extensionsIsSet_) {
        val[utility::conversions::to_string_t("extensions")] = ModelBase::toJson(extensions_);
    }
    if(sshKeysIsSet_) {
        val[utility::conversions::to_string_t("ssh_keys")] = ModelBase::toJson(sshKeys_);
    }

    return val;
}
bool Endpoints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dev_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dev_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extensions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extensions"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssh_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssh_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshKeys(refVal);
        }
    }
    return ok;
}


std::string Endpoints::getDevService() const
{
    return devService_;
}

void Endpoints::setDevService(const std::string& value)
{
    devService_ = value;
    devServiceIsSet_ = true;
}

bool Endpoints::devServiceIsSet() const
{
    return devServiceIsSet_;
}

void Endpoints::unsetdevService()
{
    devServiceIsSet_ = false;
}

std::map<std::string, std::string>& Endpoints::getExtensions()
{
    return extensions_;
}

void Endpoints::setExtensions(const std::map<std::string, std::string>& value)
{
    extensions_ = value;
    extensionsIsSet_ = true;
}

bool Endpoints::extensionsIsSet() const
{
    return extensionsIsSet_;
}

void Endpoints::unsetextensions()
{
    extensionsIsSet_ = false;
}

std::vector<std::string>& Endpoints::getSshKeys()
{
    return sshKeys_;
}

void Endpoints::setSshKeys(const std::vector<std::string>& value)
{
    sshKeys_ = value;
    sshKeysIsSet_ = true;
}

bool Endpoints::sshKeysIsSet() const
{
    return sshKeysIsSet_;
}

void Endpoints::unsetsshKeys()
{
    sshKeysIsSet_ = false;
}

}
}
}
}
}


