

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationAuthConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationAuthConfigRequest::ModifySupabaseApplicationAuthConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifySupabaseApplicationAuthConfigRequest::~ModifySupabaseApplicationAuthConfigRequest() = default;

void ModifySupabaseApplicationAuthConfigRequest::validate()
{
}

web::json::value ModifySupabaseApplicationAuthConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifySupabaseApplicationAuthConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifySupabaseApplicationAuthConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifySupabaseApplicationAuthConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifySupabaseApplicationAuthConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifySupabaseApplicationAuthConfigRequest::getApplicationId() const
{
    return applicationId_;
}

void ModifySupabaseApplicationAuthConfigRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

ModifySupabaseApplicationAuthConfigRequestBody ModifySupabaseApplicationAuthConfigRequest::getBody() const
{
    return body_;
}

void ModifySupabaseApplicationAuthConfigRequest::setBody(const ModifySupabaseApplicationAuthConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


