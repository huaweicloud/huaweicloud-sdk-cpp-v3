

#include "huaweicloud/gaussdb/v3/model/SrCreateInstanceRsp_instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SrCreateInstanceRsp_instance::SrCreateInstanceRsp_instance()
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
    subNetId_ = "";
    subNetIdIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    payInfoIsSet_ = false;
    enableSsl_ = false;
    enableSslIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    tagsInfoIsSet_ = false;
}

SrCreateInstanceRsp_instance::~SrCreateInstanceRsp_instance() = default;

void SrCreateInstanceRsp_instance::validate()
{
}

web::json::value SrCreateInstanceRsp_instance::toJson() const
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
    if(subNetIdIsSet_) {
        val[utility::conversions::to_string_t("sub_net_id")] = ModelBase::toJson(subNetId_);
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
    if(enableSslIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl")] = ModelBase::toJson(enableSsl_);
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
bool SrCreateInstanceRsp_instance::fromJson(const web::json::value& val)
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
            SrCreateInstanceRsp_instance_engine refVal;
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
    if(val.has_field(utility::conversions::to_string_t("sub_net_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_net_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubNetId(refVal);
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
            SrCreateInstanceRsp_instance_pay_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSsl(refVal);
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
            SrCreateInstanceRsp_instance_tags_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsInfo(refVal);
        }
    }
    return ok;
}


std::string SrCreateInstanceRsp_instance::getId() const
{
    return id_;
}

void SrCreateInstanceRsp_instance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::idIsSet() const
{
    return idIsSet_;
}

void SrCreateInstanceRsp_instance::unsetid()
{
    idIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getAzCode() const
{
    return azCode_;
}

void SrCreateInstanceRsp_instance::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void SrCreateInstanceRsp_instance::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getAzMode() const
{
    return azMode_;
}

void SrCreateInstanceRsp_instance::setAzMode(const std::string& value)
{
    azMode_ = value;
    azModeIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::azModeIsSet() const
{
    return azModeIsSet_;
}

void SrCreateInstanceRsp_instance::unsetazMode()
{
    azModeIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getName() const
{
    return name_;
}

void SrCreateInstanceRsp_instance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::nameIsSet() const
{
    return nameIsSet_;
}

void SrCreateInstanceRsp_instance::unsetname()
{
    nameIsSet_ = false;
}

SrCreateInstanceRsp_instance_engine SrCreateInstanceRsp_instance::getEngine() const
{
    return engine_;
}

void SrCreateInstanceRsp_instance::setEngine(const SrCreateInstanceRsp_instance_engine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::engineIsSet() const
{
    return engineIsSet_;
}

void SrCreateInstanceRsp_instance::unsetengine()
{
    engineIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getVpcId() const
{
    return vpcId_;
}

void SrCreateInstanceRsp_instance::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void SrCreateInstanceRsp_instance::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getSecurityGroupId() const
{
    return securityGroupId_;
}

void SrCreateInstanceRsp_instance::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void SrCreateInstanceRsp_instance::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getSubNetId() const
{
    return subNetId_;
}

void SrCreateInstanceRsp_instance::setSubNetId(const std::string& value)
{
    subNetId_ = value;
    subNetIdIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::subNetIdIsSet() const
{
    return subNetIdIsSet_;
}

void SrCreateInstanceRsp_instance::unsetsubNetId()
{
    subNetIdIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getDbUser() const
{
    return dbUser_;
}

void SrCreateInstanceRsp_instance::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void SrCreateInstanceRsp_instance::unsetdbUser()
{
    dbUserIsSet_ = false;
}

int32_t SrCreateInstanceRsp_instance::getPort() const
{
    return port_;
}

void SrCreateInstanceRsp_instance::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::portIsSet() const
{
    return portIsSet_;
}

void SrCreateInstanceRsp_instance::unsetport()
{
    portIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getHaMode() const
{
    return haMode_;
}

void SrCreateInstanceRsp_instance::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::haModeIsSet() const
{
    return haModeIsSet_;
}

void SrCreateInstanceRsp_instance::unsethaMode()
{
    haModeIsSet_ = false;
}

SrCreateInstanceRsp_instance_pay_info SrCreateInstanceRsp_instance::getPayInfo() const
{
    return payInfo_;
}

void SrCreateInstanceRsp_instance::setPayInfo(const SrCreateInstanceRsp_instance_pay_info& value)
{
    payInfo_ = value;
    payInfoIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::payInfoIsSet() const
{
    return payInfoIsSet_;
}

void SrCreateInstanceRsp_instance::unsetpayInfo()
{
    payInfoIsSet_ = false;
}

bool SrCreateInstanceRsp_instance::isEnableSsl() const
{
    return enableSsl_;
}

void SrCreateInstanceRsp_instance::setEnableSsl(bool value)
{
    enableSsl_ = value;
    enableSslIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::enableSslIsSet() const
{
    return enableSslIsSet_;
}

void SrCreateInstanceRsp_instance::unsetenableSsl()
{
    enableSslIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getStatus() const
{
    return status_;
}

void SrCreateInstanceRsp_instance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::statusIsSet() const
{
    return statusIsSet_;
}

void SrCreateInstanceRsp_instance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance::getRegion() const
{
    return region_;
}

void SrCreateInstanceRsp_instance::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::regionIsSet() const
{
    return regionIsSet_;
}

void SrCreateInstanceRsp_instance::unsetregion()
{
    regionIsSet_ = false;
}

SrCreateInstanceRsp_instance_tags_info SrCreateInstanceRsp_instance::getTagsInfo() const
{
    return tagsInfo_;
}

void SrCreateInstanceRsp_instance::setTagsInfo(const SrCreateInstanceRsp_instance_tags_info& value)
{
    tagsInfo_ = value;
    tagsInfoIsSet_ = true;
}

bool SrCreateInstanceRsp_instance::tagsInfoIsSet() const
{
    return tagsInfoIsSet_;
}

void SrCreateInstanceRsp_instance::unsettagsInfo()
{
    tagsInfoIsSet_ = false;
}

}
}
}
}
}


