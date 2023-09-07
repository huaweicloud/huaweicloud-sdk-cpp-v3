

#include "huaweicloud/drs/v5/model/ListJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobsRequest::ListJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    instanceIdsIsSet_ = false;
    instanceIp_ = "";
    instanceIpIsSet_ = false;
}

ListJobsRequest::~ListJobsRequest() = default;

void ListJobsRequest::validate()
{
}

web::json::value ListJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
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

    return val;
}

bool ListJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}

std::string ListJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListJobsRequest::getJobType() const
{
    return jobType_;
}

void ListJobsRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ListJobsRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ListJobsRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ListJobsRequest::getName() const
{
    return name_;
}

void ListJobsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListJobsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListJobsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListJobsRequest::getStatus() const
{
    return status_;
}

void ListJobsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListJobsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListJobsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListJobsRequest::getEngineType() const
{
    return engineType_;
}

void ListJobsRequest::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ListJobsRequest::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ListJobsRequest::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ListJobsRequest::getNetType() const
{
    return netType_;
}

void ListJobsRequest::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool ListJobsRequest::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void ListJobsRequest::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string ListJobsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListJobsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListJobsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListJobsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ListJobsRequest::getOffset() const
{
    return offset_;
}

void ListJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListJobsRequest::getLimit() const
{
    return limit_;
}

void ListJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListJobsRequest::getSortKey() const
{
    return sortKey_;
}

void ListJobsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListJobsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListJobsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListJobsRequest::getSortDir() const
{
    return sortDir_;
}

void ListJobsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListJobsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListJobsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListJobsRequest::getInstanceIds()
{
    return instanceIds_;
}

void ListJobsRequest::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ListJobsRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ListJobsRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string ListJobsRequest::getInstanceIp() const
{
    return instanceIp_;
}

void ListJobsRequest::setInstanceIp(const std::string& value)
{
    instanceIp_ = value;
    instanceIpIsSet_ = true;
}

bool ListJobsRequest::instanceIpIsSet() const
{
    return instanceIpIsSet_;
}

void ListJobsRequest::unsetinstanceIp()
{
    instanceIpIsSet_ = false;
}

}
}
}
}
}


