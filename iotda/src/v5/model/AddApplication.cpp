

#include "huaweicloud/iotda/v5/model/AddApplication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddApplication::AddApplication()
{
    appName_ = "";
    appNameIsSet_ = false;
}

AddApplication::~AddApplication() = default;

void AddApplication::validate()
{
}

web::json::value AddApplication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }

    return val;
}
bool AddApplication::fromJson(const web::json::value& val)
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


std::string AddApplication::getAppName() const
{
    return appName_;
}

void AddApplication::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AddApplication::appNameIsSet() const
{
    return appNameIsSet_;
}

void AddApplication::unsetappName()
{
    appNameIsSet_ = false;
}

}
}
}
}
}


