

#include "huaweicloud/rds/v3/model/SetLogLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetLogLtsConfigsRequest::SetLogLtsConfigsRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetLogLtsConfigsRequest::~SetLogLtsConfigsRequest() = default;

void SetLogLtsConfigsRequest::validate()
{
}

web::json::value SetLogLtsConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetLogLtsConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
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
            AddLogConfigResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetLogLtsConfigsRequest::getEngine() const
{
    return engine_;
}

void SetLogLtsConfigsRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool SetLogLtsConfigsRequest::engineIsSet() const
{
    return engineIsSet_;
}

void SetLogLtsConfigsRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string SetLogLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetLogLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetLogLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetLogLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

AddLogConfigResponseBody SetLogLtsConfigsRequest::getBody() const
{
    return body_;
}

void SetLogLtsConfigsRequest::setBody(const AddLogConfigResponseBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetLogLtsConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetLogLtsConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


