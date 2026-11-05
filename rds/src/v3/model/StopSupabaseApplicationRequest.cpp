

#include "huaweicloud/rds/v3/model/StopSupabaseApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StopSupabaseApplicationRequest::StopSupabaseApplicationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

StopSupabaseApplicationRequest::~StopSupabaseApplicationRequest() = default;

void StopSupabaseApplicationRequest::validate()
{
}

web::json::value StopSupabaseApplicationRequest::toJson() const
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
bool StopSupabaseApplicationRequest::fromJson(const web::json::value& val)
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


std::string StopSupabaseApplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopSupabaseApplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopSupabaseApplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopSupabaseApplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopSupabaseApplicationRequest::getApplicationId() const
{
    return applicationId_;
}

void StopSupabaseApplicationRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool StopSupabaseApplicationRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void StopSupabaseApplicationRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


