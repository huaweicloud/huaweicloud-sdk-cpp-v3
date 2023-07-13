

#include "huaweicloud/ecs/v2/model/PrePaidServerDataVolumeMetadata.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerDataVolumeMetadata::PrePaidServerDataVolumeMetadata()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
}

PrePaidServerDataVolumeMetadata::~PrePaidServerDataVolumeMetadata() = default;

void PrePaidServerDataVolumeMetadata::validate()
{
}

web::json::value PrePaidServerDataVolumeMetadata::toJson() const
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

bool PrePaidServerDataVolumeMetadata::fromJson(const web::json::value& val)
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

std::string PrePaidServerDataVolumeMetadata::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void PrePaidServerDataVolumeMetadata::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool PrePaidServerDataVolumeMetadata::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void PrePaidServerDataVolumeMetadata::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string PrePaidServerDataVolumeMetadata::getSystemCmkid() const
{
    return systemCmkid_;
}

void PrePaidServerDataVolumeMetadata::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool PrePaidServerDataVolumeMetadata::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void PrePaidServerDataVolumeMetadata::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

}
}
}
}
}


