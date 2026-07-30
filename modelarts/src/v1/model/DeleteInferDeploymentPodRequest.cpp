

#include "huaweicloud/modelarts/v1/model/DeleteInferDeploymentPodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferDeploymentPodRequest::DeleteInferDeploymentPodRequest()
{
    id_ = "";
    idIsSet_ = false;
    deploymentName_ = "";
    deploymentNameIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
}

DeleteInferDeploymentPodRequest::~DeleteInferDeploymentPodRequest() = default;

void DeleteInferDeploymentPodRequest::validate()
{
}

web::json::value DeleteInferDeploymentPodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(deploymentNameIsSet_) {
        val[utility::conversions::to_string_t("deployment_name")] = ModelBase::toJson(deploymentName_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }

    return val;
}
bool DeleteInferDeploymentPodRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployment_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    return ok;
}


std::string DeleteInferDeploymentPodRequest::getId() const
{
    return id_;
}

void DeleteInferDeploymentPodRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteInferDeploymentPodRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteInferDeploymentPodRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteInferDeploymentPodRequest::getDeploymentName() const
{
    return deploymentName_;
}

void DeleteInferDeploymentPodRequest::setDeploymentName(const std::string& value)
{
    deploymentName_ = value;
    deploymentNameIsSet_ = true;
}

bool DeleteInferDeploymentPodRequest::deploymentNameIsSet() const
{
    return deploymentNameIsSet_;
}

void DeleteInferDeploymentPodRequest::unsetdeploymentName()
{
    deploymentNameIsSet_ = false;
}

std::string DeleteInferDeploymentPodRequest::getInstanceName() const
{
    return instanceName_;
}

void DeleteInferDeploymentPodRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool DeleteInferDeploymentPodRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void DeleteInferDeploymentPodRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string DeleteInferDeploymentPodRequest::getName() const
{
    return name_;
}

void DeleteInferDeploymentPodRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteInferDeploymentPodRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteInferDeploymentPodRequest::unsetname()
{
    nameIsSet_ = false;
}

bool DeleteInferDeploymentPodRequest::isForce() const
{
    return force_;
}

void DeleteInferDeploymentPodRequest::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool DeleteInferDeploymentPodRequest::forceIsSet() const
{
    return forceIsSet_;
}

void DeleteInferDeploymentPodRequest::unsetforce()
{
    forceIsSet_ = false;
}

}
}
}
}
}


