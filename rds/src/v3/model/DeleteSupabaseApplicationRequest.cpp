

#include "huaweicloud/rds/v3/model/DeleteSupabaseApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSupabaseApplicationRequest::DeleteSupabaseApplicationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

DeleteSupabaseApplicationRequest::~DeleteSupabaseApplicationRequest() = default;

void DeleteSupabaseApplicationRequest::validate()
{
}

web::json::value DeleteSupabaseApplicationRequest::toJson() const
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
bool DeleteSupabaseApplicationRequest::fromJson(const web::json::value& val)
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


std::string DeleteSupabaseApplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteSupabaseApplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteSupabaseApplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteSupabaseApplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteSupabaseApplicationRequest::getApplicationId() const
{
    return applicationId_;
}

void DeleteSupabaseApplicationRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool DeleteSupabaseApplicationRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void DeleteSupabaseApplicationRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


