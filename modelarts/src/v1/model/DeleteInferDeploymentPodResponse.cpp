

#include "huaweicloud/modelarts/v1/model/DeleteInferDeploymentPodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferDeploymentPodResponse::DeleteInferDeploymentPodResponse()
{
    podName_ = "";
    podNameIsSet_ = false;
}

DeleteInferDeploymentPodResponse::~DeleteInferDeploymentPodResponse() = default;

void DeleteInferDeploymentPodResponse::validate()
{
}

web::json::value DeleteInferDeploymentPodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(podNameIsSet_) {
        val[utility::conversions::to_string_t("pod_name")] = ModelBase::toJson(podName_);
    }

    return val;
}
bool DeleteInferDeploymentPodResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pod_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodName(refVal);
        }
    }
    return ok;
}


std::string DeleteInferDeploymentPodResponse::getPodName() const
{
    return podName_;
}

void DeleteInferDeploymentPodResponse::setPodName(const std::string& value)
{
    podName_ = value;
    podNameIsSet_ = true;
}

bool DeleteInferDeploymentPodResponse::podNameIsSet() const
{
    return podNameIsSet_;
}

void DeleteInferDeploymentPodResponse::unsetpodName()
{
    podNameIsSet_ = false;
}

}
}
}
}
}


