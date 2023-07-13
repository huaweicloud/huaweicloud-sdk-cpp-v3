

#include "huaweicloud/drs/v3/model/BatchListProgressesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListProgressesRequest::BatchListProgressesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchListProgressesRequest::~BatchListProgressesRequest() = default;

void BatchListProgressesRequest::validate()
{
}

web::json::value BatchListProgressesRequest::toJson() const
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

bool BatchListProgressesRequest::fromJson(const web::json::value& val)
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
            BatchQueryProgressReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchListProgressesRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchListProgressesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchListProgressesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchListProgressesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryProgressReq BatchListProgressesRequest::getBody() const
{
    return body_;
}

void BatchListProgressesRequest::setBody(const BatchQueryProgressReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchListProgressesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchListProgressesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


