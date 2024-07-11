

#include "huaweicloud/gaussdbforopengauss/v3/model/PluginExtensions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




PluginExtensions::PluginExtensions()
{
    extensionName_ = "";
    extensionNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

PluginExtensions::~PluginExtensions() = default;

void PluginExtensions::validate()
{
}

web::json::value PluginExtensions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extensionNameIsSet_) {
        val[utility::conversions::to_string_t("extension_name")] = ModelBase::toJson(extensionName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool PluginExtensions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extension_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string PluginExtensions::getExtensionName() const
{
    return extensionName_;
}

void PluginExtensions::setExtensionName(const std::string& value)
{
    extensionName_ = value;
    extensionNameIsSet_ = true;
}

bool PluginExtensions::extensionNameIsSet() const
{
    return extensionNameIsSet_;
}

void PluginExtensions::unsetextensionName()
{
    extensionNameIsSet_ = false;
}

std::string PluginExtensions::getStatus() const
{
    return status_;
}

void PluginExtensions::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PluginExtensions::statusIsSet() const
{
    return statusIsSet_;
}

void PluginExtensions::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


