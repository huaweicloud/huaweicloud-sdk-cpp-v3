

#include "huaweicloud/drs/v3/model/BatchShowParamsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchShowParamsRequest::BatchShowParamsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchShowParamsRequest::~BatchShowParamsRequest() = default;

void BatchShowParamsRequest::validate()
{
}

web::json::value BatchShowParamsRequest::toJson() const
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

bool BatchShowParamsRequest::fromJson(const web::json::value& val)
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
            BatchQueryParamReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchShowParamsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchShowParamsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchShowParamsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchShowParamsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryParamReq BatchShowParamsRequest::getBody() const
{
    return body_;
}

void BatchShowParamsRequest::setBody(const BatchQueryParamReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowParamsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowParamsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


