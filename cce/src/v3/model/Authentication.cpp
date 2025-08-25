

#include "huaweicloud/cce/v3/model/Authentication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Authentication::Authentication()
{
    mode_ = "";
    modeIsSet_ = false;
    authenticatingProxyIsSet_ = false;
}

Authentication::~Authentication() = default;

void Authentication::validate()
{
}

web::json::value Authentication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(authenticatingProxyIsSet_) {
        val[utility::conversions::to_string_t("authenticatingProxy")] = ModelBase::toJson(authenticatingProxy_);
    }

    return val;
}
bool Authentication::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authenticatingProxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authenticatingProxy"));
        if(!fieldValue.is_null())
        {
            AuthenticatingProxy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthenticatingProxy(refVal);
        }
    }
    return ok;
}


std::string Authentication::getMode() const
{
    return mode_;
}

void Authentication::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool Authentication::modeIsSet() const
{
    return modeIsSet_;
}

void Authentication::unsetmode()
{
    modeIsSet_ = false;
}

AuthenticatingProxy Authentication::getAuthenticatingProxy() const
{
    return authenticatingProxy_;
}

void Authentication::setAuthenticatingProxy(const AuthenticatingProxy& value)
{
    authenticatingProxy_ = value;
    authenticatingProxyIsSet_ = true;
}

bool Authentication::authenticatingProxyIsSet() const
{
    return authenticatingProxyIsSet_;
}

void Authentication::unsetauthenticatingProxy()
{
    authenticatingProxyIsSet_ = false;
}

}
}
}
}
}


