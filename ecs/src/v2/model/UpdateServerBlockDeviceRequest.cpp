

#include "huaweicloud/ecs/v2/model/UpdateServerBlockDeviceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerBlockDeviceRequest::UpdateServerBlockDeviceRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerBlockDeviceRequest::~UpdateServerBlockDeviceRequest() = default;

void UpdateServerBlockDeviceRequest::validate()
{
}

web::json::value UpdateServerBlockDeviceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateServerBlockDeviceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateServerBlockDeviceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServerBlockDeviceRequest::getServerId() const
{
    return serverId_;
}

void UpdateServerBlockDeviceRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateServerBlockDeviceRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateServerBlockDeviceRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string UpdateServerBlockDeviceRequest::getVolumeId() const
{
    return volumeId_;
}

void UpdateServerBlockDeviceRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool UpdateServerBlockDeviceRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void UpdateServerBlockDeviceRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

UpdateServerBlockDeviceReq UpdateServerBlockDeviceRequest::getBody() const
{
    return body_;
}

void UpdateServerBlockDeviceRequest::setBody(const UpdateServerBlockDeviceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerBlockDeviceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerBlockDeviceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


