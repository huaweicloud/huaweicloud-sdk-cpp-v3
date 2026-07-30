

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentPodEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentPodEventsResponse::ListInferDeploymentPodEventsResponse()
{
    bodyIsSet_ = false;
}

ListInferDeploymentPodEventsResponse::~ListInferDeploymentPodEventsResponse() = default;

void ListInferDeploymentPodEventsResponse::validate()
{
}

web::json::value ListInferDeploymentPodEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListInferDeploymentPodEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ServicePodEventResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ServicePodEventResponse>& ListInferDeploymentPodEventsResponse::getBody()
{
    return body_;
}

void ListInferDeploymentPodEventsResponse::setBody(const std::vector<ServicePodEventResponse>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListInferDeploymentPodEventsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListInferDeploymentPodEventsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


