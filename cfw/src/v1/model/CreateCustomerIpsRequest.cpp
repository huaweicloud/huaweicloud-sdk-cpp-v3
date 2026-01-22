

#include "huaweicloud/cfw/v1/model/CreateCustomerIpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateCustomerIpsRequest::CreateCustomerIpsRequest()
{
    bodyIsSet_ = false;
}

CreateCustomerIpsRequest::~CreateCustomerIpsRequest() = default;

void CreateCustomerIpsRequest::validate()
{
}

web::json::value CreateCustomerIpsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCustomerIpsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


CustomerIpsSaveDto CreateCustomerIpsRequest::getBody() const
{
    return body_;
}

void CreateCustomerIpsRequest::setBody(const CustomerIpsSaveDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCustomerIpsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCustomerIpsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


