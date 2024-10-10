

#include "huaweicloud/aad/v2/model/ListDDoSEventData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSEventData::ListDDoSEventData()
{
    zoneIp_ = "";
    zoneIpIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    maxDropKbps_ = "";
    maxDropKbpsIsSet_ = false;
    maxDropPps_ = "";
    maxDropPpsIsSet_ = false;
    maxInKbps_ = "";
    maxInKbpsIsSet_ = false;
    maxInPps_ = "";
    maxInPpsIsSet_ = false;
    attackTypes_ = "";
    attackTypesIsSet_ = false;
    attackIps_ = "";
    attackIpsIsSet_ = false;
    attackIpsDesc_ = "";
    attackIpsDescIsSet_ = false;
    attackStatus_ = "";
    attackStatusIsSet_ = false;
}

ListDDoSEventData::~ListDDoSEventData() = default;

void ListDDoSEventData::validate()
{
}

web::json::value ListDDoSEventData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(zoneIpIsSet_) {
        val[utility::conversions::to_string_t("zone_ip")] = ModelBase::toJson(zoneIp_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(maxDropKbpsIsSet_) {
        val[utility::conversions::to_string_t("max_drop_kbps")] = ModelBase::toJson(maxDropKbps_);
    }
    if(maxDropPpsIsSet_) {
        val[utility::conversions::to_string_t("max_drop_pps")] = ModelBase::toJson(maxDropPps_);
    }
    if(maxInKbpsIsSet_) {
        val[utility::conversions::to_string_t("max_in_kbps")] = ModelBase::toJson(maxInKbps_);
    }
    if(maxInPpsIsSet_) {
        val[utility::conversions::to_string_t("max_in_pps")] = ModelBase::toJson(maxInPps_);
    }
    if(attackTypesIsSet_) {
        val[utility::conversions::to_string_t("attack_types")] = ModelBase::toJson(attackTypes_);
    }
    if(attackIpsIsSet_) {
        val[utility::conversions::to_string_t("attack_ips")] = ModelBase::toJson(attackIps_);
    }
    if(attackIpsDescIsSet_) {
        val[utility::conversions::to_string_t("attack_ips_desc")] = ModelBase::toJson(attackIpsDesc_);
    }
    if(attackStatusIsSet_) {
        val[utility::conversions::to_string_t("attack_status")] = ModelBase::toJson(attackStatus_);
    }

    return val;
}
bool ListDDoSEventData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("zone_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zone_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZoneIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_drop_kbps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_drop_kbps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxDropKbps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_drop_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_drop_pps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxDropPps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_in_kbps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_in_kbps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxInKbps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_in_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_in_pps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxInPps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_ips_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_ips_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackIpsDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackStatus(refVal);
        }
    }
    return ok;
}


std::string ListDDoSEventData::getZoneIp() const
{
    return zoneIp_;
}

void ListDDoSEventData::setZoneIp(const std::string& value)
{
    zoneIp_ = value;
    zoneIpIsSet_ = true;
}

bool ListDDoSEventData::zoneIpIsSet() const
{
    return zoneIpIsSet_;
}

void ListDDoSEventData::unsetzoneIp()
{
    zoneIpIsSet_ = false;
}

std::string ListDDoSEventData::getStartTime() const
{
    return startTime_;
}

void ListDDoSEventData::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDDoSEventData::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDDoSEventData::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDDoSEventData::getEndTime() const
{
    return endTime_;
}

void ListDDoSEventData::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDDoSEventData::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDDoSEventData::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListDDoSEventData::getMaxDropKbps() const
{
    return maxDropKbps_;
}

void ListDDoSEventData::setMaxDropKbps(const std::string& value)
{
    maxDropKbps_ = value;
    maxDropKbpsIsSet_ = true;
}

bool ListDDoSEventData::maxDropKbpsIsSet() const
{
    return maxDropKbpsIsSet_;
}

void ListDDoSEventData::unsetmaxDropKbps()
{
    maxDropKbpsIsSet_ = false;
}

std::string ListDDoSEventData::getMaxDropPps() const
{
    return maxDropPps_;
}

void ListDDoSEventData::setMaxDropPps(const std::string& value)
{
    maxDropPps_ = value;
    maxDropPpsIsSet_ = true;
}

bool ListDDoSEventData::maxDropPpsIsSet() const
{
    return maxDropPpsIsSet_;
}

void ListDDoSEventData::unsetmaxDropPps()
{
    maxDropPpsIsSet_ = false;
}

std::string ListDDoSEventData::getMaxInKbps() const
{
    return maxInKbps_;
}

void ListDDoSEventData::setMaxInKbps(const std::string& value)
{
    maxInKbps_ = value;
    maxInKbpsIsSet_ = true;
}

bool ListDDoSEventData::maxInKbpsIsSet() const
{
    return maxInKbpsIsSet_;
}

void ListDDoSEventData::unsetmaxInKbps()
{
    maxInKbpsIsSet_ = false;
}

std::string ListDDoSEventData::getMaxInPps() const
{
    return maxInPps_;
}

void ListDDoSEventData::setMaxInPps(const std::string& value)
{
    maxInPps_ = value;
    maxInPpsIsSet_ = true;
}

bool ListDDoSEventData::maxInPpsIsSet() const
{
    return maxInPpsIsSet_;
}

void ListDDoSEventData::unsetmaxInPps()
{
    maxInPpsIsSet_ = false;
}

std::string ListDDoSEventData::getAttackTypes() const
{
    return attackTypes_;
}

void ListDDoSEventData::setAttackTypes(const std::string& value)
{
    attackTypes_ = value;
    attackTypesIsSet_ = true;
}

bool ListDDoSEventData::attackTypesIsSet() const
{
    return attackTypesIsSet_;
}

void ListDDoSEventData::unsetattackTypes()
{
    attackTypesIsSet_ = false;
}

std::string ListDDoSEventData::getAttackIps() const
{
    return attackIps_;
}

void ListDDoSEventData::setAttackIps(const std::string& value)
{
    attackIps_ = value;
    attackIpsIsSet_ = true;
}

bool ListDDoSEventData::attackIpsIsSet() const
{
    return attackIpsIsSet_;
}

void ListDDoSEventData::unsetattackIps()
{
    attackIpsIsSet_ = false;
}

std::string ListDDoSEventData::getAttackIpsDesc() const
{
    return attackIpsDesc_;
}

void ListDDoSEventData::setAttackIpsDesc(const std::string& value)
{
    attackIpsDesc_ = value;
    attackIpsDescIsSet_ = true;
}

bool ListDDoSEventData::attackIpsDescIsSet() const
{
    return attackIpsDescIsSet_;
}

void ListDDoSEventData::unsetattackIpsDesc()
{
    attackIpsDescIsSet_ = false;
}

std::string ListDDoSEventData::getAttackStatus() const
{
    return attackStatus_;
}

void ListDDoSEventData::setAttackStatus(const std::string& value)
{
    attackStatus_ = value;
    attackStatusIsSet_ = true;
}

bool ListDDoSEventData::attackStatusIsSet() const
{
    return attackStatusIsSet_;
}

void ListDDoSEventData::unsetattackStatus()
{
    attackStatusIsSet_ = false;
}

}
}
}
}
}


