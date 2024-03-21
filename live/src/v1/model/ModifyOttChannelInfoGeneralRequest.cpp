

#include "huaweicloud/live/v1/model/ModifyOttChannelInfoGeneralRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInfoGeneralRequest::ModifyOttChannelInfoGeneralRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyOttChannelInfoGeneralRequest::~ModifyOttChannelInfoGeneralRequest() = default;

void ModifyOttChannelInfoGeneralRequest::validate()
{
}

web::json::value ModifyOttChannelInfoGeneralRequest::toJson() const
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
bool ModifyOttChannelInfoGeneralRequest::fromJson(const web::json::value& val)
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
            ModifyOttChannelGeneral refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelInfoGeneralRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ModifyOttChannelInfoGeneralRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ModifyOttChannelInfoGeneralRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ModifyOttChannelInfoGeneralRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ModifyOttChannelInfoGeneralRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ModifyOttChannelInfoGeneralRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

ModifyOttChannelGeneral ModifyOttChannelInfoGeneralRequest::getBody() const
{
    return body_;
}

void ModifyOttChannelInfoGeneralRequest::setBody(const ModifyOttChannelGeneral& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyOttChannelInfoGeneralRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


