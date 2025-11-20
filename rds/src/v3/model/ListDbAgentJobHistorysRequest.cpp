

#include "huaweicloud/rds/v3/model/ListDbAgentJobHistorysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobHistorysRequest::ListDbAgentJobHistorysRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    runStatus_ = "";
    runStatusIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDbAgentJobHistorysRequest::~ListDbAgentJobHistorysRequest() = default;

void ListDbAgentJobHistorysRequest::validate()
{
}

web::json::value ListDbAgentJobHistorysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(runStatusIsSet_) {
        val[utility::conversions::to_string_t("run_status")] = ModelBase::toJson(runStatus_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDbAgentJobHistorysRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunStatus(refVal);
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


std::string ListDbAgentJobHistorysRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDbAgentJobHistorysRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDbAgentJobHistorysRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDbAgentJobHistorysRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDbAgentJobHistorysRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDbAgentJobHistorysRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDbAgentJobHistorysRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDbAgentJobHistorysRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDbAgentJobHistorysRequest::getJobId() const
{
    return jobId_;
}

void ListDbAgentJobHistorysRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListDbAgentJobHistorysRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListDbAgentJobHistorysRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListDbAgentJobHistorysRequest::getRunStatus() const
{
    return runStatus_;
}

void ListDbAgentJobHistorysRequest::setRunStatus(const std::string& value)
{
    runStatus_ = value;
    runStatusIsSet_ = true;
}

bool ListDbAgentJobHistorysRequest::runStatusIsSet() const
{
    return runStatusIsSet_;
}

void ListDbAgentJobHistorysRequest::unsetrunStatus()
{
    runStatusIsSet_ = false;
}

int32_t ListDbAgentJobHistorysRequest::getOffset() const
{
    return offset_;
}

void ListDbAgentJobHistorysRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbAgentJobHistorysRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbAgentJobHistorysRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDbAgentJobHistorysRequest::getLimit() const
{
    return limit_;
}

void ListDbAgentJobHistorysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbAgentJobHistorysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbAgentJobHistorysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


