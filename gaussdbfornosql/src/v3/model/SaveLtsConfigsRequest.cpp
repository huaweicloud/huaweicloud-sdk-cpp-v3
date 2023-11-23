

#include "huaweicloud/gaussdbfornosql/v3/model/SaveLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SaveLtsConfigsRequest::SaveLtsConfigsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SaveLtsConfigsRequest::~SaveLtsConfigsRequest() = default;

void SaveLtsConfigsRequest::validate()
{
}

web::json::value SaveLtsConfigsRequest::toJson() const
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
bool SaveLtsConfigsRequest::fromJson(const web::json::value& val)
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
            SaveLtsConfigsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void SaveLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SaveLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SaveLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SaveLtsConfigsRequestBody SaveLtsConfigsRequest::getBody() const
{
    return body_;
}

void SaveLtsConfigsRequest::setBody(const SaveLtsConfigsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveLtsConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveLtsConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


