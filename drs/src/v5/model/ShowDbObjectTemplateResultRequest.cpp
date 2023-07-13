

#include "huaweicloud/drs/v5/model/ShowDbObjectTemplateResultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDbObjectTemplateResultRequest::ShowDbObjectTemplateResultRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowDbObjectTemplateResultRequest::~ShowDbObjectTemplateResultRequest() = default;

void ShowDbObjectTemplateResultRequest::validate()
{
}

web::json::value ShowDbObjectTemplateResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool ShowDbObjectTemplateResultRequest::fromJson(const web::json::value& val)
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

std::string ShowDbObjectTemplateResultRequest::getJobId() const
{
    return jobId_;
}

void ShowDbObjectTemplateResultRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDbObjectTemplateResultRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDbObjectTemplateResultRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDbObjectTemplateResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDbObjectTemplateResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDbObjectTemplateResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDbObjectTemplateResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDbObjectTemplateResultRequest::getType() const
{
    return type_;
}

void ShowDbObjectTemplateResultRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowDbObjectTemplateResultRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowDbObjectTemplateResultRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


