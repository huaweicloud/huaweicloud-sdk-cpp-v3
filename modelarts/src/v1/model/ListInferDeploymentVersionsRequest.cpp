

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentVersionsRequest::ListInferDeploymentVersionsRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
}

ListInferDeploymentVersionsRequest::~ListInferDeploymentVersionsRequest() = default;

void ListInferDeploymentVersionsRequest::validate()
{
}

web::json::value ListInferDeploymentVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(deploymentIdIsSet_) {
        val[utility::conversions::to_string_t("deployment_id")] = ModelBase::toJson(deploymentId_);
    }

    return val;
}
bool ListInferDeploymentVersionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deployment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentId(refVal);
        }
    }
    return ok;
}


std::string ListInferDeploymentVersionsRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferDeploymentVersionsRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferDeploymentVersionsRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferDeploymentVersionsRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferDeploymentVersionsRequest::getDeploymentId() const
{
    return deploymentId_;
}

void ListInferDeploymentVersionsRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool ListInferDeploymentVersionsRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void ListInferDeploymentVersionsRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

}
}
}
}
}


