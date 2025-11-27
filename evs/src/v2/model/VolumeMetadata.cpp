

#include "huaweicloud/evs/v2/model/VolumeMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeMetadata::VolumeMetadata()
{
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    hwPassthrough_ = "";
    hwPassthroughIsSet_ = false;
    orderID_ = "";
    orderIDIsSet_ = false;
}

VolumeMetadata::~VolumeMetadata() = default;

void VolumeMetadata::validate()
{
}

web::json::value VolumeMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(systemCmkidIsSet_) {
        val[utility::conversions::to_string_t("__system__cmkid")] = ModelBase::toJson(systemCmkid_);
    }
    if(systemEncryptedIsSet_) {
        val[utility::conversions::to_string_t("__system__encrypted")] = ModelBase::toJson(systemEncrypted_);
    }
    if(hwPassthroughIsSet_) {
        val[utility::conversions::to_string_t("hw:passthrough")] = ModelBase::toJson(hwPassthrough_);
    }
    if(orderIDIsSet_) {
        val[utility::conversions::to_string_t("orderID")] = ModelBase::toJson(orderID_);
    }

    return val;
}
bool VolumeMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__system__cmkid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__cmkid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCmkid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__system__encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__encrypted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw:passthrough"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:passthrough"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwPassthrough(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orderID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderID(refVal);
        }
    }
    return ok;
}


std::string VolumeMetadata::getSystemCmkid() const
{
    return systemCmkid_;
}

void VolumeMetadata::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool VolumeMetadata::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void VolumeMetadata::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string VolumeMetadata::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void VolumeMetadata::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool VolumeMetadata::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void VolumeMetadata::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string VolumeMetadata::getHwPassthrough() const
{
    return hwPassthrough_;
}

void VolumeMetadata::setHwPassthrough(const std::string& value)
{
    hwPassthrough_ = value;
    hwPassthroughIsSet_ = true;
}

bool VolumeMetadata::hwPassthroughIsSet() const
{
    return hwPassthroughIsSet_;
}

void VolumeMetadata::unsethwPassthrough()
{
    hwPassthroughIsSet_ = false;
}

std::string VolumeMetadata::getOrderID() const
{
    return orderID_;
}

void VolumeMetadata::setOrderID(const std::string& value)
{
    orderID_ = value;
    orderIDIsSet_ = true;
}

bool VolumeMetadata::orderIDIsSet() const
{
    return orderIDIsSet_;
}

void VolumeMetadata::unsetorderID()
{
    orderIDIsSet_ = false;
}

}
}
}
}
}


