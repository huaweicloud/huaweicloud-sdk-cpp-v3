

#include "huaweicloud/cfw/v1/model/CreateFirewallRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateFirewallRequest::CreateFirewallRequest()
{
    bodyIsSet_ = false;
}

CreateFirewallRequest::~CreateFirewallRequest() = default;

void CreateFirewallRequest::validate()
{
}

web::json::value CreateFirewallRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateFirewallRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


