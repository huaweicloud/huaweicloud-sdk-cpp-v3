

#include "huaweicloud/drs/v5/model/ChildrenJobListResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ChildrenJobListResp::ChildrenJobListResp()
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
}

ChildrenJobListResp::~ChildrenJobListResp() = default;

void ChildrenJobListResp::validate()
{
}

web::json::value ChildrenJobListResp::toJson() const
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

    return val;
}

bool ChildrenJobListResp::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ChildrenJobListResp::getId() const
{
    return id_;
}

void ChildrenJobListResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChildrenJobListResp::idIsSet() const
{
    return idIsSet_;
}

void ChildrenJobListResp::unsetid()
{
    idIsSet_ = false;
}

std::string ChildrenJobListResp::getName() const
{
    return name_;
}

void ChildrenJobListResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChildrenJobListResp::nameIsSet() const
{
    return nameIsSet_;
}

void ChildrenJobListResp::unsetname()
{
    nameIsSet_ = false;
}

std::string ChildrenJobListResp::getStatus() const
{
    return status_;
}

void ChildrenJobListResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChildrenJobListResp::statusIsSet() const
{
    return statusIsSet_;
}

void ChildrenJobListResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChildrenJobListResp::getDescription() const
{
    return description_;
}

void ChildrenJobListResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChildrenJobListResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChildrenJobListResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ChildrenJobListResp::getCreateTime() const
{
    return createTime_;
}

void ChildrenJobListResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ChildrenJobListResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ChildrenJobListResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ChildrenJobListResp::getEngineType() const
{
    return engineType_;
}

void ChildrenJobListResp::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ChildrenJobListResp::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ChildrenJobListResp::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ChildrenJobListResp::getNetType() const
{
    return netType_;
}

void ChildrenJobListResp::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool ChildrenJobListResp::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void ChildrenJobListResp::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string ChildrenJobListResp::getChargingMode() const
{
    return chargingMode_;
}

void ChildrenJobListResp::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ChildrenJobListResp::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ChildrenJobListResp::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

bool ChildrenJobListResp::isBillingTag() const
{
    return billingTag_;
}

void ChildrenJobListResp::setBillingTag(bool value)
{
    billingTag_ = value;
    billingTagIsSet_ = true;
}

bool ChildrenJobListResp::billingTagIsSet() const
{
    return billingTagIsSet_;
}

void ChildrenJobListResp::unsetbillingTag()
{
    billingTagIsSet_ = false;
}

std::string ChildrenJobListResp::getJobDirection() const
{
    return jobDirection_;
}

void ChildrenJobListResp::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool ChildrenJobListResp::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void ChildrenJobListResp::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string ChildrenJobListResp::getJobType() const
{
    return jobType_;
}

void ChildrenJobListResp::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ChildrenJobListResp::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ChildrenJobListResp::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ChildrenJobListResp::getTaskType() const
{
    return taskType_;
}

void ChildrenJobListResp::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ChildrenJobListResp::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ChildrenJobListResp::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string ChildrenJobListResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChildrenJobListResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChildrenJobListResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChildrenJobListResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChildrenJobListResp::getJobMode() const
{
    return jobMode_;
}

void ChildrenJobListResp::setJobMode(const std::string& value)
{
    jobMode_ = value;
    jobModeIsSet_ = true;
}

bool ChildrenJobListResp::jobModeIsSet() const
{
    return jobModeIsSet_;
}

void ChildrenJobListResp::unsetjobMode()
{
    jobModeIsSet_ = false;
}

std::string ChildrenJobListResp::getJobModeRole() const
{
    return jobModeRole_;
}

void ChildrenJobListResp::setJobModeRole(const std::string& value)
{
    jobModeRole_ = value;
    jobModeRoleIsSet_ = true;
}

bool ChildrenJobListResp::jobModeRoleIsSet() const
{
    return jobModeRoleIsSet_;
}

void ChildrenJobListResp::unsetjobModeRole()
{
    jobModeRoleIsSet_ = false;
}

bool ChildrenJobListResp::isIsMultiAz() const
{
    return isMultiAz_;
}

void ChildrenJobListResp::setIsMultiAz(bool value)
{
    isMultiAz_ = value;
    isMultiAzIsSet_ = true;
}

bool ChildrenJobListResp::isMultiAzIsSet() const
{
    return isMultiAzIsSet_;
}

void ChildrenJobListResp::unsetisMultiAz()
{
    isMultiAzIsSet_ = false;
}

std::string ChildrenJobListResp::getNodeRole() const
{
    return nodeRole_;
}

void ChildrenJobListResp::setNodeRole(const std::string& value)
{
    nodeRole_ = value;
    nodeRoleIsSet_ = true;
}

bool ChildrenJobListResp::nodeRoleIsSet() const
{
    return nodeRoleIsSet_;
}

void ChildrenJobListResp::unsetnodeRole()
{
    nodeRoleIsSet_ = false;
}

bool ChildrenJobListResp::isNodeNewFramework() const
{
    return nodeNewFramework_;
}

void ChildrenJobListResp::setNodeNewFramework(bool value)
{
    nodeNewFramework_ = value;
    nodeNewFrameworkIsSet_ = true;
}

bool ChildrenJobListResp::nodeNewFrameworkIsSet() const
{
    return nodeNewFrameworkIsSet_;
}

void ChildrenJobListResp::unsetnodeNewFramework()
{
    nodeNewFrameworkIsSet_ = false;
}

JobActions ChildrenJobListResp::getJobAction() const
{
    return jobAction_;
}

void ChildrenJobListResp::setJobAction(const JobActions& value)
{
    jobAction_ = value;
    jobActionIsSet_ = true;
}

bool ChildrenJobListResp::jobActionIsSet() const
{
    return jobActionIsSet_;
}

void ChildrenJobListResp::unsetjobAction()
{
    jobActionIsSet_ = false;
}

}
}
}
}
}


