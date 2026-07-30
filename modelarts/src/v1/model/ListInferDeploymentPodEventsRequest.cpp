

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentPodEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentPodEventsRequest::ListInferDeploymentPodEventsRequest()
{
    id_ = "";
    idIsSet_ = false;
    deploymentName_ = "";
    deploymentNameIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListInferDeploymentPodEventsRequest::~ListInferDeploymentPodEventsRequest() = default;

void ListInferDeploymentPodEventsRequest::validate()
{
}

web::json::value ListInferDeploymentPodEventsRequest::toJson() const
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

    return val;
}
bool ListInferDeploymentPodEventsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListInferDeploymentPodEventsRequest::getId() const
{
    return id_;
}

void ListInferDeploymentPodEventsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInferDeploymentPodEventsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInferDeploymentPodEventsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInferDeploymentPodEventsRequest::getDeploymentName() const
{
    return deploymentName_;
}

void ListInferDeploymentPodEventsRequest::setDeploymentName(const std::string& value)
{
    deploymentName_ = value;
    deploymentNameIsSet_ = true;
}

bool ListInferDeploymentPodEventsRequest::deploymentNameIsSet() const
{
    return deploymentNameIsSet_;
}

void ListInferDeploymentPodEventsRequest::unsetdeploymentName()
{
    deploymentNameIsSet_ = false;
}

std::string ListInferDeploymentPodEventsRequest::getInstanceName() const
{
    return instanceName_;
}

void ListInferDeploymentPodEventsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListInferDeploymentPodEventsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListInferDeploymentPodEventsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ListInferDeploymentPodEventsRequest::getName() const
{
    return name_;
}

void ListInferDeploymentPodEventsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInferDeploymentPodEventsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInferDeploymentPodEventsRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


