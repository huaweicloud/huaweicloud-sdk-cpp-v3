

#include "huaweicloud/modelarts/v1/model/SwitchInferDeploymentVersionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SwitchInferDeploymentVersionRequestBody::SwitchInferDeploymentVersionRequestBody()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    targetDeploymentVersion_ = "";
    targetDeploymentVersionIsSet_ = false;
    inferName_ = "";
    inferNameIsSet_ = false;
}

SwitchInferDeploymentVersionRequestBody::~SwitchInferDeploymentVersionRequestBody() = default;

void SwitchInferDeploymentVersionRequestBody::validate()
{
}

web::json::value SwitchInferDeploymentVersionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(targetDeploymentVersionIsSet_) {
        val[utility::conversions::to_string_t("target_deployment_version")] = ModelBase::toJson(targetDeploymentVersion_);
    }
    if(inferNameIsSet_) {
        val[utility::conversions::to_string_t("infer_name")] = ModelBase::toJson(inferName_);
    }

    return val;
}
bool SwitchInferDeploymentVersionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_deployment_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_deployment_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDeploymentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("infer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferName(refVal);
        }
    }
    return ok;
}


std::string SwitchInferDeploymentVersionRequestBody::getServiceId() const
{
    return serviceId_;
}

void SwitchInferDeploymentVersionRequestBody::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool SwitchInferDeploymentVersionRequestBody::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void SwitchInferDeploymentVersionRequestBody::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string SwitchInferDeploymentVersionRequestBody::getTargetDeploymentVersion() const
{
    return targetDeploymentVersion_;
}

void SwitchInferDeploymentVersionRequestBody::setTargetDeploymentVersion(const std::string& value)
{
    targetDeploymentVersion_ = value;
    targetDeploymentVersionIsSet_ = true;
}

bool SwitchInferDeploymentVersionRequestBody::targetDeploymentVersionIsSet() const
{
    return targetDeploymentVersionIsSet_;
}

void SwitchInferDeploymentVersionRequestBody::unsettargetDeploymentVersion()
{
    targetDeploymentVersionIsSet_ = false;
}

std::string SwitchInferDeploymentVersionRequestBody::getInferName() const
{
    return inferName_;
}

void SwitchInferDeploymentVersionRequestBody::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool SwitchInferDeploymentVersionRequestBody::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void SwitchInferDeploymentVersionRequestBody::unsetinferName()
{
    inferNameIsSet_ = false;
}

}
}
}
}
}


