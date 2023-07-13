

#include "huaweicloud/drs/v3/model/BatchResetPasswordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchResetPasswordRequest::BatchResetPasswordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchResetPasswordRequest::~BatchResetPasswordRequest() = default;

void BatchResetPasswordRequest::validate()
{
}

web::json::value BatchResetPasswordRequest::toJson() const
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

bool BatchResetPasswordRequest::fromJson(const web::json::value& val)
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
            BatchModifyPwdReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchResetPasswordRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchResetPasswordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchResetPasswordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchResetPasswordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchModifyPwdReq BatchResetPasswordRequest::getBody() const
{
    return body_;
}

void BatchResetPasswordRequest::setBody(const BatchModifyPwdReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResetPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResetPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


