

#include "huaweicloud/drs/v3/model/ListDataCompareOverviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListDataCompareOverviewRequest::ListDataCompareOverviewRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDataCompareOverviewRequest::~ListDataCompareOverviewRequest() = default;

void ListDataCompareOverviewRequest::validate()
{
}

web::json::value ListDataCompareOverviewRequest::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDataCompareOverviewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ListDataCompareOverviewRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDataCompareOverviewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDataCompareOverviewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDataCompareOverviewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDataCompareOverviewRequest::getJobId() const
{
    return jobId_;
}

void ListDataCompareOverviewRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListDataCompareOverviewRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListDataCompareOverviewRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListDataCompareOverviewRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ListDataCompareOverviewRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ListDataCompareOverviewRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ListDataCompareOverviewRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

int32_t ListDataCompareOverviewRequest::getStatus() const
{
    return status_;
}

void ListDataCompareOverviewRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDataCompareOverviewRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListDataCompareOverviewRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListDataCompareOverviewRequest::getLimit() const
{
    return limit_;
}

void ListDataCompareOverviewRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDataCompareOverviewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDataCompareOverviewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDataCompareOverviewRequest::getOffset() const
{
    return offset_;
}

void ListDataCompareOverviewRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDataCompareOverviewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDataCompareOverviewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


