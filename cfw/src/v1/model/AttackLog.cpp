

#include "huaweicloud/cfw/v1/model/AttackLog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AttackLog::AttackLog()
{
    action_ = "";
    actionIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    attackRule_ = "";
    attackRuleIsSet_ = false;
    attackRuleId_ = "";
    attackRuleIdIsSet_ = false;
    attackType_ = "";
    attackTypeIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    dstPort_ = 0;
    dstPortIsSet_ = false;
    dstRegionId_ = "";
    dstRegionIdIsSet_ = false;
    dstRegionName_ = "";
    dstRegionNameIsSet_ = false;
    dstProvinceId_ = "";
    dstProvinceIdIsSet_ = false;
    dstProvinceName_ = "";
    dstProvinceNameIsSet_ = false;
    dstCityId_ = "";
    dstCityIdIsSet_ = false;
    dstCityName_ = "";
    dstCityNameIsSet_ = false;
    eventTime_ = 0L;
    eventTimeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    realIp_ = "";
    realIpIsSet_ = false;
    tag_ = 0;
    tagIsSet_ = false;
    srcPort_ = 0;
    srcPortIsSet_ = false;
    srcRegionId_ = "";
    srcRegionIdIsSet_ = false;
    srcRegionName_ = "";
    srcRegionNameIsSet_ = false;
    srcProvinceId_ = "";
    srcProvinceIdIsSet_ = false;
    srcProvinceName_ = "";
    srcProvinceNameIsSet_ = false;
    srcCityId_ = "";
    srcCityIdIsSet_ = false;
    srcCityName_ = "";
    srcCityNameIsSet_ = false;
    vgwId_ = "";
    vgwIdIsSet_ = false;
}

AttackLog::~AttackLog() = default;

void AttackLog::validate()
{
}

web::json::value AttackLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(attackRuleIsSet_) {
        val[utility::conversions::to_string_t("attack_rule")] = ModelBase::toJson(attackRule_);
    }
    if(attackRuleIdIsSet_) {
        val[utility::conversions::to_string_t("attack_rule_id")] = ModelBase::toJson(attackRuleId_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(dstRegionIdIsSet_) {
        val[utility::conversions::to_string_t("dst_region_id")] = ModelBase::toJson(dstRegionId_);
    }
    if(dstRegionNameIsSet_) {
        val[utility::conversions::to_string_t("dst_region_name")] = ModelBase::toJson(dstRegionName_);
    }
    if(dstProvinceIdIsSet_) {
        val[utility::conversions::to_string_t("dst_province_id")] = ModelBase::toJson(dstProvinceId_);
    }
    if(dstProvinceNameIsSet_) {
        val[utility::conversions::to_string_t("dst_province_name")] = ModelBase::toJson(dstProvinceName_);
    }
    if(dstCityIdIsSet_) {
        val[utility::conversions::to_string_t("dst_city_id")] = ModelBase::toJson(dstCityId_);
    }
    if(dstCityNameIsSet_) {
        val[utility::conversions::to_string_t("dst_city_name")] = ModelBase::toJson(dstCityName_);
    }
    if(eventTimeIsSet_) {
        val[utility::conversions::to_string_t("event_time")] = ModelBase::toJson(eventTime_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(realIpIsSet_) {
        val[utility::conversions::to_string_t("real_ip")] = ModelBase::toJson(realIp_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(srcPortIsSet_) {
        val[utility::conversions::to_string_t("src_port")] = ModelBase::toJson(srcPort_);
    }
    if(srcRegionIdIsSet_) {
        val[utility::conversions::to_string_t("src_region_id")] = ModelBase::toJson(srcRegionId_);
    }
    if(srcRegionNameIsSet_) {
        val[utility::conversions::to_string_t("src_region_name")] = ModelBase::toJson(srcRegionName_);
    }
    if(srcProvinceIdIsSet_) {
        val[utility::conversions::to_string_t("src_province_id")] = ModelBase::toJson(srcProvinceId_);
    }
    if(srcProvinceNameIsSet_) {
        val[utility::conversions::to_string_t("src_province_name")] = ModelBase::toJson(srcProvinceName_);
    }
    if(srcCityIdIsSet_) {
        val[utility::conversions::to_string_t("src_city_id")] = ModelBase::toJson(srcCityId_);
    }
    if(srcCityNameIsSet_) {
        val[utility::conversions::to_string_t("src_city_name")] = ModelBase::toJson(srcCityName_);
    }
    if(vgwIdIsSet_) {
        val[utility::conversions::to_string_t("vgw_id")] = ModelBase::toJson(vgwId_);
    }

    return val;
}
bool AttackLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_rule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackRuleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_province_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_province_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstProvinceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_province_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_province_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstProvinceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_city_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_city_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstCityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_city_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_city_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstCityName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_province_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_province_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcProvinceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_province_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_province_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcProvinceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_city_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_city_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcCityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_city_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_city_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcCityName(refVal);
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


std::string AttackLog::getAction() const
{
    return action_;
}

void AttackLog::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool AttackLog::actionIsSet() const
{
    return actionIsSet_;
}

void AttackLog::unsetaction()
{
    actionIsSet_ = false;
}

std::string AttackLog::getApp() const
{
    return app_;
}

void AttackLog::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool AttackLog::appIsSet() const
{
    return appIsSet_;
}

void AttackLog::unsetapp()
{
    appIsSet_ = false;
}

std::string AttackLog::getAttackRule() const
{
    return attackRule_;
}

void AttackLog::setAttackRule(const std::string& value)
{
    attackRule_ = value;
    attackRuleIsSet_ = true;
}

bool AttackLog::attackRuleIsSet() const
{
    return attackRuleIsSet_;
}

void AttackLog::unsetattackRule()
{
    attackRuleIsSet_ = false;
}

std::string AttackLog::getAttackRuleId() const
{
    return attackRuleId_;
}

void AttackLog::setAttackRuleId(const std::string& value)
{
    attackRuleId_ = value;
    attackRuleIdIsSet_ = true;
}

bool AttackLog::attackRuleIdIsSet() const
{
    return attackRuleIdIsSet_;
}

void AttackLog::unsetattackRuleId()
{
    attackRuleIdIsSet_ = false;
}

std::string AttackLog::getAttackType() const
{
    return attackType_;
}

void AttackLog::setAttackType(const std::string& value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool AttackLog::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void AttackLog::unsetattackType()
{
    attackTypeIsSet_ = false;
}

std::string AttackLog::getDirection() const
{
    return direction_;
}

void AttackLog::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool AttackLog::directionIsSet() const
{
    return directionIsSet_;
}

void AttackLog::unsetdirection()
{
    directionIsSet_ = false;
}

std::string AttackLog::getDstIp() const
{
    return dstIp_;
}

void AttackLog::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool AttackLog::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void AttackLog::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t AttackLog::getDstPort() const
{
    return dstPort_;
}

void AttackLog::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool AttackLog::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void AttackLog::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string AttackLog::getDstRegionId() const
{
    return dstRegionId_;
}

void AttackLog::setDstRegionId(const std::string& value)
{
    dstRegionId_ = value;
    dstRegionIdIsSet_ = true;
}

bool AttackLog::dstRegionIdIsSet() const
{
    return dstRegionIdIsSet_;
}

void AttackLog::unsetdstRegionId()
{
    dstRegionIdIsSet_ = false;
}

std::string AttackLog::getDstRegionName() const
{
    return dstRegionName_;
}

void AttackLog::setDstRegionName(const std::string& value)
{
    dstRegionName_ = value;
    dstRegionNameIsSet_ = true;
}

bool AttackLog::dstRegionNameIsSet() const
{
    return dstRegionNameIsSet_;
}

void AttackLog::unsetdstRegionName()
{
    dstRegionNameIsSet_ = false;
}

std::string AttackLog::getDstProvinceId() const
{
    return dstProvinceId_;
}

void AttackLog::setDstProvinceId(const std::string& value)
{
    dstProvinceId_ = value;
    dstProvinceIdIsSet_ = true;
}

bool AttackLog::dstProvinceIdIsSet() const
{
    return dstProvinceIdIsSet_;
}

void AttackLog::unsetdstProvinceId()
{
    dstProvinceIdIsSet_ = false;
}

std::string AttackLog::getDstProvinceName() const
{
    return dstProvinceName_;
}

void AttackLog::setDstProvinceName(const std::string& value)
{
    dstProvinceName_ = value;
    dstProvinceNameIsSet_ = true;
}

bool AttackLog::dstProvinceNameIsSet() const
{
    return dstProvinceNameIsSet_;
}

void AttackLog::unsetdstProvinceName()
{
    dstProvinceNameIsSet_ = false;
}

std::string AttackLog::getDstCityId() const
{
    return dstCityId_;
}

void AttackLog::setDstCityId(const std::string& value)
{
    dstCityId_ = value;
    dstCityIdIsSet_ = true;
}

bool AttackLog::dstCityIdIsSet() const
{
    return dstCityIdIsSet_;
}

void AttackLog::unsetdstCityId()
{
    dstCityIdIsSet_ = false;
}

std::string AttackLog::getDstCityName() const
{
    return dstCityName_;
}

void AttackLog::setDstCityName(const std::string& value)
{
    dstCityName_ = value;
    dstCityNameIsSet_ = true;
}

bool AttackLog::dstCityNameIsSet() const
{
    return dstCityNameIsSet_;
}

void AttackLog::unsetdstCityName()
{
    dstCityNameIsSet_ = false;
}

int64_t AttackLog::getEventTime() const
{
    return eventTime_;
}

void AttackLog::setEventTime(int64_t value)
{
    eventTime_ = value;
    eventTimeIsSet_ = true;
}

bool AttackLog::eventTimeIsSet() const
{
    return eventTimeIsSet_;
}

void AttackLog::unseteventTime()
{
    eventTimeIsSet_ = false;
}

std::string AttackLog::getLevel() const
{
    return level_;
}

void AttackLog::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool AttackLog::levelIsSet() const
{
    return levelIsSet_;
}

void AttackLog::unsetlevel()
{
    levelIsSet_ = false;
}

std::string AttackLog::getProtocol() const
{
    return protocol_;
}

void AttackLog::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool AttackLog::protocolIsSet() const
{
    return protocolIsSet_;
}

void AttackLog::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string AttackLog::getSource() const
{
    return source_;
}

void AttackLog::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool AttackLog::sourceIsSet() const
{
    return sourceIsSet_;
}

void AttackLog::unsetsource()
{
    sourceIsSet_ = false;
}

std::string AttackLog::getSrcIp() const
{
    return srcIp_;
}

void AttackLog::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool AttackLog::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void AttackLog::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

std::string AttackLog::getRealIp() const
{
    return realIp_;
}

void AttackLog::setRealIp(const std::string& value)
{
    realIp_ = value;
    realIpIsSet_ = true;
}

bool AttackLog::realIpIsSet() const
{
    return realIpIsSet_;
}

void AttackLog::unsetrealIp()
{
    realIpIsSet_ = false;
}

int32_t AttackLog::getTag() const
{
    return tag_;
}

void AttackLog::setTag(int32_t value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool AttackLog::tagIsSet() const
{
    return tagIsSet_;
}

void AttackLog::unsettag()
{
    tagIsSet_ = false;
}

int32_t AttackLog::getSrcPort() const
{
    return srcPort_;
}

void AttackLog::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool AttackLog::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void AttackLog::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string AttackLog::getSrcRegionId() const
{
    return srcRegionId_;
}

void AttackLog::setSrcRegionId(const std::string& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool AttackLog::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void AttackLog::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

std::string AttackLog::getSrcRegionName() const
{
    return srcRegionName_;
}

void AttackLog::setSrcRegionName(const std::string& value)
{
    srcRegionName_ = value;
    srcRegionNameIsSet_ = true;
}

bool AttackLog::srcRegionNameIsSet() const
{
    return srcRegionNameIsSet_;
}

void AttackLog::unsetsrcRegionName()
{
    srcRegionNameIsSet_ = false;
}

std::string AttackLog::getSrcProvinceId() const
{
    return srcProvinceId_;
}

void AttackLog::setSrcProvinceId(const std::string& value)
{
    srcProvinceId_ = value;
    srcProvinceIdIsSet_ = true;
}

bool AttackLog::srcProvinceIdIsSet() const
{
    return srcProvinceIdIsSet_;
}

void AttackLog::unsetsrcProvinceId()
{
    srcProvinceIdIsSet_ = false;
}

std::string AttackLog::getSrcProvinceName() const
{
    return srcProvinceName_;
}

void AttackLog::setSrcProvinceName(const std::string& value)
{
    srcProvinceName_ = value;
    srcProvinceNameIsSet_ = true;
}

bool AttackLog::srcProvinceNameIsSet() const
{
    return srcProvinceNameIsSet_;
}

void AttackLog::unsetsrcProvinceName()
{
    srcProvinceNameIsSet_ = false;
}

std::string AttackLog::getSrcCityId() const
{
    return srcCityId_;
}

void AttackLog::setSrcCityId(const std::string& value)
{
    srcCityId_ = value;
    srcCityIdIsSet_ = true;
}

bool AttackLog::srcCityIdIsSet() const
{
    return srcCityIdIsSet_;
}

void AttackLog::unsetsrcCityId()
{
    srcCityIdIsSet_ = false;
}

std::string AttackLog::getSrcCityName() const
{
    return srcCityName_;
}

void AttackLog::setSrcCityName(const std::string& value)
{
    srcCityName_ = value;
    srcCityNameIsSet_ = true;
}

bool AttackLog::srcCityNameIsSet() const
{
    return srcCityNameIsSet_;
}

void AttackLog::unsetsrcCityName()
{
    srcCityNameIsSet_ = false;
}

std::string AttackLog::getVgwId() const
{
    return vgwId_;
}

void AttackLog::setVgwId(const std::string& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool AttackLog::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void AttackLog::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

}
}
}
}
}


