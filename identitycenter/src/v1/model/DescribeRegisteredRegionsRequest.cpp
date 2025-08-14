

#include "huaweicloud/identitycenter/v1/model/DescribeRegisteredRegionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeRegisteredRegionsRequest::DescribeRegisteredRegionsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

DescribeRegisteredRegionsRequest::~DescribeRegisteredRegionsRequest() = default;

void DescribeRegisteredRegionsRequest::validate()
{
}

web::json::value DescribeRegisteredRegionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool DescribeRegisteredRegionsRequest::fromJson(const web::json::value& val)
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


std::string DescribeRegisteredRegionsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeRegisteredRegionsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeRegisteredRegionsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeRegisteredRegionsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


