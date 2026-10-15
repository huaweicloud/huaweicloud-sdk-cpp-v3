

#include "huaweicloud/drs/v5/model/ExportJobsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportJobsReq::ExportJobsReq()
{
    jobType_ = "";
    jobTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    dbsInstanceIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    completedAt_ = "";
    completedAtIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    billingTag_ = "";
    billingTagIsSet_ = false;
    billingMode_ = "";
    billingModeIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    instanceIp_ = "";
    instanceIpIsSet_ = false;
    innerIp_ = "";
    innerIpIsSet_ = false;
    specType_ = "";
    specTypeIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
}

ExportJobsReq::~ExportJobsReq() = default;

void ExportJobsReq::validate()
{
}

web::json::value ExportJobsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(dbsInstanceIdsIsSet_) {
        val[utility::conversions::to_string_t("dbs_instance_ids")] = ModelBase::toJson(dbsInstanceIds_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(completedAtIsSet_) {
        val[utility::conversions::to_string_t("completed_at")] = ModelBase::toJson(completedAt_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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
    if(billingModeIsSet_) {
        val[utility::conversions::to_string_t("billing_mode")] = ModelBase::toJson(billingMode_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(instanceIpIsSet_) {
        val[utility::conversions::to_string_t("instance_ip")] = ModelBase::toJson(instanceIp_);
    }
    if(innerIpIsSet_) {
        val[utility::conversions::to_string_t("inner_ip")] = ModelBase::toJson(innerIp_);
    }
    if(specTypeIsSet_) {
        val[utility::conversions::to_string_t("spec_type")] = ModelBase::toJson(specType_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool ExportJobsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dbs_instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbs_instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbsInstanceIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completed_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletedAt(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inner_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inner_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInnerIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


std::string ExportJobsReq::getJobType() const
{
    return jobType_;
}

void ExportJobsReq::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ExportJobsReq::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ExportJobsReq::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ExportJobsReq::getName() const
{
    return name_;
}

void ExportJobsReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExportJobsReq::nameIsSet() const
{
    return nameIsSet_;
}

void ExportJobsReq::unsetname()
{
    nameIsSet_ = false;
}

std::string ExportJobsReq::getStatus() const
{
    return status_;
}

void ExportJobsReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExportJobsReq::statusIsSet() const
{
    return statusIsSet_;
}

void ExportJobsReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ExportJobsReq::getDbsInstanceIds()
{
    return dbsInstanceIds_;
}

void ExportJobsReq::setDbsInstanceIds(const std::vector<std::string>& value)
{
    dbsInstanceIds_ = value;
    dbsInstanceIdsIsSet_ = true;
}

bool ExportJobsReq::dbsInstanceIdsIsSet() const
{
    return dbsInstanceIdsIsSet_;
}

void ExportJobsReq::unsetdbsInstanceIds()
{
    dbsInstanceIdsIsSet_ = false;
}

std::string ExportJobsReq::getDescription() const
{
    return description_;
}

void ExportJobsReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExportJobsReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExportJobsReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExportJobsReq::getCreateAt() const
{
    return createAt_;
}

void ExportJobsReq::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ExportJobsReq::createAtIsSet() const
{
    return createAtIsSet_;
}

void ExportJobsReq::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ExportJobsReq::getCompletedAt() const
{
    return completedAt_;
}

void ExportJobsReq::setCompletedAt(const std::string& value)
{
    completedAt_ = value;
    completedAtIsSet_ = true;
}

bool ExportJobsReq::completedAtIsSet() const
{
    return completedAtIsSet_;
}

void ExportJobsReq::unsetcompletedAt()
{
    completedAtIsSet_ = false;
}

std::string ExportJobsReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ExportJobsReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ExportJobsReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ExportJobsReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ExportJobsReq::getEngineType() const
{
    return engineType_;
}

void ExportJobsReq::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ExportJobsReq::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ExportJobsReq::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ExportJobsReq::getNetType() const
{
    return netType_;
}

void ExportJobsReq::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool ExportJobsReq::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void ExportJobsReq::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string ExportJobsReq::getBillingTag() const
{
    return billingTag_;
}

void ExportJobsReq::setBillingTag(const std::string& value)
{
    billingTag_ = value;
    billingTagIsSet_ = true;
}

bool ExportJobsReq::billingTagIsSet() const
{
    return billingTagIsSet_;
}

void ExportJobsReq::unsetbillingTag()
{
    billingTagIsSet_ = false;
}

std::string ExportJobsReq::getBillingMode() const
{
    return billingMode_;
}

void ExportJobsReq::setBillingMode(const std::string& value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool ExportJobsReq::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void ExportJobsReq::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

std::string ExportJobsReq::getPublicIp() const
{
    return publicIp_;
}

void ExportJobsReq::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool ExportJobsReq::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void ExportJobsReq::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string ExportJobsReq::getInstanceIp() const
{
    return instanceIp_;
}

void ExportJobsReq::setInstanceIp(const std::string& value)
{
    instanceIp_ = value;
    instanceIpIsSet_ = true;
}

bool ExportJobsReq::instanceIpIsSet() const
{
    return instanceIpIsSet_;
}

void ExportJobsReq::unsetinstanceIp()
{
    instanceIpIsSet_ = false;
}

std::string ExportJobsReq::getInnerIp() const
{
    return innerIp_;
}

void ExportJobsReq::setInnerIp(const std::string& value)
{
    innerIp_ = value;
    innerIpIsSet_ = true;
}

bool ExportJobsReq::innerIpIsSet() const
{
    return innerIpIsSet_;
}

void ExportJobsReq::unsetinnerIp()
{
    innerIpIsSet_ = false;
}

std::string ExportJobsReq::getSpecType() const
{
    return specType_;
}

void ExportJobsReq::setSpecType(const std::string& value)
{
    specType_ = value;
    specTypeIsSet_ = true;
}

bool ExportJobsReq::specTypeIsSet() const
{
    return specTypeIsSet_;
}

void ExportJobsReq::unsetspecType()
{
    specTypeIsSet_ = false;
}

std::string ExportJobsReq::getDirection() const
{
    return direction_;
}

void ExportJobsReq::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ExportJobsReq::directionIsSet() const
{
    return directionIsSet_;
}

void ExportJobsReq::unsetdirection()
{
    directionIsSet_ = false;
}

std::string ExportJobsReq::getTaskType() const
{
    return taskType_;
}

void ExportJobsReq::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ExportJobsReq::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ExportJobsReq::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string ExportJobsReq::getSortKey() const
{
    return sortKey_;
}

void ExportJobsReq::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ExportJobsReq::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ExportJobsReq::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ExportJobsReq::getSortDir() const
{
    return sortDir_;
}

void ExportJobsReq::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ExportJobsReq::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ExportJobsReq::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ExportJobsReq::getTag() const
{
    return tag_;
}

void ExportJobsReq::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ExportJobsReq::tagIsSet() const
{
    return tagIsSet_;
}

void ExportJobsReq::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


