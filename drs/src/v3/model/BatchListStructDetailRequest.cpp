

#include "huaweicloud/drs/v3/model/BatchListStructDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListStructDetailRequest::BatchListStructDetailRequest()
{
    type_ = "";
    typeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchListStructDetailRequest::~BatchListStructDetailRequest() = default;

void BatchListStructDetailRequest::validate()
{
}

web::json::value BatchListStructDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchListStructDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
            BatchQueryJobReqPage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchListStructDetailRequest::getType() const
{
    return type_;
}

void BatchListStructDetailRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchListStructDetailRequest::typeIsSet() const
{
    return typeIsSet_;
}

void BatchListStructDetailRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string BatchListStructDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchListStructDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchListStructDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchListStructDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryJobReqPage BatchListStructDetailRequest::getBody() const
{
    return body_;
}

void BatchListStructDetailRequest::setBody(const BatchQueryJobReqPage& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchListStructDetailRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchListStructDetailRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


