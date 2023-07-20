

#include "huaweicloud/drs/v5/model/ValidateJobNameRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ValidateJobNameRequest::ValidateJobNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ValidateJobNameRequest::~ValidateJobNameRequest() = default;

void ValidateJobNameRequest::validate()
{
}

web::json::value ValidateJobNameRequest::toJson() const
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

bool ValidateJobNameRequest::fromJson(const web::json::value& val)
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
            CheckJobNameReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ValidateJobNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void ValidateJobNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ValidateJobNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ValidateJobNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CheckJobNameReq ValidateJobNameRequest::getBody() const
{
    return body_;
}

void ValidateJobNameRequest::setBody(const CheckJobNameReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ValidateJobNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ValidateJobNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


