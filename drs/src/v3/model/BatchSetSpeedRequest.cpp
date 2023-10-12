

#include "huaweicloud/drs/v3/model/BatchSetSpeedRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetSpeedRequest::BatchSetSpeedRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSetSpeedRequest::~BatchSetSpeedRequest() = default;

void BatchSetSpeedRequest::validate()
{
}

web::json::value BatchSetSpeedRequest::toJson() const
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
bool BatchSetSpeedRequest::fromJson(const web::json::value& val)
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
            BatchLimitSpeedReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchSetSpeedRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchSetSpeedRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchSetSpeedRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchSetSpeedRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchLimitSpeedReq BatchSetSpeedRequest::getBody() const
{
    return body_;
}

void BatchSetSpeedRequest::setBody(const BatchLimitSpeedReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSetSpeedRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSetSpeedRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


