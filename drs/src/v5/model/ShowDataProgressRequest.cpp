

#include "huaweicloud/drs/v5/model/ShowDataProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDataProgressRequest::ShowDataProgressRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowDataProgressRequest::~ShowDataProgressRequest() = default;

void ShowDataProgressRequest::validate()
{
}

web::json::value ShowDataProgressRequest::toJson() const
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

    return val;
}
bool ShowDataProgressRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDataProgressRequest::getJobId() const
{
    return jobId_;
}

void ShowDataProgressRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDataProgressRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDataProgressRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDataProgressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDataProgressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDataProgressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDataProgressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowDataProgressRequest::getOffset() const
{
    return offset_;
}

void ShowDataProgressRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowDataProgressRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowDataProgressRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowDataProgressRequest::getLimit() const
{
    return limit_;
}

void ShowDataProgressRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowDataProgressRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowDataProgressRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


