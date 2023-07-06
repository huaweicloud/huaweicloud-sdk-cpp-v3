

#include "huaweicloud/drs/v3/model/JobInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




JobInfo::JobInfo()
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
    billingTag_ = false;
    billingTagIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    childrenIsSet_ = false;
    nodeNewFramework_ = false;
    nodeNewFrameworkIsSet_ = false;
    jobActionIsSet_ = false;
}

JobInfo::~JobInfo() = default;

void JobInfo::validate()
{
}

web::json::value JobInfo::toJson() const
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
    if(billingTagIsSet_) {
        val[utility::conversions::to_string_t("billing_tag")] = ModelBase::toJson(billingTag_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }
    if(nodeNewFrameworkIsSet_) {
        val[utility::conversions::to_string_t("node_newFramework")] = ModelBase::toJson(nodeNewFramework_);
    }
    if(jobActionIsSet_) {
        val[utility::conversions::to_string_t("job_action")] = ModelBase::toJson(jobAction_);
    }

    return val;
}

bool JobInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<ChildrenJobInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_newFramework"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_newFramework"));
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
            JobActionResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobAction(refVal);
        }
    }
    return ok;
}

std::string JobInfo::getId() const
{
    return id_;
}

void JobInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobInfo::idIsSet() const
{
    return idIsSet_;
}

void JobInfo::unsetid()
{
    idIsSet_ = false;
}

std::string JobInfo::getName() const
{
    return name_;
}

void JobInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobInfo::nameIsSet() const
{
    return nameIsSet_;
}

void JobInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string JobInfo::getStatus() const
{
    return status_;
}

void JobInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobInfo::statusIsSet() const
{
    return statusIsSet_;
}

void JobInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobInfo::getDescription() const
{
    return description_;
}

void JobInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string JobInfo::getCreateTime() const
{
    return createTime_;
}

void JobInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool JobInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void JobInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string JobInfo::getEngineType() const
{
    return engineType_;
}

void JobInfo::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool JobInfo::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void JobInfo::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string JobInfo::getNetType() const
{
    return netType_;
}

void JobInfo::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool JobInfo::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void JobInfo::unsetnetType()
{
    netTypeIsSet_ = false;
}

bool JobInfo::isBillingTag() const
{
    return billingTag_;
}

void JobInfo::setBillingTag(bool value)
{
    billingTag_ = value;
    billingTagIsSet_ = true;
}

bool JobInfo::billingTagIsSet() const
{
    return billingTagIsSet_;
}

void JobInfo::unsetbillingTag()
{
    billingTagIsSet_ = false;
}

std::string JobInfo::getJobDirection() const
{
    return jobDirection_;
}

void JobInfo::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool JobInfo::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void JobInfo::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string JobInfo::getDbUseType() const
{
    return dbUseType_;
}

void JobInfo::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool JobInfo::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void JobInfo::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

std::string JobInfo::getTaskType() const
{
    return taskType_;
}

void JobInfo::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool JobInfo::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void JobInfo::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::vector<ChildrenJobInfo>& JobInfo::getChildren()
{
    return children_;
}

void JobInfo::setChildren(const std::vector<ChildrenJobInfo>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool JobInfo::childrenIsSet() const
{
    return childrenIsSet_;
}

void JobInfo::unsetchildren()
{
    childrenIsSet_ = false;
}

bool JobInfo::isNodeNewFramework() const
{
    return nodeNewFramework_;
}

void JobInfo::setNodeNewFramework(bool value)
{
    nodeNewFramework_ = value;
    nodeNewFrameworkIsSet_ = true;
}

bool JobInfo::nodeNewFrameworkIsSet() const
{
    return nodeNewFrameworkIsSet_;
}

void JobInfo::unsetnodeNewFramework()
{
    nodeNewFrameworkIsSet_ = false;
}

JobActionResp JobInfo::getJobAction() const
{
    return jobAction_;
}

void JobInfo::setJobAction(const JobActionResp& value)
{
    jobAction_ = value;
    jobActionIsSet_ = true;
}

bool JobInfo::jobActionIsSet() const
{
    return jobActionIsSet_;
}

void JobInfo::unsetjobAction()
{
    jobActionIsSet_ = false;
}

}
}
}
}
}


