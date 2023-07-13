

#include "huaweicloud/ecs/v2/model/DetachServerVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DetachServerVolumeRequest::DetachServerVolumeRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    deleteFlag_ = "";
    deleteFlagIsSet_ = false;
}

DetachServerVolumeRequest::~DetachServerVolumeRequest() = default;

void DetachServerVolumeRequest::validate()
{
}

web::json::value DetachServerVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(deleteFlagIsSet_) {
        val[utility::conversions::to_string_t("delete_flag")] = ModelBase::toJson(deleteFlag_);
    }

    return val;
}

bool DetachServerVolumeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("delete_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_flag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteFlag(refVal);
        }
    }
    return ok;
}

std::string DetachServerVolumeRequest::getServerId() const
{
    return serverId_;
}

void DetachServerVolumeRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool DetachServerVolumeRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void DetachServerVolumeRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string DetachServerVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void DetachServerVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool DetachServerVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void DetachServerVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string DetachServerVolumeRequest::getDeleteFlag() const
{
    return deleteFlag_;
}

void DetachServerVolumeRequest::setDeleteFlag(const std::string& value)
{
    deleteFlag_ = value;
    deleteFlagIsSet_ = true;
}

bool DetachServerVolumeRequest::deleteFlagIsSet() const
{
    return deleteFlagIsSet_;
}

void DetachServerVolumeRequest::unsetdeleteFlag()
{
    deleteFlagIsSet_ = false;
}

}
}
}
}
}


