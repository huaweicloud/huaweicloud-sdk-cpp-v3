

#include "huaweicloud/rds/v3/model/BatchResizeFlavorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchResizeFlavorRequest::BatchResizeFlavorRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchResizeFlavorRequest::~BatchResizeFlavorRequest() = default;

void BatchResizeFlavorRequest::validate()
{
}

web::json::value BatchResizeFlavorRequest::toJson() const
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
bool BatchResizeFlavorRequest::fromJson(const web::json::value& val)
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
            BatchResizeFlavorRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchResizeFlavorRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchResizeFlavorRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchResizeFlavorRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchResizeFlavorRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchResizeFlavorRequestBody BatchResizeFlavorRequest::getBody() const
{
    return body_;
}

void BatchResizeFlavorRequest::setBody(const BatchResizeFlavorRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResizeFlavorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResizeFlavorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


