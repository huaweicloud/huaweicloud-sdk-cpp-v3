

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentPodsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentPodsRequest::ListInferDeploymentPodsRequest()
{
    id_ = "";
    idIsSet_ = false;
    deploymentName_ = "";
    deploymentNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    podName_ = "";
    podNameIsSet_ = false;
    podId_ = "";
    podIdIsSet_ = false;
    podNodeIp_ = "";
    podNodeIpIsSet_ = false;
    podNodeName_ = "";
    podNodeNameIsSet_ = false;
}

ListInferDeploymentPodsRequest::~ListInferDeploymentPodsRequest() = default;

void ListInferDeploymentPodsRequest::validate()
{
}

web::json::value ListInferDeploymentPodsRequest::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(podNameIsSet_) {
        val[utility::conversions::to_string_t("pod_name")] = ModelBase::toJson(podName_);
    }
    if(podIdIsSet_) {
        val[utility::conversions::to_string_t("pod_id")] = ModelBase::toJson(podId_);
    }
    if(podNodeIpIsSet_) {
        val[utility::conversions::to_string_t("pod_node_ip")] = ModelBase::toJson(podNodeIp_);
    }
    if(podNodeNameIsSet_) {
        val[utility::conversions::to_string_t("pod_node_name")] = ModelBase::toJson(podNodeName_);
    }

    return val;
}
bool ListInferDeploymentPodsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pod_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pod_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pod_node_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_node_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodNodeIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pod_node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodNodeName(refVal);
        }
    }
    return ok;
}


std::string ListInferDeploymentPodsRequest::getId() const
{
    return id_;
}

void ListInferDeploymentPodsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInferDeploymentPodsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInferDeploymentPodsRequest::getDeploymentName() const
{
    return deploymentName_;
}

void ListInferDeploymentPodsRequest::setDeploymentName(const std::string& value)
{
    deploymentName_ = value;
    deploymentNameIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::deploymentNameIsSet() const
{
    return deploymentNameIsSet_;
}

void ListInferDeploymentPodsRequest::unsetdeploymentName()
{
    deploymentNameIsSet_ = false;
}

std::string ListInferDeploymentPodsRequest::getName() const
{
    return name_;
}

void ListInferDeploymentPodsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInferDeploymentPodsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& ListInferDeploymentPodsRequest::getStatus()
{
    return status_;
}

void ListInferDeploymentPodsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListInferDeploymentPodsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListInferDeploymentPodsRequest::getLimit() const
{
    return limit_;
}

void ListInferDeploymentPodsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferDeploymentPodsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInferDeploymentPodsRequest::getOffset() const
{
    return offset_;
}

void ListInferDeploymentPodsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferDeploymentPodsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferDeploymentPodsRequest::getPodName() const
{
    return podName_;
}

void ListInferDeploymentPodsRequest::setPodName(const std::string& value)
{
    podName_ = value;
    podNameIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::podNameIsSet() const
{
    return podNameIsSet_;
}

void ListInferDeploymentPodsRequest::unsetpodName()
{
    podNameIsSet_ = false;
}

std::string ListInferDeploymentPodsRequest::getPodId() const
{
    return podId_;
}

void ListInferDeploymentPodsRequest::setPodId(const std::string& value)
{
    podId_ = value;
    podIdIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::podIdIsSet() const
{
    return podIdIsSet_;
}

void ListInferDeploymentPodsRequest::unsetpodId()
{
    podIdIsSet_ = false;
}

std::string ListInferDeploymentPodsRequest::getPodNodeIp() const
{
    return podNodeIp_;
}

void ListInferDeploymentPodsRequest::setPodNodeIp(const std::string& value)
{
    podNodeIp_ = value;
    podNodeIpIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::podNodeIpIsSet() const
{
    return podNodeIpIsSet_;
}

void ListInferDeploymentPodsRequest::unsetpodNodeIp()
{
    podNodeIpIsSet_ = false;
}

std::string ListInferDeploymentPodsRequest::getPodNodeName() const
{
    return podNodeName_;
}

void ListInferDeploymentPodsRequest::setPodNodeName(const std::string& value)
{
    podNodeName_ = value;
    podNodeNameIsSet_ = true;
}

bool ListInferDeploymentPodsRequest::podNodeNameIsSet() const
{
    return podNodeNameIsSet_;
}

void ListInferDeploymentPodsRequest::unsetpodNodeName()
{
    podNodeNameIsSet_ = false;
}

}
}
}
}
}


