

#include "huaweicloud/drs/v5/model/QuerySubscriptionsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QuerySubscriptionsReq::QuerySubscriptionsReq()
{
    jobType_ = "";
    jobTypeIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    instanceIdsIsSet_ = false;
    instanceIp_ = "";
    instanceIpIsSet_ = false;
    tagsIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isBilling_ = false;
    isBillingIsSet_ = false;
    beginAt_ = "";
    beginAtIsSet_ = false;
}

QuerySubscriptionsReq::~QuerySubscriptionsReq() = default;

void QuerySubscriptionsReq::validate()
{
}

web::json::value QuerySubscriptionsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(instanceIpIsSet_) {
        val[utility::conversions::to_string_t("instance_ip")] = ModelBase::toJson(instanceIp_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isBillingIsSet_) {
        val[utility::conversions::to_string_t("is_billing")] = ModelBase::toJson(isBilling_);
    }
    if(beginAtIsSet_) {
        val[utility::conversions::to_string_t("begin_at")] = ModelBase::toJson(beginAt_);
    }

    return val;
}
bool QuerySubscriptionsReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_billing"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginAt(refVal);
        }
    }
    return ok;
}


std::string QuerySubscriptionsReq::getJobType() const
{
    return jobType_;
}

void QuerySubscriptionsReq::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool QuerySubscriptionsReq::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void QuerySubscriptionsReq::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string QuerySubscriptionsReq::getEngineType() const
{
    return engineType_;
}

void QuerySubscriptionsReq::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool QuerySubscriptionsReq::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void QuerySubscriptionsReq::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string QuerySubscriptionsReq::getNetType() const
{
    return netType_;
}

void QuerySubscriptionsReq::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool QuerySubscriptionsReq::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void QuerySubscriptionsReq::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string QuerySubscriptionsReq::getName() const
{
    return name_;
}

void QuerySubscriptionsReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QuerySubscriptionsReq::nameIsSet() const
{
    return nameIsSet_;
}

void QuerySubscriptionsReq::unsetname()
{
    nameIsSet_ = false;
}

std::string QuerySubscriptionsReq::getStatus() const
{
    return status_;
}

void QuerySubscriptionsReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QuerySubscriptionsReq::statusIsSet() const
{
    return statusIsSet_;
}

void QuerySubscriptionsReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QuerySubscriptionsReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void QuerySubscriptionsReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool QuerySubscriptionsReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void QuerySubscriptionsReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string QuerySubscriptionsReq::getSortKey() const
{
    return sortKey_;
}

void QuerySubscriptionsReq::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool QuerySubscriptionsReq::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void QuerySubscriptionsReq::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string QuerySubscriptionsReq::getSortDir() const
{
    return sortDir_;
}

void QuerySubscriptionsReq::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool QuerySubscriptionsReq::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void QuerySubscriptionsReq::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& QuerySubscriptionsReq::getInstanceIds()
{
    return instanceIds_;
}

void QuerySubscriptionsReq::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool QuerySubscriptionsReq::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void QuerySubscriptionsReq::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string QuerySubscriptionsReq::getInstanceIp() const
{
    return instanceIp_;
}

void QuerySubscriptionsReq::setInstanceIp(const std::string& value)
{
    instanceIp_ = value;
    instanceIpIsSet_ = true;
}

bool QuerySubscriptionsReq::instanceIpIsSet() const
{
    return instanceIpIsSet_;
}

void QuerySubscriptionsReq::unsetinstanceIp()
{
    instanceIpIsSet_ = false;
}

std::map<std::string, std::string>& QuerySubscriptionsReq::getTags()
{
    return tags_;
}

void QuerySubscriptionsReq::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QuerySubscriptionsReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void QuerySubscriptionsReq::unsettags()
{
    tagsIsSet_ = false;
}

std::string QuerySubscriptionsReq::getServiceName() const
{
    return serviceName_;
}

void QuerySubscriptionsReq::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool QuerySubscriptionsReq::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void QuerySubscriptionsReq::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string QuerySubscriptionsReq::getDescription() const
{
    return description_;
}

void QuerySubscriptionsReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QuerySubscriptionsReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QuerySubscriptionsReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool QuerySubscriptionsReq::isIsBilling() const
{
    return isBilling_;
}

void QuerySubscriptionsReq::setIsBilling(bool value)
{
    isBilling_ = value;
    isBillingIsSet_ = true;
}

bool QuerySubscriptionsReq::isBillingIsSet() const
{
    return isBillingIsSet_;
}

void QuerySubscriptionsReq::unsetisBilling()
{
    isBillingIsSet_ = false;
}

std::string QuerySubscriptionsReq::getBeginAt() const
{
    return beginAt_;
}

void QuerySubscriptionsReq::setBeginAt(const std::string& value)
{
    beginAt_ = value;
    beginAtIsSet_ = true;
}

bool QuerySubscriptionsReq::beginAtIsSet() const
{
    return beginAtIsSet_;
}

void QuerySubscriptionsReq::unsetbeginAt()
{
    beginAtIsSet_ = false;
}

}
}
}
}
}


