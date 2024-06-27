

#include "huaweicloud/drs/v5/model/ShowReplayResultsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayResultsRequest::ShowReplayResultsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    targetName_ = "";
    targetNameIsSet_ = false;
    isSample_ = false;
    isSampleIsSet_ = false;
    errorType_ = "";
    errorTypeIsSet_ = false;
    sqlTemplateMd5_ = "";
    sqlTemplateMd5IsSet_ = false;
}

ShowReplayResultsRequest::~ShowReplayResultsRequest() = default;

void ShowReplayResultsRequest::validate()
{
}

web::json::value ShowReplayResultsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(targetNameIsSet_) {
        val[utility::conversions::to_string_t("target_name")] = ModelBase::toJson(targetName_);
    }
    if(isSampleIsSet_) {
        val[utility::conversions::to_string_t("is_sample")] = ModelBase::toJson(isSample_);
    }
    if(errorTypeIsSet_) {
        val[utility::conversions::to_string_t("error_type")] = ModelBase::toJson(errorType_);
    }
    if(sqlTemplateMd5IsSet_) {
        val[utility::conversions::to_string_t("sql_template_md5")] = ModelBase::toJson(sqlTemplateMd5_);
    }

    return val;
}
bool ShowReplayResultsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sample"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_template_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_template_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTemplateMd5(refVal);
        }
    }
    return ok;
}


std::string ShowReplayResultsRequest::getJobId() const
{
    return jobId_;
}

void ShowReplayResultsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReplayResultsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReplayResultsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowReplayResultsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowReplayResultsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowReplayResultsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowReplayResultsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowReplayResultsRequest::getType() const
{
    return type_;
}

void ShowReplayResultsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowReplayResultsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowReplayResultsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowReplayResultsRequest::getStartTime() const
{
    return startTime_;
}

void ShowReplayResultsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowReplayResultsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowReplayResultsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowReplayResultsRequest::getEndTime() const
{
    return endTime_;
}

void ShowReplayResultsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowReplayResultsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowReplayResultsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t ShowReplayResultsRequest::getOffset() const
{
    return offset_;
}

void ShowReplayResultsRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowReplayResultsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowReplayResultsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ShowReplayResultsRequest::getLimit() const
{
    return limit_;
}

void ShowReplayResultsRequest::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowReplayResultsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowReplayResultsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowReplayResultsRequest::getSortKey() const
{
    return sortKey_;
}

void ShowReplayResultsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowReplayResultsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowReplayResultsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowReplayResultsRequest::getSortDir() const
{
    return sortDir_;
}

void ShowReplayResultsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowReplayResultsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowReplayResultsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ShowReplayResultsRequest::getTargetName() const
{
    return targetName_;
}

void ShowReplayResultsRequest::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool ShowReplayResultsRequest::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void ShowReplayResultsRequest::unsettargetName()
{
    targetNameIsSet_ = false;
}

bool ShowReplayResultsRequest::isIsSample() const
{
    return isSample_;
}

void ShowReplayResultsRequest::setIsSample(bool value)
{
    isSample_ = value;
    isSampleIsSet_ = true;
}

bool ShowReplayResultsRequest::isSampleIsSet() const
{
    return isSampleIsSet_;
}

void ShowReplayResultsRequest::unsetisSample()
{
    isSampleIsSet_ = false;
}

std::string ShowReplayResultsRequest::getErrorType() const
{
    return errorType_;
}

void ShowReplayResultsRequest::setErrorType(const std::string& value)
{
    errorType_ = value;
    errorTypeIsSet_ = true;
}

bool ShowReplayResultsRequest::errorTypeIsSet() const
{
    return errorTypeIsSet_;
}

void ShowReplayResultsRequest::unseterrorType()
{
    errorTypeIsSet_ = false;
}

std::string ShowReplayResultsRequest::getSqlTemplateMd5() const
{
    return sqlTemplateMd5_;
}

void ShowReplayResultsRequest::setSqlTemplateMd5(const std::string& value)
{
    sqlTemplateMd5_ = value;
    sqlTemplateMd5IsSet_ = true;
}

bool ShowReplayResultsRequest::sqlTemplateMd5IsSet() const
{
    return sqlTemplateMd5IsSet_;
}

void ShowReplayResultsRequest::unsetsqlTemplateMd5()
{
    sqlTemplateMd5IsSet_ = false;
}

}
}
}
}
}


