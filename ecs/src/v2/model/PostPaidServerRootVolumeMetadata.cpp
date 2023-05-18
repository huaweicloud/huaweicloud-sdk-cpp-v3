

#include "huaweicloud/ecs/v2/model/PostPaidServerRootVolumeMetadata.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerRootVolumeMetadata::PostPaidServerRootVolumeMetadata()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
}

PostPaidServerRootVolumeMetadata::~PostPaidServerRootVolumeMetadata() = default;

void PostPaidServerRootVolumeMetadata::validate()
{
}

web::json::value PostPaidServerRootVolumeMetadata::toJson() const
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

bool PostPaidServerRootVolumeMetadata::fromJson(const web::json::value& val)
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


std::string PostPaidServerRootVolumeMetadata::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void PostPaidServerRootVolumeMetadata::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool PostPaidServerRootVolumeMetadata::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void PostPaidServerRootVolumeMetadata::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string PostPaidServerRootVolumeMetadata::getSystemCmkid() const
{
    return systemCmkid_;
}

void PostPaidServerRootVolumeMetadata::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool PostPaidServerRootVolumeMetadata::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void PostPaidServerRootVolumeMetadata::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

}
}
}
}
}


