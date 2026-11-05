

#include "huaweicloud/rds/v3/model/ShowSupabaseApplicationAuthConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSupabaseApplicationAuthConfigRequest::ShowSupabaseApplicationAuthConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

ShowSupabaseApplicationAuthConfigRequest::~ShowSupabaseApplicationAuthConfigRequest() = default;

void ShowSupabaseApplicationAuthConfigRequest::validate()
{
}

web::json::value ShowSupabaseApplicationAuthConfigRequest::toJson() const
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
bool ShowSupabaseApplicationAuthConfigRequest::fromJson(const web::json::value& val)
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


std::string ShowSupabaseApplicationAuthConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSupabaseApplicationAuthConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSupabaseApplicationAuthConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSupabaseApplicationAuthConfigRequest::getApplicationId() const
{
    return applicationId_;
}

void ShowSupabaseApplicationAuthConfigRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ShowSupabaseApplicationAuthConfigRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


