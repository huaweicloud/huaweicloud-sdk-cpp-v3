

#include "huaweicloud/modelarts/v1/model/StartInferServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StartInferServiceRequest::StartInferServiceRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
}

StartInferServiceRequest::~StartInferServiceRequest() = default;

void StartInferServiceRequest::validate()
{
}

web::json::value StartInferServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }

    return val;
}
bool StartInferServiceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StartInferServiceRequest::getServiceId() const
{
    return serviceId_;
}

void StartInferServiceRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool StartInferServiceRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void StartInferServiceRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

}
}
}
}
}


