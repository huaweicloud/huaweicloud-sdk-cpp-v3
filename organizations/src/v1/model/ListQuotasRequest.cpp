

#include "huaweicloud/organizations/v1/model/ListQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListQuotasRequest::ListQuotasRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListQuotasRequest::~ListQuotasRequest() = default;

void ListQuotasRequest::validate()
{
}

web::json::value ListQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ListQuotasRequest::fromJson(const web::json::value& val)
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


std::string ListQuotasRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListQuotasRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListQuotasRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListQuotasRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


