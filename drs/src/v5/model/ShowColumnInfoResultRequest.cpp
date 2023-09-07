

#include "huaweicloud/drs/v5/model/ShowColumnInfoResultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowColumnInfoResultRequest::ShowColumnInfoResultRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowColumnInfoResultRequest::~ShowColumnInfoResultRequest() = default;

void ShowColumnInfoResultRequest::validate()
{
}

web::json::value ShowColumnInfoResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ShowColumnInfoResultRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
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

std::string ShowColumnInfoResultRequest::getJobId() const
{
    return jobId_;
}

void ShowColumnInfoResultRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowColumnInfoResultRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowColumnInfoResultRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowColumnInfoResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowColumnInfoResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowColumnInfoResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowColumnInfoResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowColumnInfoResultRequest::getQueryId() const
{
    return queryId_;
}

void ShowColumnInfoResultRequest::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ShowColumnInfoResultRequest::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ShowColumnInfoResultRequest::unsetqueryId()
{
    queryIdIsSet_ = false;
}

int32_t ShowColumnInfoResultRequest::getOffset() const
{
    return offset_;
}

void ShowColumnInfoResultRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowColumnInfoResultRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowColumnInfoResultRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowColumnInfoResultRequest::getLimit() const
{
    return limit_;
}

void ShowColumnInfoResultRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowColumnInfoResultRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowColumnInfoResultRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


