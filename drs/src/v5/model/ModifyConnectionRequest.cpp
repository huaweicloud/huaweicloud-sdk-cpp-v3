

#include "huaweicloud/drs/v5/model/ModifyConnectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyConnectionRequest::ModifyConnectionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    connectionId_ = "";
    connectionIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyConnectionRequest::~ModifyConnectionRequest() = default;

void ModifyConnectionRequest::validate()
{
}

web::json::value ModifyConnectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(connectionIdIsSet_) {
        val[utility::conversions::to_string_t("connection_id")] = ModelBase::toJson(connectionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyConnectionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("connection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateConnectionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyConnectionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyConnectionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyConnectionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyConnectionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyConnectionRequest::getConnectionId() const
{
    return connectionId_;
}

void ModifyConnectionRequest::setConnectionId(const std::string& value)
{
    connectionId_ = value;
    connectionIdIsSet_ = true;
}

bool ModifyConnectionRequest::connectionIdIsSet() const
{
    return connectionIdIsSet_;
}

void ModifyConnectionRequest::unsetconnectionId()
{
    connectionIdIsSet_ = false;
}

UpdateConnectionReq ModifyConnectionRequest::getBody() const
{
    return body_;
}

void ModifyConnectionRequest::setBody(const UpdateConnectionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyConnectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyConnectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


