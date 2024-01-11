

#include "huaweicloud/drs/v5/model/ListJobHistoryParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobHistoryParametersRequest::ListJobHistoryParametersRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListJobHistoryParametersRequest::~ListJobHistoryParametersRequest() = default;

void ListJobHistoryParametersRequest::validate()
{
}

web::json::value ListJobHistoryParametersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListJobHistoryParametersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListJobHistoryParametersRequest::getJobId() const
{
    return jobId_;
}

void ListJobHistoryParametersRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListJobHistoryParametersRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListJobHistoryParametersRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListJobHistoryParametersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListJobHistoryParametersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListJobHistoryParametersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListJobHistoryParametersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListJobHistoryParametersRequest::getOffset() const
{
    return offset_;
}

void ListJobHistoryParametersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobHistoryParametersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobHistoryParametersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListJobHistoryParametersRequest::getLimit() const
{
    return limit_;
}

void ListJobHistoryParametersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobHistoryParametersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobHistoryParametersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListJobHistoryParametersRequest::getBeginTime() const
{
    return beginTime_;
}

void ListJobHistoryParametersRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListJobHistoryParametersRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListJobHistoryParametersRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListJobHistoryParametersRequest::getEndTime() const
{
    return endTime_;
}

void ListJobHistoryParametersRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListJobHistoryParametersRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListJobHistoryParametersRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListJobHistoryParametersRequest::getName() const
{
    return name_;
}

void ListJobHistoryParametersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListJobHistoryParametersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListJobHistoryParametersRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


