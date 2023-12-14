

#include "huaweicloud/rds/v3/model/DeleteLogLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteLogLtsConfigsRequest::DeleteLogLtsConfigsRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteLogLtsConfigsRequest::~DeleteLogLtsConfigsRequest() = default;

void DeleteLogLtsConfigsRequest::validate()
{
}

web::json::value DeleteLogLtsConfigsRequest::toJson() const
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
bool DeleteLogLtsConfigsRequest::fromJson(const web::json::value& val)
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
            DeleteLogConfigResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteLogLtsConfigsRequest::getEngine() const
{
    return engine_;
}

void DeleteLogLtsConfigsRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool DeleteLogLtsConfigsRequest::engineIsSet() const
{
    return engineIsSet_;
}

void DeleteLogLtsConfigsRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string DeleteLogLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteLogLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteLogLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteLogLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteLogConfigResponseBody DeleteLogLtsConfigsRequest::getBody() const
{
    return body_;
}

void DeleteLogLtsConfigsRequest::setBody(const DeleteLogConfigResponseBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteLogLtsConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteLogLtsConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


