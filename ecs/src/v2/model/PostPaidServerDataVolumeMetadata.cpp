

#include "huaweicloud/ecs/v2/model/PostPaidServerDataVolumeMetadata.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerDataVolumeMetadata::PostPaidServerDataVolumeMetadata()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
}

PostPaidServerDataVolumeMetadata::~PostPaidServerDataVolumeMetadata() = default;

void PostPaidServerDataVolumeMetadata::validate()
{
}

web::json::value PostPaidServerDataVolumeMetadata::toJson() const
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

bool PostPaidServerDataVolumeMetadata::fromJson(const web::json::value& val)
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


std::string PostPaidServerDataVolumeMetadata::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void PostPaidServerDataVolumeMetadata::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool PostPaidServerDataVolumeMetadata::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void PostPaidServerDataVolumeMetadata::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string PostPaidServerDataVolumeMetadata::getSystemCmkid() const
{
    return systemCmkid_;
}

void PostPaidServerDataVolumeMetadata::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool PostPaidServerDataVolumeMetadata::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void PostPaidServerDataVolumeMetadata::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

}
}
}
}
}


