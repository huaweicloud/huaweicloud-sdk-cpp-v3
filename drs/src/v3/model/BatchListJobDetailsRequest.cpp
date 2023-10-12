

#include "huaweicloud/drs/v3/model/BatchListJobDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListJobDetailsRequest::BatchListJobDetailsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchListJobDetailsRequest::~BatchListJobDetailsRequest() = default;

void BatchListJobDetailsRequest::validate()
{
}

web::json::value BatchListJobDetailsRequest::toJson() const
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
bool BatchListJobDetailsRequest::fromJson(const web::json::value& val)
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
            BatchQueryJobReqPage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchListJobDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchListJobDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchListJobDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchListJobDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryJobReqPage BatchListJobDetailsRequest::getBody() const
{
    return body_;
}

void BatchListJobDetailsRequest::setBody(const BatchQueryJobReqPage& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchListJobDetailsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchListJobDetailsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


