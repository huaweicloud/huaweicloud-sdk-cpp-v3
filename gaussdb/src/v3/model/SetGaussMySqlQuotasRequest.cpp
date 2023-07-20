

#include "huaweicloud/gaussdb/v3/model/SetGaussMySqlQuotasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetGaussMySqlQuotasRequest::SetGaussMySqlQuotasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetGaussMySqlQuotasRequest::~SetGaussMySqlQuotasRequest() = default;

void SetGaussMySqlQuotasRequest::validate()
{
}

web::json::value SetGaussMySqlQuotasRequest::toJson() const
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

bool SetGaussMySqlQuotasRequest::fromJson(const web::json::value& val)
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
            SetQuotasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetGaussMySqlQuotasRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetGaussMySqlQuotasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetGaussMySqlQuotasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetGaussMySqlQuotasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SetQuotasRequestBody SetGaussMySqlQuotasRequest::getBody() const
{
    return body_;
}

void SetGaussMySqlQuotasRequest::setBody(const SetQuotasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetGaussMySqlQuotasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetGaussMySqlQuotasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


