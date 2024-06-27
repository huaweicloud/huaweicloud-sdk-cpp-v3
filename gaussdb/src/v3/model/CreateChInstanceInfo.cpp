

#include "huaweicloud/gaussdb/v3/model/CreateChInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChInstanceInfo::CreateChInstanceInfo()
{
    id_ = "";
    idIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    azMode_ = "";
    azModeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    engineIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    payInfoIsSet_ = false;
    sslOption_ = false;
    sslOptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    tagsInfoIsSet_ = false;
}

CreateChInstanceInfo::~CreateChInstanceInfo() = default;

void CreateChInstanceInfo::validate()
{
}

web::json::value CreateChInstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(azModeIsSet_) {
        val[utility::conversions::to_string_t("az_mode")] = ModelBase::toJson(azMode_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }
    if(payInfoIsSet_) {
        val[utility::conversions::to_string_t("pay_info")] = ModelBase::toJson(payInfo_);
    }
    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(tagsInfoIsSet_) {
        val[utility::conversions::to_string_t("tags_info")] = ModelBase::toJson(tagsInfo_);
    }

    return val;
}
bool CreateChInstanceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            ClickHouseEngineInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pay_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_info"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceInfo_pay_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_info"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceInfo_tags_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsInfo(refVal);
        }
    }
    return ok;
}


std::string CreateChInstanceInfo::getId() const
{
    return id_;
}

void CreateChInstanceInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateChInstanceInfo::idIsSet() const
{
    return idIsSet_;
}

void CreateChInstanceInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CreateChInstanceInfo::getAzCode() const
{
    return azCode_;
}

void CreateChInstanceInfo::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool CreateChInstanceInfo::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void CreateChInstanceInfo::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string CreateChInstanceInfo::getAzMode() const
{
    return azMode_;
}

void CreateChInstanceInfo::setAzMode(const std::string& value)
{
    azMode_ = value;
    azModeIsSet_ = true;
}

bool CreateChInstanceInfo::azModeIsSet() const
{
    return azModeIsSet_;
}

void CreateChInstanceInfo::unsetazMode()
{
    azModeIsSet_ = false;
}

std::string CreateChInstanceInfo::getName() const
{
    return name_;
}

void CreateChInstanceInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateChInstanceInfo::nameIsSet() const
{
    return nameIsSet_;
}

void CreateChInstanceInfo::unsetname()
{
    nameIsSet_ = false;
}

ClickHouseEngineInfo CreateChInstanceInfo::getEngine() const
{
    return engine_;
}

void CreateChInstanceInfo::setEngine(const ClickHouseEngineInfo& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool CreateChInstanceInfo::engineIsSet() const
{
    return engineIsSet_;
}

void CreateChInstanceInfo::unsetengine()
{
    engineIsSet_ = false;
}

std::string CreateChInstanceInfo::getVpcId() const
{
    return vpcId_;
}

void CreateChInstanceInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateChInstanceInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateChInstanceInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateChInstanceInfo::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateChInstanceInfo::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateChInstanceInfo::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateChInstanceInfo::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string CreateChInstanceInfo::getSubnetId() const
{
    return subnetId_;
}

void CreateChInstanceInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateChInstanceInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateChInstanceInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateChInstanceInfo::getDbUser() const
{
    return dbUser_;
}

void CreateChInstanceInfo::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool CreateChInstanceInfo::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void CreateChInstanceInfo::unsetdbUser()
{
    dbUserIsSet_ = false;
}

int32_t CreateChInstanceInfo::getPort() const
{
    return port_;
}

void CreateChInstanceInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateChInstanceInfo::portIsSet() const
{
    return portIsSet_;
}

void CreateChInstanceInfo::unsetport()
{
    portIsSet_ = false;
}

std::string CreateChInstanceInfo::getHaMode() const
{
    return haMode_;
}

void CreateChInstanceInfo::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool CreateChInstanceInfo::haModeIsSet() const
{
    return haModeIsSet_;
}

void CreateChInstanceInfo::unsethaMode()
{
    haModeIsSet_ = false;
}

CreateChInstanceInfo_pay_info CreateChInstanceInfo::getPayInfo() const
{
    return payInfo_;
}

void CreateChInstanceInfo::setPayInfo(const CreateChInstanceInfo_pay_info& value)
{
    payInfo_ = value;
    payInfoIsSet_ = true;
}

bool CreateChInstanceInfo::payInfoIsSet() const
{
    return payInfoIsSet_;
}

void CreateChInstanceInfo::unsetpayInfo()
{
    payInfoIsSet_ = false;
}

bool CreateChInstanceInfo::isSslOption() const
{
    return sslOption_;
}

void CreateChInstanceInfo::setSslOption(bool value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool CreateChInstanceInfo::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void CreateChInstanceInfo::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

std::string CreateChInstanceInfo::getStatus() const
{
    return status_;
}

void CreateChInstanceInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateChInstanceInfo::statusIsSet() const
{
    return statusIsSet_;
}

void CreateChInstanceInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateChInstanceInfo::getRegion() const
{
    return region_;
}

void CreateChInstanceInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateChInstanceInfo::regionIsSet() const
{
    return regionIsSet_;
}

void CreateChInstanceInfo::unsetregion()
{
    regionIsSet_ = false;
}

CreateChInstanceInfo_tags_info CreateChInstanceInfo::getTagsInfo() const
{
    return tagsInfo_;
}

void CreateChInstanceInfo::setTagsInfo(const CreateChInstanceInfo_tags_info& value)
{
    tagsInfo_ = value;
    tagsInfoIsSet_ = true;
}

bool CreateChInstanceInfo::tagsInfoIsSet() const
{
    return tagsInfoIsSet_;
}

void CreateChInstanceInfo::unsettagsInfo()
{
    tagsInfoIsSet_ = false;
}

}
}
}
}
}


