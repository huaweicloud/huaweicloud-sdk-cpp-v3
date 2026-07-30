

#include "huaweicloud/modelarts/v1/model/DeleteInferDeploymentInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferDeploymentInstanceRequest::DeleteInferDeploymentInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    deploymentName_ = "";
    deploymentNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
}

DeleteInferDeploymentInstanceRequest::~DeleteInferDeploymentInstanceRequest() = default;

void DeleteInferDeploymentInstanceRequest::validate()
{
}

web::json::value DeleteInferDeploymentInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(deploymentNameIsSet_) {
        val[utility::conversions::to_string_t("deployment_name")] = ModelBase::toJson(deploymentName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }

    return val;
}
bool DeleteInferDeploymentInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    return ok;
}


std::string DeleteInferDeploymentInstanceRequest::getId() const
{
    return id_;
}

void DeleteInferDeploymentInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteInferDeploymentInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteInferDeploymentInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteInferDeploymentInstanceRequest::getDeploymentName() const
{
    return deploymentName_;
}

void DeleteInferDeploymentInstanceRequest::setDeploymentName(const std::string& value)
{
    deploymentName_ = value;
    deploymentNameIsSet_ = true;
}

bool DeleteInferDeploymentInstanceRequest::deploymentNameIsSet() const
{
    return deploymentNameIsSet_;
}

void DeleteInferDeploymentInstanceRequest::unsetdeploymentName()
{
    deploymentNameIsSet_ = false;
}

std::string DeleteInferDeploymentInstanceRequest::getName() const
{
    return name_;
}

void DeleteInferDeploymentInstanceRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteInferDeploymentInstanceRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteInferDeploymentInstanceRequest::unsetname()
{
    nameIsSet_ = false;
}

bool DeleteInferDeploymentInstanceRequest::isForce() const
{
    return force_;
}

void DeleteInferDeploymentInstanceRequest::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool DeleteInferDeploymentInstanceRequest::forceIsSet() const
{
    return forceIsSet_;
}

void DeleteInferDeploymentInstanceRequest::unsetforce()
{
    forceIsSet_ = false;
}

std::string DeleteInferDeploymentInstanceRequest::getOperation() const
{
    return operation_;
}

void DeleteInferDeploymentInstanceRequest::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool DeleteInferDeploymentInstanceRequest::operationIsSet() const
{
    return operationIsSet_;
}

void DeleteInferDeploymentInstanceRequest::unsetoperation()
{
    operationIsSet_ = false;
}

}
}
}
}
}


