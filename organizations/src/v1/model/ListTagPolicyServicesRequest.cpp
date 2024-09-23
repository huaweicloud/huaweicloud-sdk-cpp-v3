

#include "huaweicloud/organizations/v1/model/ListTagPolicyServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTagPolicyServicesRequest::ListTagPolicyServicesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListTagPolicyServicesRequest::~ListTagPolicyServicesRequest() = default;

void ListTagPolicyServicesRequest::validate()
{
}

web::json::value ListTagPolicyServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ListTagPolicyServicesRequest::fromJson(const web::json::value& val)
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


std::string ListTagPolicyServicesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListTagPolicyServicesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListTagPolicyServicesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListTagPolicyServicesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


