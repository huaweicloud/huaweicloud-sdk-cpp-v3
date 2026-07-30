

#include "huaweicloud/modelarts/v1/model/StopInferServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopInferServiceRequest::StopInferServiceRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

StopInferServiceRequest::~StopInferServiceRequest() = default;

void StopInferServiceRequest::validate()
{
}

web::json::value StopInferServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool StopInferServiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string StopInferServiceRequest::getServiceId() const
{
    return serviceId_;
}

void StopInferServiceRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool StopInferServiceRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void StopInferServiceRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string StopInferServiceRequest::getContentType() const
{
    return contentType_;
}

void StopInferServiceRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool StopInferServiceRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void StopInferServiceRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


