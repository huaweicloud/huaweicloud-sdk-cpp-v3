

#include "huaweicloud/cloudtest/v1/model/CreateServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateServiceRequest::CreateServiceRequest()
{
    bodyIsSet_ = false;
}

CreateServiceRequest::~CreateServiceRequest() = default;

void CreateServiceRequest::validate()
{
}

web::json::value CreateServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateServiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ServiceRequestBody CreateServiceRequest::getBody() const
{
    return body_;
}

void CreateServiceRequest::setBody(const ServiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateServiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateServiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


