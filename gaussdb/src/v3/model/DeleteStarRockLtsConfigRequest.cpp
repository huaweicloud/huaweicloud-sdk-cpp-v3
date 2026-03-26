

#include "huaweicloud/gaussdb/v3/model/DeleteStarRockLtsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarRockLtsConfigRequest::DeleteStarRockLtsConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteStarRockLtsConfigRequest::~DeleteStarRockLtsConfigRequest() = default;

void DeleteStarRockLtsConfigRequest::validate()
{
}

web::json::value DeleteStarRockLtsConfigRequest::toJson() const
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
bool DeleteStarRockLtsConfigRequest::fromJson(const web::json::value& val)
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
            HtapDeleteLTSConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteStarRockLtsConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteStarRockLtsConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteStarRockLtsConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteStarRockLtsConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

HtapDeleteLTSConfigRequestBody DeleteStarRockLtsConfigRequest::getBody() const
{
    return body_;
}

void DeleteStarRockLtsConfigRequest::setBody(const HtapDeleteLTSConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteStarRockLtsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteStarRockLtsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


