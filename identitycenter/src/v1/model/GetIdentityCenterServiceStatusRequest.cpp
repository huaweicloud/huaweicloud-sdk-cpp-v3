

#include "huaweicloud/identitycenter/v1/model/GetIdentityCenterServiceStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetIdentityCenterServiceStatusRequest::GetIdentityCenterServiceStatusRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

GetIdentityCenterServiceStatusRequest::~GetIdentityCenterServiceStatusRequest() = default;

void GetIdentityCenterServiceStatusRequest::validate()
{
}

web::json::value GetIdentityCenterServiceStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool GetIdentityCenterServiceStatusRequest::fromJson(const web::json::value& val)
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


std::string GetIdentityCenterServiceStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetIdentityCenterServiceStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetIdentityCenterServiceStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetIdentityCenterServiceStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


