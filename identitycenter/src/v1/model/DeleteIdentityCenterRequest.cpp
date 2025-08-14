

#include "huaweicloud/identitycenter/v1/model/DeleteIdentityCenterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteIdentityCenterRequest::DeleteIdentityCenterRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

DeleteIdentityCenterRequest::~DeleteIdentityCenterRequest() = default;

void DeleteIdentityCenterRequest::validate()
{
}

web::json::value DeleteIdentityCenterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool DeleteIdentityCenterRequest::fromJson(const web::json::value& val)
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


std::string DeleteIdentityCenterRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteIdentityCenterRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteIdentityCenterRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteIdentityCenterRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


