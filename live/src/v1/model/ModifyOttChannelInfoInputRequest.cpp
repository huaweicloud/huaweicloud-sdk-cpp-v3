

#include "huaweicloud/live/v1/model/ModifyOttChannelInfoInputRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInfoInputRequest::ModifyOttChannelInfoInputRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyOttChannelInfoInputRequest::~ModifyOttChannelInfoInputRequest() = default;

void ModifyOttChannelInfoInputRequest::validate()
{
}

web::json::value ModifyOttChannelInfoInputRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessControlAllowInternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-Internal")] = ModelBase::toJson(accessControlAllowInternal_);
    }
    if(accessControlAllowExternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-External")] = ModelBase::toJson(accessControlAllowExternal_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyOttChannelInfoInputRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-Internal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-Internal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowInternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-External"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-External"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowExternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyOttChannelInputReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelInfoInputRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ModifyOttChannelInfoInputRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ModifyOttChannelInfoInputRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ModifyOttChannelInfoInputRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ModifyOttChannelInfoInputRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ModifyOttChannelInfoInputRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ModifyOttChannelInfoInputRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ModifyOttChannelInfoInputRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

ModifyOttChannelInputReq ModifyOttChannelInfoInputRequest::getBody() const
{
    return body_;
}

void ModifyOttChannelInfoInputRequest::setBody(const ModifyOttChannelInputReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyOttChannelInfoInputRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyOttChannelInfoInputRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


