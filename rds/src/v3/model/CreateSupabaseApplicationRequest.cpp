

#include "huaweicloud/rds/v3/model/CreateSupabaseApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSupabaseApplicationRequest::CreateSupabaseApplicationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    xClientToken_ = "";
    xClientTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSupabaseApplicationRequest::~CreateSupabaseApplicationRequest() = default;

void CreateSupabaseApplicationRequest::validate()
{
}

web::json::value CreateSupabaseApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(xClientTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Client-Token")] = ModelBase::toJson(xClientToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSupabaseApplicationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Client-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Client-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXClientToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSupabaseApplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSupabaseApplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateSupabaseApplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateSupabaseApplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateSupabaseApplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateSupabaseApplicationRequest::getXClientToken() const
{
    return xClientToken_;
}

void CreateSupabaseApplicationRequest::setXClientToken(const std::string& value)
{
    xClientToken_ = value;
    xClientTokenIsSet_ = true;
}

bool CreateSupabaseApplicationRequest::xClientTokenIsSet() const
{
    return xClientTokenIsSet_;
}

void CreateSupabaseApplicationRequest::unsetxClientToken()
{
    xClientTokenIsSet_ = false;
}

CreateSupabaseApplicationRequestBody CreateSupabaseApplicationRequest::getBody() const
{
    return body_;
}

void CreateSupabaseApplicationRequest::setBody(const CreateSupabaseApplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSupabaseApplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSupabaseApplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


