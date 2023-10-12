

#include "huaweicloud/drs/v3/model/ChildrenJobInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ChildrenJobInfo::ChildrenJobInfo()
{
    billingTag_ = false;
    billingTagIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    nodeNewFramework_ = false;
    nodeNewFrameworkIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    jobActionIsSet_ = false;
}

ChildrenJobInfo::~ChildrenJobInfo() = default;

void ChildrenJobInfo::validate()
{
}

web::json::value ChildrenJobInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(billingTagIsSet_) {
        val[utility::conversions::to_string_t("billing_tag")] = ModelBase::toJson(billingTag_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(nodeNewFrameworkIsSet_) {
        val[utility::conversions::to_string_t("node_newFramework")] = ModelBase::toJson(nodeNewFramework_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(jobActionIsSet_) {
        val[utility::conversions::to_string_t("job_action")] = ModelBase::toJson(jobAction_);
    }

    return val;
}
bool ChildrenJobInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("billing_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingTag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_newFramework"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_newFramework"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNewFramework(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
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


bool ChildrenJobInfo::isBillingTag() const
{
    return billingTag_;
}

void ChildrenJobInfo::setBillingTag(bool value)
{
    billingTag_ = value;
    billingTagIsSet_ = true;
}

bool ChildrenJobInfo::billingTagIsSet() const
{
    return billingTagIsSet_;
}

void ChildrenJobInfo::unsetbillingTag()
{
    billingTagIsSet_ = false;
}

std::string ChildrenJobInfo::getCreateTime() const
{
    return createTime_;
}

void ChildrenJobInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ChildrenJobInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ChildrenJobInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ChildrenJobInfo::getDbUseType() const
{
    return dbUseType_;
}

void ChildrenJobInfo::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool ChildrenJobInfo::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void ChildrenJobInfo::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

std::string ChildrenJobInfo::getDescription() const
{
    return description_;
}

void ChildrenJobInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChildrenJobInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChildrenJobInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ChildrenJobInfo::getEngineType() const
{
    return engineType_;
}

void ChildrenJobInfo::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ChildrenJobInfo::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ChildrenJobInfo::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ChildrenJobInfo::getErrorMsg() const
{
    return errorMsg_;
}

void ChildrenJobInfo::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ChildrenJobInfo::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ChildrenJobInfo::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string ChildrenJobInfo::getId() const
{
    return id_;
}

void ChildrenJobInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChildrenJobInfo::idIsSet() const
{
    return idIsSet_;
}

void ChildrenJobInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ChildrenJobInfo::getJobDirection() const
{
    return jobDirection_;
}

void ChildrenJobInfo::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool ChildrenJobInfo::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void ChildrenJobInfo::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string ChildrenJobInfo::getName() const
{
    return name_;
}

void ChildrenJobInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChildrenJobInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ChildrenJobInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ChildrenJobInfo::getNetType() const
{
    return netType_;
}

void ChildrenJobInfo::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool ChildrenJobInfo::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void ChildrenJobInfo::unsetnetType()
{
    netTypeIsSet_ = false;
}

bool ChildrenJobInfo::isNodeNewFramework() const
{
    return nodeNewFramework_;
}

void ChildrenJobInfo::setNodeNewFramework(bool value)
{
    nodeNewFramework_ = value;
    nodeNewFrameworkIsSet_ = true;
}

bool ChildrenJobInfo::nodeNewFrameworkIsSet() const
{
    return nodeNewFrameworkIsSet_;
}

void ChildrenJobInfo::unsetnodeNewFramework()
{
    nodeNewFrameworkIsSet_ = false;
}

std::string ChildrenJobInfo::getStatus() const
{
    return status_;
}

void ChildrenJobInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChildrenJobInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ChildrenJobInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChildrenJobInfo::getTaskType() const
{
    return taskType_;
}

void ChildrenJobInfo::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ChildrenJobInfo::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ChildrenJobInfo::unsettaskType()
{
    taskTypeIsSet_ = false;
}

JobActionResp ChildrenJobInfo::getJobAction() const
{
    return jobAction_;
}

void ChildrenJobInfo::setJobAction(const JobActionResp& value)
{
    jobAction_ = value;
    jobActionIsSet_ = true;
}

bool ChildrenJobInfo::jobActionIsSet() const
{
    return jobActionIsSet_;
}

void ChildrenJobInfo::unsetjobAction()
{
    jobActionIsSet_ = false;
}

}
}
}
}
}


