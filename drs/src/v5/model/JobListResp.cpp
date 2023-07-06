

#include "huaweicloud/drs/v5/model/JobListResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobListResp::JobListResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    billingTag_ = false;
    billingTagIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    jobMode_ = "";
    jobModeIsSet_ = false;
    jobModeRole_ = "";
    jobModeRoleIsSet_ = false;
    isMultiAz_ = false;
    isMultiAzIsSet_ = false;
    nodeRole_ = "";
    nodeRoleIsSet_ = false;
    nodeNewFramework_ = false;
    nodeNewFrameworkIsSet_ = false;
    jobActionIsSet_ = false;
    childrenIsSet_ = false;
}

JobListResp::~JobListResp() = default;

void JobListResp::validate()
{
}

web::json::value JobListResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(billingTagIsSet_) {
        val[utility::conversions::to_string_t("billing_tag")] = ModelBase::toJson(billingTag_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(jobModeIsSet_) {
        val[utility::conversions::to_string_t("job_mode")] = ModelBase::toJson(jobMode_);
    }
    if(jobModeRoleIsSet_) {
        val[utility::conversions::to_string_t("job_mode_role")] = ModelBase::toJson(jobModeRole_);
    }
    if(isMultiAzIsSet_) {
        val[utility::conversions::to_string_t("is_multi_az")] = ModelBase::toJson(isMultiAz_);
    }
    if(nodeRoleIsSet_) {
        val[utility::conversions::to_string_t("node_role")] = ModelBase::toJson(nodeRole_);
    }
    if(nodeNewFrameworkIsSet_) {
        val[utility::conversions::to_string_t("node_new_framework")] = ModelBase::toJson(nodeNewFramework_);
    }
    if(jobActionIsSet_) {
        val[utility::conversions::to_string_t("job_action")] = ModelBase::toJson(jobAction_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }

    return val;
}

bool JobListResp::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_mode_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_mode_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobModeRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_new_framework"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_new_framework"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNewFramework(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_action"));
        if(!fieldValue.is_null())
        {
            JobActions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<ChildrenJobListResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}

std::string JobListResp::getId() const
{
    return id_;
}

void JobListResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobListResp::idIsSet() const
{
    return idIsSet_;
}

void JobListResp::unsetid()
{
    idIsSet_ = false;
}

std::string JobListResp::getName() const
{
    return name_;
}

void JobListResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobListResp::nameIsSet() const
{
    return nameIsSet_;
}

void JobListResp::unsetname()
{
    nameIsSet_ = false;
}

std::string JobListResp::getStatus() const
{
    return status_;
}

void JobListResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobListResp::statusIsSet() const
{
    return statusIsSet_;
}

void JobListResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobListResp::getDescription() const
{
    return description_;
}

void JobListResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobListResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobListResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string JobListResp::getCreateTime() const
{
    return createTime_;
}

void JobListResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool JobListResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void JobListResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string JobListResp::getEngineType() const
{
    return engineType_;
}

void JobListResp::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool JobListResp::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void JobListResp::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string JobListResp::getNetType() const
{
    return netType_;
}

void JobListResp::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool JobListResp::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void JobListResp::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string JobListResp::getChargingMode() const
{
    return chargingMode_;
}

void JobListResp::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool JobListResp::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void JobListResp::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

bool JobListResp::isBillingTag() const
{
    return billingTag_;
}

void JobListResp::setBillingTag(bool value)
{
    billingTag_ = value;
    billingTagIsSet_ = true;
}

bool JobListResp::billingTagIsSet() const
{
    return billingTagIsSet_;
}

void JobListResp::unsetbillingTag()
{
    billingTagIsSet_ = false;
}

std::string JobListResp::getJobDirection() const
{
    return jobDirection_;
}

void JobListResp::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool JobListResp::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void JobListResp::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string JobListResp::getJobType() const
{
    return jobType_;
}

void JobListResp::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool JobListResp::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void JobListResp::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string JobListResp::getTaskType() const
{
    return taskType_;
}

void JobListResp::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool JobListResp::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void JobListResp::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string JobListResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void JobListResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool JobListResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void JobListResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string JobListResp::getJobMode() const
{
    return jobMode_;
}

void JobListResp::setJobMode(const std::string& value)
{
    jobMode_ = value;
    jobModeIsSet_ = true;
}

bool JobListResp::jobModeIsSet() const
{
    return jobModeIsSet_;
}

void JobListResp::unsetjobMode()
{
    jobModeIsSet_ = false;
}

std::string JobListResp::getJobModeRole() const
{
    return jobModeRole_;
}

void JobListResp::setJobModeRole(const std::string& value)
{
    jobModeRole_ = value;
    jobModeRoleIsSet_ = true;
}

bool JobListResp::jobModeRoleIsSet() const
{
    return jobModeRoleIsSet_;
}

void JobListResp::unsetjobModeRole()
{
    jobModeRoleIsSet_ = false;
}

bool JobListResp::isIsMultiAz() const
{
    return isMultiAz_;
}

void JobListResp::setIsMultiAz(bool value)
{
    isMultiAz_ = value;
    isMultiAzIsSet_ = true;
}

bool JobListResp::isMultiAzIsSet() const
{
    return isMultiAzIsSet_;
}

void JobListResp::unsetisMultiAz()
{
    isMultiAzIsSet_ = false;
}

std::string JobListResp::getNodeRole() const
{
    return nodeRole_;
}

void JobListResp::setNodeRole(const std::string& value)
{
    nodeRole_ = value;
    nodeRoleIsSet_ = true;
}

bool JobListResp::nodeRoleIsSet() const
{
    return nodeRoleIsSet_;
}

void JobListResp::unsetnodeRole()
{
    nodeRoleIsSet_ = false;
}

bool JobListResp::isNodeNewFramework() const
{
    return nodeNewFramework_;
}

void JobListResp::setNodeNewFramework(bool value)
{
    nodeNewFramework_ = value;
    nodeNewFrameworkIsSet_ = true;
}

bool JobListResp::nodeNewFrameworkIsSet() const
{
    return nodeNewFrameworkIsSet_;
}

void JobListResp::unsetnodeNewFramework()
{
    nodeNewFrameworkIsSet_ = false;
}

JobActions JobListResp::getJobAction() const
{
    return jobAction_;
}

void JobListResp::setJobAction(const JobActions& value)
{
    jobAction_ = value;
    jobActionIsSet_ = true;
}

bool JobListResp::jobActionIsSet() const
{
    return jobActionIsSet_;
}

void JobListResp::unsetjobAction()
{
    jobActionIsSet_ = false;
}

std::vector<ChildrenJobListResp>& JobListResp::getChildren()
{
    return children_;
}

void JobListResp::setChildren(const std::vector<ChildrenJobListResp>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool JobListResp::childrenIsSet() const
{
    return childrenIsSet_;
}

void JobListResp::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


