

#include "huaweicloud/rds/v3/model/StartSupabaseApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartSupabaseApplicationRequest::StartSupabaseApplicationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

StartSupabaseApplicationRequest::~StartSupabaseApplicationRequest() = default;

void StartSupabaseApplicationRequest::validate()
{
}

web::json::value StartSupabaseApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }

    return val;
}
bool StartSupabaseApplicationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    return ok;
}


std::string StartSupabaseApplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartSupabaseApplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartSupabaseApplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartSupabaseApplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartSupabaseApplicationRequest::getApplicationId() const
{
    return applicationId_;
}

void StartSupabaseApplicationRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool StartSupabaseApplicationRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void StartSupabaseApplicationRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


