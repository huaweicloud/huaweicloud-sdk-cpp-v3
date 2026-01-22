

#include "huaweicloud/cfw/v1/model/BatchUpdateCustomerIpsActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchUpdateCustomerIpsActionRequest::BatchUpdateCustomerIpsActionRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateCustomerIpsActionRequest::~BatchUpdateCustomerIpsActionRequest() = default;

void BatchUpdateCustomerIpsActionRequest::validate()
{
}

web::json::value BatchUpdateCustomerIpsActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateCustomerIpsActionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IpsCustomerBatchDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IpsCustomerBatchDto BatchUpdateCustomerIpsActionRequest::getBody() const
{
    return body_;
}

void BatchUpdateCustomerIpsActionRequest::setBody(const IpsCustomerBatchDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateCustomerIpsActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateCustomerIpsActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


