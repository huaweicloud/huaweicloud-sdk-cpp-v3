

#include "huaweicloud/gaussdb/v3/model/CheckStarrocksParamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckStarrocksParamsRequest::CheckStarrocksParamsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckStarrocksParamsRequest::~CheckStarrocksParamsRequest() = default;

void CheckStarrocksParamsRequest::validate()
{
}

web::json::value CheckStarrocksParamsRequest::toJson() const
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
bool CheckStarrocksParamsRequest::fromJson(const web::json::value& val)
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
            CheckStarrocksParamsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckStarrocksParamsRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckStarrocksParamsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckStarrocksParamsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckStarrocksParamsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CheckStarrocksParamsRequestBody CheckStarrocksParamsRequest::getBody() const
{
    return body_;
}

void CheckStarrocksParamsRequest::setBody(const CheckStarrocksParamsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckStarrocksParamsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckStarrocksParamsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


