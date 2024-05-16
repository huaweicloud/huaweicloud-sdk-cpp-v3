

#include "huaweicloud/gaussdb/v3/model/CheckStarRocksResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckStarRocksResourceRequest::CheckStarRocksResourceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckStarRocksResourceRequest::~CheckStarRocksResourceRequest() = default;

void CheckStarRocksResourceRequest::validate()
{
}

web::json::value CheckStarRocksResourceRequest::toJson() const
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
bool CheckStarRocksResourceRequest::fromJson(const web::json::value& val)
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
            ResourceCheck refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckStarRocksResourceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckStarRocksResourceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckStarRocksResourceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckStarRocksResourceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ResourceCheck CheckStarRocksResourceRequest::getBody() const
{
    return body_;
}

void CheckStarRocksResourceRequest::setBody(const ResourceCheck& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckStarRocksResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckStarRocksResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


