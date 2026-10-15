

#include "huaweicloud/drs/v5/model/ShowTaskExecuteProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowTaskExecuteProgressRequest::ShowTaskExecuteProgressRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowTaskExecuteProgressRequest::~ShowTaskExecuteProgressRequest() = default;

void ShowTaskExecuteProgressRequest::validate()
{
}

web::json::value ShowTaskExecuteProgressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowTaskExecuteProgressRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
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


std::string ShowTaskExecuteProgressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTaskExecuteProgressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTaskExecuteProgressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTaskExecuteProgressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowTaskExecuteProgressRequest::getAsyncJobId() const
{
    return asyncJobId_;
}

void ShowTaskExecuteProgressRequest::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool ShowTaskExecuteProgressRequest::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void ShowTaskExecuteProgressRequest::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::string ShowTaskExecuteProgressRequest::getType() const
{
    return type_;
}

void ShowTaskExecuteProgressRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowTaskExecuteProgressRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowTaskExecuteProgressRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


