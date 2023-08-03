

#include "huaweicloud/rds/v3/model/ExtensionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExtensionRequest::ExtensionRequest()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    extensionName_ = "";
    extensionNameIsSet_ = false;
}

ExtensionRequest::~ExtensionRequest() = default;

void ExtensionRequest::validate()
{
}

web::json::value ExtensionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(extensionNameIsSet_) {
        val[utility::conversions::to_string_t("extension_name")] = ModelBase::toJson(extensionName_);
    }

    return val;
}

bool ExtensionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionName(refVal);
        }
    }
    return ok;
}

std::string ExtensionRequest::getDatabaseName() const
{
    return databaseName_;
}

void ExtensionRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ExtensionRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ExtensionRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ExtensionRequest::getExtensionName() const
{
    return extensionName_;
}

void ExtensionRequest::setExtensionName(const std::string& value)
{
    extensionName_ = value;
    extensionNameIsSet_ = true;
}

bool ExtensionRequest::extensionNameIsSet() const
{
    return extensionNameIsSet_;
}

void ExtensionRequest::unsetextensionName()
{
    extensionNameIsSet_ = false;
}

}
}
}
}
}


