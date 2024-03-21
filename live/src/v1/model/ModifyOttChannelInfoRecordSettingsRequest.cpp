

#include "huaweicloud/live/v1/model/ModifyOttChannelInfoRecordSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInfoRecordSettingsRequest::ModifyOttChannelInfoRecordSettingsRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyOttChannelInfoRecordSettingsRequest::~ModifyOttChannelInfoRecordSettingsRequest() = default;

void ModifyOttChannelInfoRecordSettingsRequest::validate()
{
}

web::json::value ModifyOttChannelInfoRecordSettingsRequest::toJson() const
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
bool ModifyOttChannelInfoRecordSettingsRequest::fromJson(const web::json::value& val)
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
            ModifyOttChannelRecordSettings refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelInfoRecordSettingsRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ModifyOttChannelInfoRecordSettingsRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ModifyOttChannelInfoRecordSettingsRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ModifyOttChannelInfoRecordSettingsRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ModifyOttChannelInfoRecordSettingsRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ModifyOttChannelInfoRecordSettingsRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

ModifyOttChannelRecordSettings ModifyOttChannelInfoRecordSettingsRequest::getBody() const
{
    return body_;
}

void ModifyOttChannelInfoRecordSettingsRequest::setBody(const ModifyOttChannelRecordSettings& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyOttChannelInfoRecordSettingsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


