

#include "huaweicloud/drs/v5/model/ShowDbObjectTemplateProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDbObjectTemplateProgressRequest::ShowDbObjectTemplateProgressRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowDbObjectTemplateProgressRequest::~ShowDbObjectTemplateProgressRequest() = default;

void ShowDbObjectTemplateProgressRequest::validate()
{
}

web::json::value ShowDbObjectTemplateProgressRequest::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowDbObjectTemplateProgressRequest::fromJson(const web::json::value& val)
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


std::string ShowDbObjectTemplateProgressRequest::getJobId() const
{
    return jobId_;
}

void ShowDbObjectTemplateProgressRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDbObjectTemplateProgressRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDbObjectTemplateProgressRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDbObjectTemplateProgressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDbObjectTemplateProgressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDbObjectTemplateProgressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDbObjectTemplateProgressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowDbObjectTemplateProgressRequest::getOffset() const
{
    return offset_;
}

void ShowDbObjectTemplateProgressRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowDbObjectTemplateProgressRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowDbObjectTemplateProgressRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowDbObjectTemplateProgressRequest::getLimit() const
{
    return limit_;
}

void ShowDbObjectTemplateProgressRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowDbObjectTemplateProgressRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowDbObjectTemplateProgressRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowDbObjectTemplateProgressRequest::getType() const
{
    return type_;
}

void ShowDbObjectTemplateProgressRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowDbObjectTemplateProgressRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowDbObjectTemplateProgressRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


