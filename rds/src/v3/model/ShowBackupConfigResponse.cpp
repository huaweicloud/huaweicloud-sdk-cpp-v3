

#include "huaweicloud/rds/v3/model/ShowBackupConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupConfigResponse::ShowBackupConfigResponse()
{
    defaultBackupMethod_ = "";
    defaultBackupMethodIsSet_ = false;
}

ShowBackupConfigResponse::~ShowBackupConfigResponse() = default;

void ShowBackupConfigResponse::validate()
{
}

web::json::value ShowBackupConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defaultBackupMethodIsSet_) {
        val[utility::conversions::to_string_t("default_backup_method")] = ModelBase::toJson(defaultBackupMethod_);
    }

    return val;
}
bool ShowBackupConfigResponse::fromJson(const web::json::value& val)
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


std::string ShowBackupConfigResponse::getDefaultBackupMethod() const
{
    return defaultBackupMethod_;
}

void ShowBackupConfigResponse::setDefaultBackupMethod(const std::string& value)
{
    defaultBackupMethod_ = value;
    defaultBackupMethodIsSet_ = true;
}

bool ShowBackupConfigResponse::defaultBackupMethodIsSet() const
{
    return defaultBackupMethodIsSet_;
}

void ShowBackupConfigResponse::unsetdefaultBackupMethod()
{
    defaultBackupMethodIsSet_ = false;
}

}
}
}
}
}


