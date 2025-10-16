

#include "huaweicloud/cpcs/v1/model/AuthObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthObject::AuthObject()
{
    authIsSet_ = false;
    scopeIsSet_ = false;
}

AuthObject::~AuthObject() = default;

void AuthObject::validate()
{
}

web::json::value AuthObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authIsSet_) {
        val[utility::conversions::to_string_t("auth")] = ModelBase::toJson(auth_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }

    return val;
}
bool AuthObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth"));
        if(!fieldValue.is_null())
        {
            AuthObject_auth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            AuthObject_scope refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    return ok;
}


AuthObject_auth AuthObject::getAuth() const
{
    return auth_;
}

void AuthObject::setAuth(const AuthObject_auth& value)
{
    auth_ = value;
    authIsSet_ = true;
}

bool AuthObject::authIsSet() const
{
    return authIsSet_;
}

void AuthObject::unsetauth()
{
    authIsSet_ = false;
}

AuthObject_scope AuthObject::getScope() const
{
    return scope_;
}

void AuthObject::setScope(const AuthObject_scope& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool AuthObject::scopeIsSet() const
{
    return scopeIsSet_;
}

void AuthObject::unsetscope()
{
    scopeIsSet_ = false;
}

}
}
}
}
}


