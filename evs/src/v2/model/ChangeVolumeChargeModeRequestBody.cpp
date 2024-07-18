

#include "huaweicloud/evs/v2/model/ChangeVolumeChargeModeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ChangeVolumeChargeModeRequestBody::ChangeVolumeChargeModeRequestBody()
{
    volumeIdsIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    bssParamIsSet_ = false;
}

ChangeVolumeChargeModeRequestBody::~ChangeVolumeChargeModeRequestBody() = default;

void ChangeVolumeChargeModeRequestBody::validate()
{
}

web::json::value ChangeVolumeChargeModeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdsIsSet_) {
        val[utility::conversions::to_string_t("volume_ids")] = ModelBase::toJson(volumeIds_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(bssParamIsSet_) {
        val[utility::conversions::to_string_t("bss_param")] = ModelBase::toJson(bssParam_);
    }

    return val;
}
bool ChangeVolumeChargeModeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bss_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bss_param"));
        if(!fieldValue.is_null())
        {
            Bss_param2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBssParam(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ChangeVolumeChargeModeRequestBody::getVolumeIds()
{
    return volumeIds_;
}

void ChangeVolumeChargeModeRequestBody::setVolumeIds(const std::vector<std::string>& value)
{
    volumeIds_ = value;
    volumeIdsIsSet_ = true;
}

bool ChangeVolumeChargeModeRequestBody::volumeIdsIsSet() const
{
    return volumeIdsIsSet_;
}

void ChangeVolumeChargeModeRequestBody::unsetvolumeIds()
{
    volumeIdsIsSet_ = false;
}

std::string ChangeVolumeChargeModeRequestBody::getServerId() const
{
    return serverId_;
}

void ChangeVolumeChargeModeRequestBody::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ChangeVolumeChargeModeRequestBody::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ChangeVolumeChargeModeRequestBody::unsetserverId()
{
    serverIdIsSet_ = false;
}

Bss_param2 ChangeVolumeChargeModeRequestBody::getBssParam() const
{
    return bssParam_;
}

void ChangeVolumeChargeModeRequestBody::setBssParam(const Bss_param2& value)
{
    bssParam_ = value;
    bssParamIsSet_ = true;
}

bool ChangeVolumeChargeModeRequestBody::bssParamIsSet() const
{
    return bssParamIsSet_;
}

void ChangeVolumeChargeModeRequestBody::unsetbssParam()
{
    bssParamIsSet_ = false;
}

}
}
}
}
}


