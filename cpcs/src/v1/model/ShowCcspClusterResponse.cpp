

#include "huaweicloud/cpcs/v1/model/ShowCcspClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowCcspClusterResponse::ShowCcspClusterResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    taskDetailsIsSet_ = false;
    ccspId_ = "";
    ccspIdIsSet_ = false;
    distributedType_ = "";
    distributedTypeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    instanceNum_ = 0;
    instanceNumIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    progressInfo_ = "";
    progressInfoIsSet_ = false;
    vsmNum_ = 0;
    vsmNumIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    sharedCcsp_ = false;
    sharedCcspIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
}

ShowCcspClusterResponse::~ShowCcspClusterResponse() = default;

void ShowCcspClusterResponse::validate()
{
}

web::json::value ShowCcspClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(taskDetailsIsSet_) {
        val[utility::conversions::to_string_t("task_details")] = ModelBase::toJson(taskDetails_);
    }
    if(ccspIdIsSet_) {
        val[utility::conversions::to_string_t("ccsp_id")] = ModelBase::toJson(ccspId_);
    }
    if(distributedTypeIsSet_) {
        val[utility::conversions::to_string_t("distributed_type")] = ModelBase::toJson(distributedType_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressInfoIsSet_) {
        val[utility::conversions::to_string_t("progress_info")] = ModelBase::toJson(progressInfo_);
    }
    if(vsmNumIsSet_) {
        val[utility::conversions::to_string_t("vsm_num")] = ModelBase::toJson(vsmNum_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(sharedCcspIsSet_) {
        val[utility::conversions::to_string_t("shared_ccsp")] = ModelBase::toJson(sharedCcsp_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }

    return val;
}
bool ShowCcspClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_details"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccsp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccsp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcspId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distributed_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distributed_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistributedType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("progress_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgressInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vsm_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vsm_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVsmNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared_ccsp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_ccsp"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedCcsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    return ok;
}


std::string ShowCcspClusterResponse::getTaskId() const
{
    return taskId_;
}

void ShowCcspClusterResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowCcspClusterResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowCcspClusterResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowCcspClusterResponse::getProjectId() const
{
    return projectId_;
}

void ShowCcspClusterResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowCcspClusterResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowCcspClusterResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowCcspClusterResponse::getDomainId() const
{
    return domainId_;
}

void ShowCcspClusterResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowCcspClusterResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowCcspClusterResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<Object>& ShowCcspClusterResponse::getTaskDetails()
{
    return taskDetails_;
}

void ShowCcspClusterResponse::setTaskDetails(const std::vector<Object>& value)
{
    taskDetails_ = value;
    taskDetailsIsSet_ = true;
}

bool ShowCcspClusterResponse::taskDetailsIsSet() const
{
    return taskDetailsIsSet_;
}

void ShowCcspClusterResponse::unsettaskDetails()
{
    taskDetailsIsSet_ = false;
}

std::string ShowCcspClusterResponse::getCcspId() const
{
    return ccspId_;
}

void ShowCcspClusterResponse::setCcspId(const std::string& value)
{
    ccspId_ = value;
    ccspIdIsSet_ = true;
}

bool ShowCcspClusterResponse::ccspIdIsSet() const
{
    return ccspIdIsSet_;
}

void ShowCcspClusterResponse::unsetccspId()
{
    ccspIdIsSet_ = false;
}

std::string ShowCcspClusterResponse::getDistributedType() const
{
    return distributedType_;
}

void ShowCcspClusterResponse::setDistributedType(const std::string& value)
{
    distributedType_ = value;
    distributedTypeIsSet_ = true;
}

bool ShowCcspClusterResponse::distributedTypeIsSet() const
{
    return distributedTypeIsSet_;
}

void ShowCcspClusterResponse::unsetdistributedType()
{
    distributedTypeIsSet_ = false;
}

std::string ShowCcspClusterResponse::getClusterId() const
{
    return clusterId_;
}

void ShowCcspClusterResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowCcspClusterResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowCcspClusterResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowCcspClusterResponse::getClusterName() const
{
    return clusterName_;
}

void ShowCcspClusterResponse::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool ShowCcspClusterResponse::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void ShowCcspClusterResponse::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string ShowCcspClusterResponse::getServiceType() const
{
    return serviceType_;
}

void ShowCcspClusterResponse::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ShowCcspClusterResponse::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ShowCcspClusterResponse::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ShowCcspClusterResponse::getType() const
{
    return type_;
}

void ShowCcspClusterResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowCcspClusterResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowCcspClusterResponse::unsettype()
{
    typeIsSet_ = false;
}

int32_t ShowCcspClusterResponse::getInstanceNum() const
{
    return instanceNum_;
}

void ShowCcspClusterResponse::setInstanceNum(int32_t value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool ShowCcspClusterResponse::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void ShowCcspClusterResponse::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

std::string ShowCcspClusterResponse::getStatus() const
{
    return status_;
}

void ShowCcspClusterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCcspClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCcspClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowCcspClusterResponse::getProgressInfo() const
{
    return progressInfo_;
}

void ShowCcspClusterResponse::setProgressInfo(const std::string& value)
{
    progressInfo_ = value;
    progressInfoIsSet_ = true;
}

bool ShowCcspClusterResponse::progressInfoIsSet() const
{
    return progressInfoIsSet_;
}

void ShowCcspClusterResponse::unsetprogressInfo()
{
    progressInfoIsSet_ = false;
}

int32_t ShowCcspClusterResponse::getVsmNum() const
{
    return vsmNum_;
}

void ShowCcspClusterResponse::setVsmNum(int32_t value)
{
    vsmNum_ = value;
    vsmNumIsSet_ = true;
}

bool ShowCcspClusterResponse::vsmNumIsSet() const
{
    return vsmNumIsSet_;
}

void ShowCcspClusterResponse::unsetvsmNum()
{
    vsmNumIsSet_ = false;
}

int64_t ShowCcspClusterResponse::getCreateTime() const
{
    return createTime_;
}

void ShowCcspClusterResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowCcspClusterResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowCcspClusterResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

bool ShowCcspClusterResponse::isSharedCcsp() const
{
    return sharedCcsp_;
}

void ShowCcspClusterResponse::setSharedCcsp(bool value)
{
    sharedCcsp_ = value;
    sharedCcspIsSet_ = true;
}

bool ShowCcspClusterResponse::sharedCcspIsSet() const
{
    return sharedCcspIsSet_;
}

void ShowCcspClusterResponse::unsetsharedCcsp()
{
    sharedCcspIsSet_ = false;
}

std::string ShowCcspClusterResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowCcspClusterResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowCcspClusterResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowCcspClusterResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowCcspClusterResponse::getAz() const
{
    return az_;
}

void ShowCcspClusterResponse::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool ShowCcspClusterResponse::azIsSet() const
{
    return azIsSet_;
}

void ShowCcspClusterResponse::unsetaz()
{
    azIsSet_ = false;
}

}
}
}
}
}


