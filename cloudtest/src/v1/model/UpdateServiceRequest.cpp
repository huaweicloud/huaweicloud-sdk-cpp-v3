

#include "huaweicloud/cloudtest/v1/model/UpdateServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateServiceRequest::UpdateServiceRequest()
{
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServiceRequest::~UpdateServiceRequest() = default;

void UpdateServiceRequest::validate()
{
}

web::json::value UpdateServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateServiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
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


int32_t UpdateServiceRequest::getServiceId() const
{
    return serviceId_;
}

void UpdateServiceRequest::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateServiceRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateServiceRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

ServiceRequestBody UpdateServiceRequest::getBody() const
{
    return body_;
}

void UpdateServiceRequest::setBody(const ServiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


