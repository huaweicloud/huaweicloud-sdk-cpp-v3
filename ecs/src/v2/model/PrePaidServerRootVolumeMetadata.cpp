

#include "huaweicloud/ecs/v2/model/PrePaidServerRootVolumeMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerRootVolumeMetadata::PrePaidServerRootVolumeMetadata()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
}

PrePaidServerRootVolumeMetadata::~PrePaidServerRootVolumeMetadata() = default;

void PrePaidServerRootVolumeMetadata::validate()
{
}

web::json::value PrePaidServerRootVolumeMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(systemEncryptedIsSet_) {
        val[utility::conversions::to_string_t("__system__encrypted")] = ModelBase::toJson(systemEncrypted_);
    }
    if(systemCmkidIsSet_) {
        val[utility::conversions::to_string_t("__system__cmkid")] = ModelBase::toJson(systemCmkid_);
    }

    return val;
}
bool PrePaidServerRootVolumeMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__system__encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__encrypted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__system__cmkid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__cmkid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCmkid(refVal);
        }
    }
    return ok;
}


std::string PrePaidServerRootVolumeMetadata::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void PrePaidServerRootVolumeMetadata::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool PrePaidServerRootVolumeMetadata::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void PrePaidServerRootVolumeMetadata::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string PrePaidServerRootVolumeMetadata::getSystemCmkid() const
{
    return systemCmkid_;
}

void PrePaidServerRootVolumeMetadata::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool PrePaidServerRootVolumeMetadata::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void PrePaidServerRootVolumeMetadata::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

}
}
}
}
}


