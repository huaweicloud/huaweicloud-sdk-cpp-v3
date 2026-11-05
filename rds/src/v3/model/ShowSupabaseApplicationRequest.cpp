

#include "huaweicloud/rds/v3/model/ShowSupabaseApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSupabaseApplicationRequest::ShowSupabaseApplicationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

ShowSupabaseApplicationRequest::~ShowSupabaseApplicationRequest() = default;

void ShowSupabaseApplicationRequest::validate()
{
}

web::json::value ShowSupabaseApplicationRequest::toJson() const
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
bool ShowSupabaseApplicationRequest::fromJson(const web::json::value& val)
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


std::string ShowSupabaseApplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSupabaseApplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSupabaseApplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSupabaseApplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSupabaseApplicationRequest::getApplicationId() const
{
    return applicationId_;
}

void ShowSupabaseApplicationRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ShowSupabaseApplicationRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ShowSupabaseApplicationRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


