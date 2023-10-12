

#include "huaweicloud/evs/v2/model/CreateVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateVolumeRequestBody::CreateVolumeRequestBody()
{
    bssParamIsSet_ = false;
    volumeIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    oSSCHHNTschedulerHintsIsSet_ = false;
}

CreateVolumeRequestBody::~CreateVolumeRequestBody() = default;

void CreateVolumeRequestBody::validate()
{
}

web::json::value CreateVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bssParamIsSet_) {
        val[utility::conversions::to_string_t("bssParam")] = ModelBase::toJson(bssParam_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(oSSCHHNTschedulerHintsIsSet_) {
        val[utility::conversions::to_string_t("OS-SCH-HNT:scheduler_hints")] = ModelBase::toJson(oSSCHHNTschedulerHints_);
    }

    return val;
}
bool CreateVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bssParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bssParam"));
        if(!fieldValue.is_null())
        {
            BssParamForCreateVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBssParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            CreateVolumeOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("OS-SCH-HNT:scheduler_hints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-SCH-HNT:scheduler_hints"));
        if(!fieldValue.is_null())
        {
            CreateVolumeSchedulerHints refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSSCHHNTschedulerHints(refVal);
        }
    }
    return ok;
}


BssParamForCreateVolume CreateVolumeRequestBody::getBssParam() const
{
    return bssParam_;
}

void CreateVolumeRequestBody::setBssParam(const BssParamForCreateVolume& value)
{
    bssParam_ = value;
    bssParamIsSet_ = true;
}

bool CreateVolumeRequestBody::bssParamIsSet() const
{
    return bssParamIsSet_;
}

void CreateVolumeRequestBody::unsetbssParam()
{
    bssParamIsSet_ = false;
}

CreateVolumeOption CreateVolumeRequestBody::getVolume() const
{
    return volume_;
}

void CreateVolumeRequestBody::setVolume(const CreateVolumeOption& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateVolumeRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateVolumeRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CreateVolumeRequestBody::getServerId() const
{
    return serverId_;
}

void CreateVolumeRequestBody::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool CreateVolumeRequestBody::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void CreateVolumeRequestBody::unsetserverId()
{
    serverIdIsSet_ = false;
}

CreateVolumeSchedulerHints CreateVolumeRequestBody::getOSSCHHNTschedulerHints() const
{
    return oSSCHHNTschedulerHints_;
}

void CreateVolumeRequestBody::setOSSCHHNTschedulerHints(const CreateVolumeSchedulerHints& value)
{
    oSSCHHNTschedulerHints_ = value;
    oSSCHHNTschedulerHintsIsSet_ = true;
}

bool CreateVolumeRequestBody::oSSCHHNTschedulerHintsIsSet() const
{
    return oSSCHHNTschedulerHintsIsSet_;
}

void CreateVolumeRequestBody::unsetoSSCHHNTschedulerHints()
{
    oSSCHHNTschedulerHintsIsSet_ = false;
}

}
}
}
}
}


