

#include "huaweicloud/drs/v3/model/ListContentCompareOverviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListContentCompareOverviewRequest::ListContentCompareOverviewRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListContentCompareOverviewRequest::~ListContentCompareOverviewRequest() = default;

void ListContentCompareOverviewRequest::validate()
{
}

web::json::value ListContentCompareOverviewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(compareJobIdIsSet_) {
        val[utility::conversions::to_string_t("compare_job_id")] = ModelBase::toJson(compareJobId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListContentCompareOverviewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compare_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobId(refVal);
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


std::string ListContentCompareOverviewRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListContentCompareOverviewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListContentCompareOverviewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListContentCompareOverviewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListContentCompareOverviewRequest::getJobId() const
{
    return jobId_;
}

void ListContentCompareOverviewRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListContentCompareOverviewRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListContentCompareOverviewRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListContentCompareOverviewRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ListContentCompareOverviewRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ListContentCompareOverviewRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ListContentCompareOverviewRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

int32_t ListContentCompareOverviewRequest::getLimit() const
{
    return limit_;
}

void ListContentCompareOverviewRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListContentCompareOverviewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListContentCompareOverviewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListContentCompareOverviewRequest::getOffset() const
{
    return offset_;
}

void ListContentCompareOverviewRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListContentCompareOverviewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListContentCompareOverviewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


