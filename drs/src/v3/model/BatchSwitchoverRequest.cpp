

#include "huaweicloud/drs/v3/model/BatchSwitchoverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSwitchoverRequest::BatchSwitchoverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSwitchoverRequest::~BatchSwitchoverRequest() = default;

void BatchSwitchoverRequest::validate()
{
}

web::json::value BatchSwitchoverRequest::toJson() const
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
bool BatchSwitchoverRequest::fromJson(const web::json::value& val)
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
            BatchSwitchoverReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchSwitchoverRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchSwitchoverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchSwitchoverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchSwitchoverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchSwitchoverReq BatchSwitchoverRequest::getBody() const
{
    return body_;
}

void BatchSwitchoverRequest::setBody(const BatchSwitchoverReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSwitchoverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSwitchoverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


