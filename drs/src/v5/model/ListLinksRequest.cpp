

#include "huaweicloud/drs/v5/model/ListLinksRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListLinksRequest::ListLinksRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListLinksRequest::~ListLinksRequest() = default;

void ListLinksRequest::validate()
{
}

web::json::value ListLinksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListLinksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
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

std::string ListLinksRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListLinksRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListLinksRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListLinksRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListLinksRequest::getJobType() const
{
    return jobType_;
}

void ListLinksRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ListLinksRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ListLinksRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

int32_t ListLinksRequest::getOffset() const
{
    return offset_;
}

void ListLinksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLinksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLinksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLinksRequest::getLimit() const
{
    return limit_;
}

void ListLinksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLinksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLinksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


