

#include "huaweicloud/rds/v3/model/ListDbAgentJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobsRequest::ListDbAgentJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDbAgentJobsRequest::~ListDbAgentJobsRequest() = default;

void ListDbAgentJobsRequest::validate()
{
}

web::json::value ListDbAgentJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDbAgentJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string ListDbAgentJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDbAgentJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDbAgentJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDbAgentJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDbAgentJobsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDbAgentJobsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDbAgentJobsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDbAgentJobsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDbAgentJobsRequest::getJobType() const
{
    return jobType_;
}

void ListDbAgentJobsRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ListDbAgentJobsRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ListDbAgentJobsRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

int32_t ListDbAgentJobsRequest::getOffset() const
{
    return offset_;
}

void ListDbAgentJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbAgentJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbAgentJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDbAgentJobsRequest::getLimit() const
{
    return limit_;
}

void ListDbAgentJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbAgentJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbAgentJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


