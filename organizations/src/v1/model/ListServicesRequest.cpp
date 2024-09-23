

#include "huaweicloud/organizations/v1/model/ListServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListServicesRequest::ListServicesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListServicesRequest::~ListServicesRequest() = default;

void ListServicesRequest::validate()
{
}

web::json::value ListServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ListServicesRequest::fromJson(const web::json::value& val)
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


std::string ListServicesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListServicesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListServicesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListServicesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


