

#include "huaweicloud/drs/v5/model/ListExtraColumnsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListExtraColumnsRequest::ListExtraColumnsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    isOnlyShowSent_ = false;
    isOnlyShowSentIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListExtraColumnsRequest::~ListExtraColumnsRequest() = default;

void ListExtraColumnsRequest::validate()
{
}

web::json::value ListExtraColumnsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(isOnlyShowSentIsSet_) {
        val[utility::conversions::to_string_t("is_only_show_sent")] = ModelBase::toJson(isOnlyShowSent_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListExtraColumnsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_only_show_sent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_only_show_sent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOnlyShowSent(refVal);
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


std::string ListExtraColumnsRequest::getJobId() const
{
    return jobId_;
}

void ListExtraColumnsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListExtraColumnsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListExtraColumnsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListExtraColumnsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListExtraColumnsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListExtraColumnsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListExtraColumnsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

bool ListExtraColumnsRequest::isIsOnlyShowSent() const
{
    return isOnlyShowSent_;
}

void ListExtraColumnsRequest::setIsOnlyShowSent(bool value)
{
    isOnlyShowSent_ = value;
    isOnlyShowSentIsSet_ = true;
}

bool ListExtraColumnsRequest::isOnlyShowSentIsSet() const
{
    return isOnlyShowSentIsSet_;
}

void ListExtraColumnsRequest::unsetisOnlyShowSent()
{
    isOnlyShowSentIsSet_ = false;
}

int32_t ListExtraColumnsRequest::getOffset() const
{
    return offset_;
}

void ListExtraColumnsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListExtraColumnsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListExtraColumnsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListExtraColumnsRequest::getLimit() const
{
    return limit_;
}

void ListExtraColumnsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListExtraColumnsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListExtraColumnsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


