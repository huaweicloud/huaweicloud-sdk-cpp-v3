

#include "huaweicloud/live/v1/model/ModifyOttChannelInfoEncoderSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInfoEncoderSettingsRequest::ModifyOttChannelInfoEncoderSettingsRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyOttChannelInfoEncoderSettingsRequest::~ModifyOttChannelInfoEncoderSettingsRequest() = default;

void ModifyOttChannelInfoEncoderSettingsRequest::validate()
{
}

web::json::value ModifyOttChannelInfoEncoderSettingsRequest::toJson() const
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
bool ModifyOttChannelInfoEncoderSettingsRequest::fromJson(const web::json::value& val)
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
            ModifyOttChannelEncoderSettings refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelInfoEncoderSettingsRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ModifyOttChannelInfoEncoderSettingsRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ModifyOttChannelInfoEncoderSettingsRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ModifyOttChannelInfoEncoderSettingsRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ModifyOttChannelInfoEncoderSettingsRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ModifyOttChannelInfoEncoderSettingsRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ModifyOttChannelInfoEncoderSettingsRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ModifyOttChannelInfoEncoderSettingsRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

ModifyOttChannelEncoderSettings ModifyOttChannelInfoEncoderSettingsRequest::getBody() const
{
    return body_;
}

void ModifyOttChannelInfoEncoderSettingsRequest::setBody(const ModifyOttChannelEncoderSettings& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyOttChannelInfoEncoderSettingsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyOttChannelInfoEncoderSettingsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


