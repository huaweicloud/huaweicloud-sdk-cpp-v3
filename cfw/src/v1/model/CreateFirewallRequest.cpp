

#include "huaweicloud/cfw/v1/model/CreateFirewallRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateFirewallRequest::CreateFirewallRequest()
{
    xClientToken_ = "";
    xClientTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFirewallRequest::~CreateFirewallRequest() = default;

void CreateFirewallRequest::validate()
{
}

web::json::value CreateFirewallRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xClientTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Client-Token")] = ModelBase::toJson(xClientToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateFirewallRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Client-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Client-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXClientToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateFirewallReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateFirewallRequest::getXClientToken() const
{
    return xClientToken_;
}

void CreateFirewallRequest::setXClientToken(const std::string& value)
{
    xClientToken_ = value;
    xClientTokenIsSet_ = true;
}

bool CreateFirewallRequest::xClientTokenIsSet() const
{
    return xClientTokenIsSet_;
}

void CreateFirewallRequest::unsetxClientToken()
{
    xClientTokenIsSet_ = false;
}

CreateFirewallReq CreateFirewallRequest::getBody() const
{
    return body_;
}

void CreateFirewallRequest::setBody(const CreateFirewallReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFirewallRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFirewallRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


