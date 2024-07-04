

#include "huaweicloud/rds/v3/model/CreateInstanceIam5Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateInstanceIam5Request::CreateInstanceIam5Request()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    xClientToken_ = "";
    xClientTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInstanceIam5Request::~CreateInstanceIam5Request() = default;

void CreateInstanceIam5Request::validate()
{
}

web::json::value CreateInstanceIam5Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(xClientTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Client-Token")] = ModelBase::toJson(xClientToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInstanceIam5Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Client-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Client-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXClientToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CustomerCreateInstanceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInstanceIam5Request::getXLanguage() const
{
    return xLanguage_;
}

void CreateInstanceIam5Request::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateInstanceIam5Request::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateInstanceIam5Request::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateInstanceIam5Request::getXClientToken() const
{
    return xClientToken_;
}

void CreateInstanceIam5Request::setXClientToken(const std::string& value)
{
    xClientToken_ = value;
    xClientTokenIsSet_ = true;
}

bool CreateInstanceIam5Request::xClientTokenIsSet() const
{
    return xClientTokenIsSet_;
}

void CreateInstanceIam5Request::unsetxClientToken()
{
    xClientTokenIsSet_ = false;
}

CustomerCreateInstanceReq CreateInstanceIam5Request::getBody() const
{
    return body_;
}

void CreateInstanceIam5Request::setBody(const CustomerCreateInstanceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstanceIam5Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstanceIam5Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


