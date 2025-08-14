

#include "huaweicloud/iotda/v5/model/UpdateApplicationDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateApplicationDTO::UpdateApplicationDTO()
{
    appName_ = "";
    appNameIsSet_ = false;
}

UpdateApplicationDTO::~UpdateApplicationDTO() = default;

void UpdateApplicationDTO::validate()
{
}

web::json::value UpdateApplicationDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }

    return val;
}
bool UpdateApplicationDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationDTO::getAppName() const
{
    return appName_;
}

void UpdateApplicationDTO::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool UpdateApplicationDTO::appNameIsSet() const
{
    return appNameIsSet_;
}

void UpdateApplicationDTO::unsetappName()
{
    appNameIsSet_ = false;
}

}
}
}
}
}


