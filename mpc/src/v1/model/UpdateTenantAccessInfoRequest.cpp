

#include "huaweicloud/mpc/v1/model/UpdateTenantAccessInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




UpdateTenantAccessInfoRequest::UpdateTenantAccessInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTenantAccessInfoRequest::~UpdateTenantAccessInfoRequest() = default;

void UpdateTenantAccessInfoRequest::validate()
{
}

web::json::value UpdateTenantAccessInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("x-language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTenantAccessInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x-language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTenantAccessInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTenantAccessInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateTenantAccessInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateTenantAccessInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateTenantAccessInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateTenantAccessInfoReq UpdateTenantAccessInfoRequest::getBody() const
{
    return body_;
}

void UpdateTenantAccessInfoRequest::setBody(const UpdateTenantAccessInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTenantAccessInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTenantAccessInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


