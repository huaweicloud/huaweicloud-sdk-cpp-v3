

#include "huaweicloud/cfw/v1/model/UpdateCustomerIpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateCustomerIpsRequest::UpdateCustomerIpsRequest()
{
    ipsCfwId_ = "";
    ipsCfwIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateCustomerIpsRequest::~UpdateCustomerIpsRequest() = default;

void UpdateCustomerIpsRequest::validate()
{
}

web::json::value UpdateCustomerIpsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsCfwIdIsSet_) {
        val[utility::conversions::to_string_t("ips_cfw_id")] = ModelBase::toJson(ipsCfwId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateCustomerIpsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips_cfw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_cfw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsCfwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CustomerIpsSaveDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateCustomerIpsRequest::getIpsCfwId() const
{
    return ipsCfwId_;
}

void UpdateCustomerIpsRequest::setIpsCfwId(const std::string& value)
{
    ipsCfwId_ = value;
    ipsCfwIdIsSet_ = true;
}

bool UpdateCustomerIpsRequest::ipsCfwIdIsSet() const
{
    return ipsCfwIdIsSet_;
}

void UpdateCustomerIpsRequest::unsetipsCfwId()
{
    ipsCfwIdIsSet_ = false;
}

CustomerIpsSaveDto UpdateCustomerIpsRequest::getBody() const
{
    return body_;
}

void UpdateCustomerIpsRequest::setBody(const CustomerIpsSaveDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCustomerIpsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCustomerIpsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


