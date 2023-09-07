

#include "huaweicloud/drs/v5/model/ShowDbObjectsListRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDbObjectsListRequest::ShowDbObjectsListRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowDbObjectsListRequest::~ShowDbObjectsListRequest() = default;

void ShowDbObjectsListRequest::validate()
{
}

web::json::value ShowDbObjectsListRequest::toJson() const
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

bool ShowDbObjectsListRequest::fromJson(const web::json::value& val)
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

std::string ShowDbObjectsListRequest::getJobId() const
{
    return jobId_;
}

void ShowDbObjectsListRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDbObjectsListRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDbObjectsListRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDbObjectsListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDbObjectsListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDbObjectsListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDbObjectsListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDbObjectsListRequest::getType() const
{
    return type_;
}

void ShowDbObjectsListRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowDbObjectsListRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowDbObjectsListRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


