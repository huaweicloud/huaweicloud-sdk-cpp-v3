

#include "huaweicloud/drs/v5/model/CopyJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CopyJobRequest::CopyJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CopyJobRequest::~CopyJobRequest() = default;

void CopyJobRequest::validate()
{
}

web::json::value CopyJobRequest::toJson() const
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
bool CopyJobRequest::fromJson(const web::json::value& val)
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
            CloneJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void CopyJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CopyJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CopyJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CloneJobReq CopyJobRequest::getBody() const
{
    return body_;
}

void CopyJobRequest::setBody(const CloneJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


