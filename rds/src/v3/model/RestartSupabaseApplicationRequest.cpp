

#include "huaweicloud/rds/v3/model/RestartSupabaseApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestartSupabaseApplicationRequest::RestartSupabaseApplicationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

RestartSupabaseApplicationRequest::~RestartSupabaseApplicationRequest() = default;

void RestartSupabaseApplicationRequest::validate()
{
}

web::json::value RestartSupabaseApplicationRequest::toJson() const
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
bool RestartSupabaseApplicationRequest::fromJson(const web::json::value& val)
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


std::string RestartSupabaseApplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartSupabaseApplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartSupabaseApplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartSupabaseApplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RestartSupabaseApplicationRequest::getApplicationId() const
{
    return applicationId_;
}

void RestartSupabaseApplicationRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool RestartSupabaseApplicationRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void RestartSupabaseApplicationRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


