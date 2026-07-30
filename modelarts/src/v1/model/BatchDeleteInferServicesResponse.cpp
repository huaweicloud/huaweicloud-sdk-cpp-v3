

#include "huaweicloud/modelarts/v1/model/BatchDeleteInferServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeleteInferServicesResponse::BatchDeleteInferServicesResponse()
{
    serviceResponsesIsSet_ = false;
}

BatchDeleteInferServicesResponse::~BatchDeleteInferServicesResponse() = default;

void BatchDeleteInferServicesResponse::validate()
{
}

web::json::value BatchDeleteInferServicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceResponsesIsSet_) {
        val[utility::conversions::to_string_t("service_responses")] = ModelBase::toJson(serviceResponses_);
    }

    return val;
}
bool BatchDeleteInferServicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_responses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_responses"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceResponses(refVal);
        }
    }
    return ok;
}


std::vector<ServiceResponse>& BatchDeleteInferServicesResponse::getServiceResponses()
{
    return serviceResponses_;
}

void BatchDeleteInferServicesResponse::setServiceResponses(const std::vector<ServiceResponse>& value)
{
    serviceResponses_ = value;
    serviceResponsesIsSet_ = true;
}

bool BatchDeleteInferServicesResponse::serviceResponsesIsSet() const
{
    return serviceResponsesIsSet_;
}

void BatchDeleteInferServicesResponse::unsetserviceResponses()
{
    serviceResponsesIsSet_ = false;
}

}
}
}
}
}


