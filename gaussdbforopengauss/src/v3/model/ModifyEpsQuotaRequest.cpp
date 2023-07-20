

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyEpsQuotaRequest::ModifyEpsQuotaRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyEpsQuotaRequest::~ModifyEpsQuotaRequest() = default;

void ModifyEpsQuotaRequest::validate()
{
}

web::json::value ModifyEpsQuotaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ModifyEpsQuotaRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyEpsQuotaRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ModifyEpsQuotaRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyEpsQuotaRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyEpsQuotaRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyEpsQuotaRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyEpsQuotaRequestBody ModifyEpsQuotaRequest::getBody() const
{
    return body_;
}

void ModifyEpsQuotaRequest::setBody(const ModifyEpsQuotaRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyEpsQuotaRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyEpsQuotaRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


