

#include "huaweicloud/rds/v3/model/CreateInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateInstanceRequest::CreateInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    xClientToken_ = "";
    xClientTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInstanceRequest::~CreateInstanceRequest() = default;

void CreateInstanceRequest::validate()
{
}

web::json::value CreateInstanceRequest::toJson() const
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

bool CreateInstanceRequest::fromJson(const web::json::value& val)
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
            InstanceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateInstanceRequest::getXClientToken() const
{
    return xClientToken_;
}

void CreateInstanceRequest::setXClientToken(const std::string& value)
{
    xClientToken_ = value;
    xClientTokenIsSet_ = true;
}

bool CreateInstanceRequest::xClientTokenIsSet() const
{
    return xClientTokenIsSet_;
}

void CreateInstanceRequest::unsetxClientToken()
{
    xClientTokenIsSet_ = false;
}

InstanceRequest CreateInstanceRequest::getBody() const
{
    return body_;
}

void CreateInstanceRequest::setBody(const InstanceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


