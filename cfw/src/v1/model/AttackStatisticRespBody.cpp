

#include "huaweicloud/cfw/v1/model/AttackStatisticRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AttackStatisticRespBody::AttackStatisticRespBody()
{
    appsIsSet_ = false;
    associatedName_ = "";
    associatedNameIsSet_ = false;
    associatedType_ = "";
    associatedTypeIsSet_ = false;
    attackCount_ = 0L;
    attackCountIsSet_ = false;
    attackType_ = "";
    attackTypeIsSet_ = false;
    denyCount_ = 0L;
    denyCountIsSet_ = false;
    dstPortsIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    latestTime_ = 0L;
    latestTimeIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    srcType_ = "";
    srcTypeIsSet_ = false;
    vgwId_ = "";
    vgwIdIsSet_ = false;
}

AttackStatisticRespBody::~AttackStatisticRespBody() = default;

void AttackStatisticRespBody::validate()
{
}

web::json::value AttackStatisticRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appsIsSet_) {
        val[utility::conversions::to_string_t("apps")] = ModelBase::toJson(apps_);
    }
    if(associatedNameIsSet_) {
        val[utility::conversions::to_string_t("associated_name")] = ModelBase::toJson(associatedName_);
    }
    if(associatedTypeIsSet_) {
        val[utility::conversions::to_string_t("associated_type")] = ModelBase::toJson(associatedType_);
    }
    if(attackCountIsSet_) {
        val[utility::conversions::to_string_t("attack_count")] = ModelBase::toJson(attackCount_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
    }
    if(denyCountIsSet_) {
        val[utility::conversions::to_string_t("deny_count")] = ModelBase::toJson(denyCount_);
    }
    if(dstPortsIsSet_) {
        val[utility::conversions::to_string_t("dst_ports")] = ModelBase::toJson(dstPorts_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(latestTimeIsSet_) {
        val[utility::conversions::to_string_t("latest_time")] = ModelBase::toJson(latestTime_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(srcTypeIsSet_) {
        val[utility::conversions::to_string_t("src_type")] = ModelBase::toJson(srcType_);
    }
    if(vgwIdIsSet_) {
        val[utility::conversions::to_string_t("vgw_id")] = ModelBase::toJson(vgwId_);
    }

    return val;
}
bool AttackStatisticRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apps"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ports"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vgw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vgw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVgwId(refVal);
        }
    }
    return ok;
}


std::vector<TopInfo>& AttackStatisticRespBody::getApps()
{
    return apps_;
}

void AttackStatisticRespBody::setApps(const std::vector<TopInfo>& value)
{
    apps_ = value;
    appsIsSet_ = true;
}

bool AttackStatisticRespBody::appsIsSet() const
{
    return appsIsSet_;
}

void AttackStatisticRespBody::unsetapps()
{
    appsIsSet_ = false;
}

std::string AttackStatisticRespBody::getAssociatedName() const
{
    return associatedName_;
}

void AttackStatisticRespBody::setAssociatedName(const std::string& value)
{
    associatedName_ = value;
    associatedNameIsSet_ = true;
}

bool AttackStatisticRespBody::associatedNameIsSet() const
{
    return associatedNameIsSet_;
}

void AttackStatisticRespBody::unsetassociatedName()
{
    associatedNameIsSet_ = false;
}

std::string AttackStatisticRespBody::getAssociatedType() const
{
    return associatedType_;
}

void AttackStatisticRespBody::setAssociatedType(const std::string& value)
{
    associatedType_ = value;
    associatedTypeIsSet_ = true;
}

bool AttackStatisticRespBody::associatedTypeIsSet() const
{
    return associatedTypeIsSet_;
}

void AttackStatisticRespBody::unsetassociatedType()
{
    associatedTypeIsSet_ = false;
}

int64_t AttackStatisticRespBody::getAttackCount() const
{
    return attackCount_;
}

void AttackStatisticRespBody::setAttackCount(int64_t value)
{
    attackCount_ = value;
    attackCountIsSet_ = true;
}

bool AttackStatisticRespBody::attackCountIsSet() const
{
    return attackCountIsSet_;
}

void AttackStatisticRespBody::unsetattackCount()
{
    attackCountIsSet_ = false;
}

std::string AttackStatisticRespBody::getAttackType() const
{
    return attackType_;
}

void AttackStatisticRespBody::setAttackType(const std::string& value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool AttackStatisticRespBody::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void AttackStatisticRespBody::unsetattackType()
{
    attackTypeIsSet_ = false;
}

int64_t AttackStatisticRespBody::getDenyCount() const
{
    return denyCount_;
}

void AttackStatisticRespBody::setDenyCount(int64_t value)
{
    denyCount_ = value;
    denyCountIsSet_ = true;
}

bool AttackStatisticRespBody::denyCountIsSet() const
{
    return denyCountIsSet_;
}

void AttackStatisticRespBody::unsetdenyCount()
{
    denyCountIsSet_ = false;
}

std::vector<TopInfo>& AttackStatisticRespBody::getDstPorts()
{
    return dstPorts_;
}

void AttackStatisticRespBody::setDstPorts(const std::vector<TopInfo>& value)
{
    dstPorts_ = value;
    dstPortsIsSet_ = true;
}

bool AttackStatisticRespBody::dstPortsIsSet() const
{
    return dstPortsIsSet_;
}

void AttackStatisticRespBody::unsetdstPorts()
{
    dstPortsIsSet_ = false;
}

std::string AttackStatisticRespBody::getIp() const
{
    return ip_;
}

void AttackStatisticRespBody::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool AttackStatisticRespBody::ipIsSet() const
{
    return ipIsSet_;
}

void AttackStatisticRespBody::unsetip()
{
    ipIsSet_ = false;
}

int64_t AttackStatisticRespBody::getLatestTime() const
{
    return latestTime_;
}

void AttackStatisticRespBody::setLatestTime(int64_t value)
{
    latestTime_ = value;
    latestTimeIsSet_ = true;
}

bool AttackStatisticRespBody::latestTimeIsSet() const
{
    return latestTimeIsSet_;
}

void AttackStatisticRespBody::unsetlatestTime()
{
    latestTimeIsSet_ = false;
}

std::string AttackStatisticRespBody::getRegionId() const
{
    return regionId_;
}

void AttackStatisticRespBody::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool AttackStatisticRespBody::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void AttackStatisticRespBody::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string AttackStatisticRespBody::getRegionName() const
{
    return regionName_;
}

void AttackStatisticRespBody::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool AttackStatisticRespBody::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void AttackStatisticRespBody::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string AttackStatisticRespBody::getSrcType() const
{
    return srcType_;
}

void AttackStatisticRespBody::setSrcType(const std::string& value)
{
    srcType_ = value;
    srcTypeIsSet_ = true;
}

bool AttackStatisticRespBody::srcTypeIsSet() const
{
    return srcTypeIsSet_;
}

void AttackStatisticRespBody::unsetsrcType()
{
    srcTypeIsSet_ = false;
}

std::string AttackStatisticRespBody::getVgwId() const
{
    return vgwId_;
}

void AttackStatisticRespBody::setVgwId(const std::string& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool AttackStatisticRespBody::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void AttackStatisticRespBody::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

}
}
}
}
}


