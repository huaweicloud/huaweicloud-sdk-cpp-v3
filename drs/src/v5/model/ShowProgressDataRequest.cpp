

#include "huaweicloud/drs/v5/model/ShowProgressDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowProgressDataRequest::ShowProgressDataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowProgressDataRequest::~ShowProgressDataRequest() = default;

void ShowProgressDataRequest::validate()
{
}

web::json::value ShowProgressDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowProgressDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ShowProgressDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowProgressDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowProgressDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowProgressDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowProgressDataRequest::getJobId() const
{
    return jobId_;
}

void ShowProgressDataRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowProgressDataRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowProgressDataRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowProgressDataRequest::getOffset() const
{
    return offset_;
}

void ShowProgressDataRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowProgressDataRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowProgressDataRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowProgressDataRequest::getLimit() const
{
    return limit_;
}

void ShowProgressDataRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowProgressDataRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowProgressDataRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowProgressDataRequest::getType() const
{
    return type_;
}

void ShowProgressDataRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowProgressDataRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowProgressDataRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


