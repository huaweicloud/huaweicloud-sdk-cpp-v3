

#include "huaweicloud/cpcs/v1/model/AuthObject_auth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthObject_auth::AuthObject_auth()
{
    accessKeyIsSet_ = false;
}

AuthObject_auth::~AuthObject_auth() = default;

void AuthObject_auth::validate()
{
}

web::json::value AuthObject_auth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIsSet_) {
        val[utility::conversions::to_string_t("accessKey")] = ModelBase::toJson(accessKey_);
    }

    return val;
}
bool AuthObject_auth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accessKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessKey"));
        if(!fieldValue.is_null())
        {
            AuthObject_auth_accessKey refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKey(refVal);
        }
    }
    return ok;
}


AuthObject_auth_accessKey AuthObject_auth::getAccessKey() const
{
    return accessKey_;
}

void AuthObject_auth::setAccessKey(const AuthObject_auth_accessKey& value)
{
    accessKey_ = value;
    accessKeyIsSet_ = true;
}

bool AuthObject_auth::accessKeyIsSet() const
{
    return accessKeyIsSet_;
}

void AuthObject_auth::unsetaccessKey()
{
    accessKeyIsSet_ = false;
}

}
}
}
}
}


