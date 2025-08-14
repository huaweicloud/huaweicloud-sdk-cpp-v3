

#include "huaweicloud/identitycenter/v1/model/StartIdentityCenterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




StartIdentityCenterRequest::StartIdentityCenterRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

StartIdentityCenterRequest::~StartIdentityCenterRequest() = default;

void StartIdentityCenterRequest::validate()
{
}

web::json::value StartIdentityCenterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool StartIdentityCenterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    return ok;
}


std::string StartIdentityCenterRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void StartIdentityCenterRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool StartIdentityCenterRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void StartIdentityCenterRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


