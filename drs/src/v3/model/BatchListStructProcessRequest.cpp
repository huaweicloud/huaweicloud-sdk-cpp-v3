

#include "huaweicloud/drs/v3/model/BatchListStructProcessRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListStructProcessRequest::BatchListStructProcessRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchListStructProcessRequest::~BatchListStructProcessRequest() = default;

void BatchListStructProcessRequest::validate()
{
}

web::json::value BatchListStructProcessRequest::toJson() const
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

bool BatchListStructProcessRequest::fromJson(const web::json::value& val)
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
            BatchQueryJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchListStructProcessRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchListStructProcessRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchListStructProcessRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchListStructProcessRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryJobReq BatchListStructProcessRequest::getBody() const
{
    return body_;
}

void BatchListStructProcessRequest::setBody(const BatchQueryJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchListStructProcessRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchListStructProcessRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


