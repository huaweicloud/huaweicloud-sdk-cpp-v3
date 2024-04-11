

#include "huaweicloud/drs/v3/model/ListDataLevelTableCompareJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListDataLevelTableCompareJobsRequest::ListDataLevelTableCompareJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDataLevelTableCompareJobsRequest::~ListDataLevelTableCompareJobsRequest() = default;

void ListDataLevelTableCompareJobsRequest::validate()
{
}

web::json::value ListDataLevelTableCompareJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDataLevelTableCompareJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListDataLevelTableCompareJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDataLevelTableCompareJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDataLevelTableCompareJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDataLevelTableCompareJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDataLevelTableCompareJobsRequest::getJobId() const
{
    return jobId_;
}

void ListDataLevelTableCompareJobsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListDataLevelTableCompareJobsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListDataLevelTableCompareJobsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ListDataLevelTableCompareJobsRequest::getLimit() const
{
    return limit_;
}

void ListDataLevelTableCompareJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDataLevelTableCompareJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDataLevelTableCompareJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDataLevelTableCompareJobsRequest::getOffset() const
{
    return offset_;
}

void ListDataLevelTableCompareJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDataLevelTableCompareJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDataLevelTableCompareJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


