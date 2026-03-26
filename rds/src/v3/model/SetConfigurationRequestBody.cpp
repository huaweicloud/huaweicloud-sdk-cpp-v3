

#include "huaweicloud/rds/v3/model/SetConfigurationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetConfigurationRequestBody::SetConfigurationRequestBody()
{
    defaultBackupMethod_ = "";
    defaultBackupMethodIsSet_ = false;
}

SetConfigurationRequestBody::~SetConfigurationRequestBody() = default;

void SetConfigurationRequestBody::validate()
{
}

web::json::value SetConfigurationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defaultBackupMethodIsSet_) {
        val[utility::conversions::to_string_t("default_backup_method")] = ModelBase::toJson(defaultBackupMethod_);
    }

    return val;
}
bool SetConfigurationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("default_backup_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_backup_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBackupMethod(refVal);
        }
    }
    return ok;
}


std::string SetConfigurationRequestBody::getDefaultBackupMethod() const
{
    return defaultBackupMethod_;
}

void SetConfigurationRequestBody::setDefaultBackupMethod(const std::string& value)
{
    defaultBackupMethod_ = value;
    defaultBackupMethodIsSet_ = true;
}

bool SetConfigurationRequestBody::defaultBackupMethodIsSet() const
{
    return defaultBackupMethodIsSet_;
}

void SetConfigurationRequestBody::unsetdefaultBackupMethod()
{
    defaultBackupMethodIsSet_ = false;
}

}
}
}
}
}


