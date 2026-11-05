

#include "huaweicloud/rds/v3/model/SupabaseInstanceCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseInstanceCreateRequest::SupabaseInstanceCreateRequest()
{
    datastoreIsSet_ = false;
    chargeInfoIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    volumeIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    haIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

SupabaseInstanceCreateRequest::~SupabaseInstanceCreateRequest() = default;

void SupabaseInstanceCreateRequest::validate()
{
}

web::json::value SupabaseInstanceCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(haIsSet_) {
        val[utility::conversions::to_string_t("ha")] = ModelBase::toJson(ha_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(dataVipIsSet_) {
        val[utility::conversions::to_string_t("data_vip")] = ModelBase::toJson(dataVip_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool SupabaseInstanceCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            SupabaseDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            ChargeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            SupabaseVolumeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            SupabaseHaConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagWithKeyValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


SupabaseDatastore SupabaseInstanceCreateRequest::getDatastore() const
{
    return datastore_;
}

void SupabaseInstanceCreateRequest::setDatastore(const SupabaseDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void SupabaseInstanceCreateRequest::unsetdatastore()
{
    datastoreIsSet_ = false;
}

ChargeInfo SupabaseInstanceCreateRequest::getChargeInfo() const
{
    return chargeInfo_;
}

void SupabaseInstanceCreateRequest::setChargeInfo(const ChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void SupabaseInstanceCreateRequest::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string SupabaseInstanceCreateRequest::getFlavorRef() const
{
    return flavorRef_;
}

void SupabaseInstanceCreateRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void SupabaseInstanceCreateRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

SupabaseVolumeConfig SupabaseInstanceCreateRequest::getVolume() const
{
    return volume_;
}

void SupabaseInstanceCreateRequest::setVolume(const SupabaseVolumeConfig& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::volumeIsSet() const
{
    return volumeIsSet_;
}

void SupabaseInstanceCreateRequest::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string SupabaseInstanceCreateRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void SupabaseInstanceCreateRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void SupabaseInstanceCreateRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

SupabaseHaConfig SupabaseInstanceCreateRequest::getHa() const
{
    return ha_;
}

void SupabaseInstanceCreateRequest::setHa(const SupabaseHaConfig& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::haIsSet() const
{
    return haIsSet_;
}

void SupabaseInstanceCreateRequest::unsetha()
{
    haIsSet_ = false;
}

std::string SupabaseInstanceCreateRequest::getConfigurationId() const
{
    return configurationId_;
}

void SupabaseInstanceCreateRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void SupabaseInstanceCreateRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

int32_t SupabaseInstanceCreateRequest::getPort() const
{
    return port_;
}

void SupabaseInstanceCreateRequest::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::portIsSet() const
{
    return portIsSet_;
}

void SupabaseInstanceCreateRequest::unsetport()
{
    portIsSet_ = false;
}

std::string SupabaseInstanceCreateRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void SupabaseInstanceCreateRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void SupabaseInstanceCreateRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string SupabaseInstanceCreateRequest::getPassword() const
{
    return password_;
}

void SupabaseInstanceCreateRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void SupabaseInstanceCreateRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string SupabaseInstanceCreateRequest::getDataVip() const
{
    return dataVip_;
}

void SupabaseInstanceCreateRequest::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void SupabaseInstanceCreateRequest::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string SupabaseInstanceCreateRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SupabaseInstanceCreateRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SupabaseInstanceCreateRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<TagWithKeyValue>& SupabaseInstanceCreateRequest::getTags()
{
    return tags_;
}

void SupabaseInstanceCreateRequest::setTags(const std::vector<TagWithKeyValue>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool SupabaseInstanceCreateRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void SupabaseInstanceCreateRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


