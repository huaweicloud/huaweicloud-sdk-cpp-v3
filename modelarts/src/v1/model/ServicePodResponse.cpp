

#include "huaweicloud/modelarts/v1/model/ServicePodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServicePodResponse::ServicePodResponse()
{
    podId_ = "";
    podIdIsSet_ = false;
    podName_ = "";
    podNameIsSet_ = false;
    podNodeIp_ = "";
    podNodeIpIsSet_ = false;
    podNodeName_ = "";
    podNodeNameIsSet_ = false;
    podRole_ = "";
    podRoleIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

ServicePodResponse::~ServicePodResponse() = default;

void ServicePodResponse::validate()
{
}

web::json::value ServicePodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(podIdIsSet_) {
        val[utility::conversions::to_string_t("pod_id")] = ModelBase::toJson(podId_);
    }
    if(podNameIsSet_) {
        val[utility::conversions::to_string_t("pod_name")] = ModelBase::toJson(podName_);
    }
    if(podNodeIpIsSet_) {
        val[utility::conversions::to_string_t("pod_node_ip")] = ModelBase::toJson(podNodeIp_);
    }
    if(podNodeNameIsSet_) {
        val[utility::conversions::to_string_t("pod_node_name")] = ModelBase::toJson(podNodeName_);
    }
    if(podRoleIsSet_) {
        val[utility::conversions::to_string_t("pod_role")] = ModelBase::toJson(podRole_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ServicePodResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pod_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pod_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ServicePodResponse::getPodId() const
{
    return podId_;
}

void ServicePodResponse::setPodId(const std::string& value)
{
    podId_ = value;
    podIdIsSet_ = true;
}

bool ServicePodResponse::podIdIsSet() const
{
    return podIdIsSet_;
}

void ServicePodResponse::unsetpodId()
{
    podIdIsSet_ = false;
}

std::string ServicePodResponse::getPodName() const
{
    return podName_;
}

void ServicePodResponse::setPodName(const std::string& value)
{
    podName_ = value;
    podNameIsSet_ = true;
}

bool ServicePodResponse::podNameIsSet() const
{
    return podNameIsSet_;
}

void ServicePodResponse::unsetpodName()
{
    podNameIsSet_ = false;
}

std::string ServicePodResponse::getPodNodeIp() const
{
    return podNodeIp_;
}

void ServicePodResponse::setPodNodeIp(const std::string& value)
{
    podNodeIp_ = value;
    podNodeIpIsSet_ = true;
}

bool ServicePodResponse::podNodeIpIsSet() const
{
    return podNodeIpIsSet_;
}

void ServicePodResponse::unsetpodNodeIp()
{
    podNodeIpIsSet_ = false;
}

std::string ServicePodResponse::getPodNodeName() const
{
    return podNodeName_;
}

void ServicePodResponse::setPodNodeName(const std::string& value)
{
    podNodeName_ = value;
    podNodeNameIsSet_ = true;
}

bool ServicePodResponse::podNodeNameIsSet() const
{
    return podNodeNameIsSet_;
}

void ServicePodResponse::unsetpodNodeName()
{
    podNodeNameIsSet_ = false;
}

std::string ServicePodResponse::getPodRole() const
{
    return podRole_;
}

void ServicePodResponse::setPodRole(const std::string& value)
{
    podRole_ = value;
    podRoleIsSet_ = true;
}

bool ServicePodResponse::podRoleIsSet() const
{
    return podRoleIsSet_;
}

void ServicePodResponse::unsetpodRole()
{
    podRoleIsSet_ = false;
}

std::string ServicePodResponse::getStatus() const
{
    return status_;
}

void ServicePodResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServicePodResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ServicePodResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ServicePodResponse::getUpdateTime() const
{
    return updateTime_;
}

void ServicePodResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ServicePodResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ServicePodResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


