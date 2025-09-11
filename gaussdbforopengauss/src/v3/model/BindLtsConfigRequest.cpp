

#include "huaweicloud/gaussdbforopengauss/v3/model/BindLtsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindLtsConfigRequest::BindLtsConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BindLtsConfigRequest::~BindLtsConfigRequest() = default;

void BindLtsConfigRequest::validate()
{
}

web::json::value BindLtsConfigRequest::toJson() const
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
bool BindLtsConfigRequest::fromJson(const web::json::value& val)
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
            BindLtsConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindLtsConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void BindLtsConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BindLtsConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BindLtsConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BindLtsConfigRequestBody BindLtsConfigRequest::getBody() const
{
    return body_;
}

void BindLtsConfigRequest::setBody(const BindLtsConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindLtsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindLtsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


