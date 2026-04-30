

#include "huaweicloud/cpcs/v1/model/AuthObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthObject::AuthObject()
{
    appId_ = "";
    appIdIsSet_ = false;
}

AuthObject::~AuthObject() = default;

void AuthObject::validate()
{
}

web::json::value AuthObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool AuthObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string AuthObject::getAppId() const
{
    return appId_;
}

void AuthObject::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AuthObject::appIdIsSet() const
{
    return appIdIsSet_;
}

void AuthObject::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


