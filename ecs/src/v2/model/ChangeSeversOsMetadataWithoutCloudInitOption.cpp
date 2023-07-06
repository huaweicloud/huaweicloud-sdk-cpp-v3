

#include "huaweicloud/ecs/v2/model/ChangeSeversOsMetadataWithoutCloudInitOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeSeversOsMetadataWithoutCloudInitOption::ChangeSeversOsMetadataWithoutCloudInitOption()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
}

ChangeSeversOsMetadataWithoutCloudInitOption::~ChangeSeversOsMetadataWithoutCloudInitOption() = default;

void ChangeSeversOsMetadataWithoutCloudInitOption::validate()
{
}

web::json::value ChangeSeversOsMetadataWithoutCloudInitOption::toJson() const
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

bool ChangeSeversOsMetadataWithoutCloudInitOption::fromJson(const web::json::value& val)
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

std::string ChangeSeversOsMetadataWithoutCloudInitOption::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void ChangeSeversOsMetadataWithoutCloudInitOption::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool ChangeSeversOsMetadataWithoutCloudInitOption::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void ChangeSeversOsMetadataWithoutCloudInitOption::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string ChangeSeversOsMetadataWithoutCloudInitOption::getSystemCmkid() const
{
    return systemCmkid_;
}

void ChangeSeversOsMetadataWithoutCloudInitOption::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool ChangeSeversOsMetadataWithoutCloudInitOption::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void ChangeSeversOsMetadataWithoutCloudInitOption::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

}
}
}
}
}


