

#include "huaweicloud/ecs/v2/model/ShowServerBlockDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerBlockDeviceRequest::ShowServerBlockDeviceRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

ShowServerBlockDeviceRequest::~ShowServerBlockDeviceRequest() = default;

void ShowServerBlockDeviceRequest::validate()
{
}

web::json::value ShowServerBlockDeviceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool ShowServerBlockDeviceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowServerBlockDeviceRequest::getServerId() const
{
    return serverId_;
}

void ShowServerBlockDeviceRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerBlockDeviceRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerBlockDeviceRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string ShowServerBlockDeviceRequest::getVolumeId() const
{
    return volumeId_;
}

void ShowServerBlockDeviceRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ShowServerBlockDeviceRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ShowServerBlockDeviceRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


