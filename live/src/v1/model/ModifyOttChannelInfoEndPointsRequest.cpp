

#include "huaweicloud/live/v1/model/ModifyOttChannelInfoEndPointsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInfoEndPointsRequest::ModifyOttChannelInfoEndPointsRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyOttChannelInfoEndPointsRequest::~ModifyOttChannelInfoEndPointsRequest() = default;

void ModifyOttChannelInfoEndPointsRequest::validate()
{
}

web::json::value ModifyOttChannelInfoEndPointsRequest::toJson() const
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
bool ModifyOttChannelInfoEndPointsRequest::fromJson(const web::json::value& val)
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
            ModifyOttChannelEndPointsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelInfoEndPointsRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ModifyOttChannelInfoEndPointsRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ModifyOttChannelInfoEndPointsRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ModifyOttChannelInfoEndPointsRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ModifyOttChannelInfoEndPointsRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ModifyOttChannelInfoEndPointsRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ModifyOttChannelInfoEndPointsRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ModifyOttChannelInfoEndPointsRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

ModifyOttChannelEndPointsReq ModifyOttChannelInfoEndPointsRequest::getBody() const
{
    return body_;
}

void ModifyOttChannelInfoEndPointsRequest::setBody(const ModifyOttChannelEndPointsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyOttChannelInfoEndPointsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyOttChannelInfoEndPointsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


