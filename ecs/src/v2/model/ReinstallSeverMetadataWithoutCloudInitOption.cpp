

#include "huaweicloud/ecs/v2/model/ReinstallSeverMetadataWithoutCloudInitOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallSeverMetadataWithoutCloudInitOption::ReinstallSeverMetadataWithoutCloudInitOption()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
    byol_ = "";
    byolIsSet_ = false;
}

ReinstallSeverMetadataWithoutCloudInitOption::~ReinstallSeverMetadataWithoutCloudInitOption() = default;

void ReinstallSeverMetadataWithoutCloudInitOption::validate()
{
}

web::json::value ReinstallSeverMetadataWithoutCloudInitOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(systemEncryptedIsSet_) {
        val[utility::conversions::to_string_t("__system__encrypted")] = ModelBase::toJson(systemEncrypted_);
    }
    if(systemCmkidIsSet_) {
        val[utility::conversions::to_string_t("__system__cmkid")] = ModelBase::toJson(systemCmkid_);
    }
    if(byolIsSet_) {
        val[utility::conversions::to_string_t("BYOL")] = ModelBase::toJson(byol_);
    }

    return val;
}
bool ReinstallSeverMetadataWithoutCloudInitOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("BYOL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("BYOL"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByol(refVal);
        }
    }
    return ok;
}


std::string ReinstallSeverMetadataWithoutCloudInitOption::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void ReinstallSeverMetadataWithoutCloudInitOption::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool ReinstallSeverMetadataWithoutCloudInitOption::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void ReinstallSeverMetadataWithoutCloudInitOption::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string ReinstallSeverMetadataWithoutCloudInitOption::getSystemCmkid() const
{
    return systemCmkid_;
}

void ReinstallSeverMetadataWithoutCloudInitOption::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool ReinstallSeverMetadataWithoutCloudInitOption::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void ReinstallSeverMetadataWithoutCloudInitOption::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string ReinstallSeverMetadataWithoutCloudInitOption::getByol() const
{
    return byol_;
}

void ReinstallSeverMetadataWithoutCloudInitOption::setByol(const std::string& value)
{
    byol_ = value;
    byolIsSet_ = true;
}

bool ReinstallSeverMetadataWithoutCloudInitOption::byolIsSet() const
{
    return byolIsSet_;
}

void ReinstallSeverMetadataWithoutCloudInitOption::unsetbyol()
{
    byolIsSet_ = false;
}

}
}
}
}
}


