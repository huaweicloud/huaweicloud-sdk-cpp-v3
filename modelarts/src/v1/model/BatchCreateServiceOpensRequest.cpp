

#include "huaweicloud/modelarts/v1/model/BatchCreateServiceOpensRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchCreateServiceOpensRequest::BatchCreateServiceOpensRequest()
{
    bodyIsSet_ = false;
}

BatchCreateServiceOpensRequest::~BatchCreateServiceOpensRequest() = default;

void BatchCreateServiceOpensRequest::validate()
{
}

web::json::value BatchCreateServiceOpensRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateServiceOpensRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServiceBatchOpenRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ServiceBatchOpenRequest BatchCreateServiceOpensRequest::getBody() const
{
    return body_;
}

void BatchCreateServiceOpensRequest::setBody(const ServiceBatchOpenRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateServiceOpensRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateServiceOpensRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


