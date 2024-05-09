

#include "huaweicloud/drs/v3/model/ListObejectLevelCompareDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListObejectLevelCompareDetailRequest::ListObejectLevelCompareDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareType_ = "";
    compareTypeIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListObejectLevelCompareDetailRequest::~ListObejectLevelCompareDetailRequest() = default;

void ListObejectLevelCompareDetailRequest::validate()
{
}

web::json::value ListObejectLevelCompareDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
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
bool ListObejectLevelCompareDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
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


std::string ListObejectLevelCompareDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListObejectLevelCompareDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListObejectLevelCompareDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListObejectLevelCompareDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListObejectLevelCompareDetailRequest::getJobId() const
{
    return jobId_;
}

void ListObejectLevelCompareDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListObejectLevelCompareDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListObejectLevelCompareDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListObejectLevelCompareDetailRequest::getCompareType() const
{
    return compareType_;
}

void ListObejectLevelCompareDetailRequest::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ListObejectLevelCompareDetailRequest::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ListObejectLevelCompareDetailRequest::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string ListObejectLevelCompareDetailRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ListObejectLevelCompareDetailRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ListObejectLevelCompareDetailRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ListObejectLevelCompareDetailRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

int32_t ListObejectLevelCompareDetailRequest::getLimit() const
{
    return limit_;
}

void ListObejectLevelCompareDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListObejectLevelCompareDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListObejectLevelCompareDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListObejectLevelCompareDetailRequest::getOffset() const
{
    return offset_;
}

void ListObejectLevelCompareDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListObejectLevelCompareDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListObejectLevelCompareDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


