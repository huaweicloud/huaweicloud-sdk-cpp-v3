

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAspInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAspInfosRequest::ListAspInfosRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListAspInfosRequest::~ListAspInfosRequest() = default;

void ListAspInfosRequest::validate()
{
}

web::json::value ListAspInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListAspInfosRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string ListAspInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAspInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAspInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAspInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAspInfosRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAspInfosRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAspInfosRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAspInfosRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListAspInfosRequest::getOffset() const
{
    return offset_;
}

void ListAspInfosRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAspInfosRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAspInfosRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAspInfosRequest::getLimit() const
{
    return limit_;
}

void ListAspInfosRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAspInfosRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAspInfosRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAspInfosRequest::getStartTime() const
{
    return startTime_;
}

void ListAspInfosRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAspInfosRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAspInfosRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAspInfosRequest::getEndTime() const
{
    return endTime_;
}

void ListAspInfosRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAspInfosRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAspInfosRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListAspInfosRequest::getJobId() const
{
    return jobId_;
}

void ListAspInfosRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListAspInfosRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListAspInfosRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


