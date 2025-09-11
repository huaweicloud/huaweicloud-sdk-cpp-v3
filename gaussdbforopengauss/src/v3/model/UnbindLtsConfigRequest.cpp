

#include "huaweicloud/gaussdbforopengauss/v3/model/UnbindLtsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UnbindLtsConfigRequest::UnbindLtsConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UnbindLtsConfigRequest::~UnbindLtsConfigRequest() = default;

void UnbindLtsConfigRequest::validate()
{
}

web::json::value UnbindLtsConfigRequest::toJson() const
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
bool UnbindLtsConfigRequest::fromJson(const web::json::value& val)
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
            UnbindLtsConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UnbindLtsConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void UnbindLtsConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UnbindLtsConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UnbindLtsConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UnbindLtsConfigRequestBody UnbindLtsConfigRequest::getBody() const
{
    return body_;
}

void UnbindLtsConfigRequest::setBody(const UnbindLtsConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnbindLtsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnbindLtsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


