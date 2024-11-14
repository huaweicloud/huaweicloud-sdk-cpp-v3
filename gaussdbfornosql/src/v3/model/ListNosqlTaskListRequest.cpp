

#include "huaweicloud/gaussdbfornosql/v3/model/ListNosqlTaskListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListNosqlTaskListRequest::ListNosqlTaskListRequest()
{
    jobName_ = "";
    jobNameIsSet_ = false;
    jobStatus_ = "";
    jobStatusIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListNosqlTaskListRequest::~ListNosqlTaskListRequest() = default;

void ListNosqlTaskListRequest::validate()
{
}

web::json::value ListNosqlTaskListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobStatusIsSet_) {
        val[utility::conversions::to_string_t("job_status")] = ModelBase::toJson(jobStatus_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListNosqlTaskListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListNosqlTaskListRequest::getJobName() const
{
    return jobName_;
}

void ListNosqlTaskListRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ListNosqlTaskListRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ListNosqlTaskListRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ListNosqlTaskListRequest::getJobStatus() const
{
    return jobStatus_;
}

void ListNosqlTaskListRequest::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool ListNosqlTaskListRequest::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void ListNosqlTaskListRequest::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string ListNosqlTaskListRequest::getInstanceId() const
{
    return instanceId_;
}

void ListNosqlTaskListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListNosqlTaskListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListNosqlTaskListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListNosqlTaskListRequest::getStartTime() const
{
    return startTime_;
}

void ListNosqlTaskListRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListNosqlTaskListRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListNosqlTaskListRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListNosqlTaskListRequest::getEndTime() const
{
    return endTime_;
}

void ListNosqlTaskListRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListNosqlTaskListRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListNosqlTaskListRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListNosqlTaskListRequest::getOffset() const
{
    return offset_;
}

void ListNosqlTaskListRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNosqlTaskListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNosqlTaskListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListNosqlTaskListRequest::getLimit() const
{
    return limit_;
}

void ListNosqlTaskListRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNosqlTaskListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNosqlTaskListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


