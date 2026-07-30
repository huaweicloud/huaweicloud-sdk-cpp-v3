

#include "huaweicloud/modelarts/v1/model/ShowInferServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferServiceRequest::ShowInferServiceRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowInferServiceRequest::~ShowInferServiceRequest() = default;

void ShowInferServiceRequest::validate()
{
}

web::json::value ShowInferServiceRequest::toJson() const
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
bool ShowInferServiceRequest::fromJson(const web::json::value& val)
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


std::string ShowInferServiceRequest::getServiceId() const
{
    return serviceId_;
}

void ShowInferServiceRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowInferServiceRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowInferServiceRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowInferServiceRequest::getContentType() const
{
    return contentType_;
}

void ShowInferServiceRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowInferServiceRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowInferServiceRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


