

#include "huaweicloud/ram/v1/model/ListQuotaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListQuotaRequest::ListQuotaRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListQuotaRequest::~ListQuotaRequest() = default;

void ListQuotaRequest::validate()
{
}

web::json::value ListQuotaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ListQuotaRequest::fromJson(const web::json::value& val)
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


std::string ListQuotaRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListQuotaRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListQuotaRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListQuotaRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


