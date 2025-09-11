

#include "huaweicloud/functiongraph/v2/model/ServiceBridgeVersion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ServiceBridgeVersion::ServiceBridgeVersion()
{
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
}

ServiceBridgeVersion::~ServiceBridgeVersion() = default;

void ServiceBridgeVersion::validate()
{
}

web::json::value ServiceBridgeVersion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(codeUrlIsSet_) {
        val[utility::conversions::to_string_t("code_url")] = ModelBase::toJson(codeUrl_);
    }

    return val;
}
bool ServiceBridgeVersion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeUrl(refVal);
        }
    }
    return ok;
}


std::string ServiceBridgeVersion::getName() const
{
    return name_;
}

void ServiceBridgeVersion::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceBridgeVersion::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceBridgeVersion::unsetname()
{
    nameIsSet_ = false;
}

std::string ServiceBridgeVersion::getVersion() const
{
    return version_;
}

void ServiceBridgeVersion::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ServiceBridgeVersion::versionIsSet() const
{
    return versionIsSet_;
}

void ServiceBridgeVersion::unsetversion()
{
    versionIsSet_ = false;
}

std::string ServiceBridgeVersion::getCodeUrl() const
{
    return codeUrl_;
}

void ServiceBridgeVersion::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool ServiceBridgeVersion::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void ServiceBridgeVersion::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

}
}
}
}
}


