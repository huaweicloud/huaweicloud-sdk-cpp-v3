

#include "huaweicloud/cfw/v1/model/BatchDeleteCustomerIpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteCustomerIpsRequest::BatchDeleteCustomerIpsRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteCustomerIpsRequest::~BatchDeleteCustomerIpsRequest() = default;

void BatchDeleteCustomerIpsRequest::validate()
{
}

web::json::value BatchDeleteCustomerIpsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteCustomerIpsRequest::fromJson(const web::json::value& val)
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


IpsCustomerBatchDto BatchDeleteCustomerIpsRequest::getBody() const
{
    return body_;
}

void BatchDeleteCustomerIpsRequest::setBody(const IpsCustomerBatchDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteCustomerIpsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteCustomerIpsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


