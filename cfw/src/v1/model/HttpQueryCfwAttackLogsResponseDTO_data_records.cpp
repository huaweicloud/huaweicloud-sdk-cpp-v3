

#include "huaweicloud/cfw/v1/model/HttpQueryCfwAttackLogsResponseDTO_data_records.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpQueryCfwAttackLogsResponseDTO_data_records::HttpQueryCfwAttackLogsResponseDTO_data_records()
{
    direction_ = "";
    directionIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    eventTime_ = 0L;
    eventTimeIsSet_ = false;
    attackType_ = "";
    attackTypeIsSet_ = false;
    attackRule_ = "";
    attackRuleIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    packetLength_ = 0L;
    packetLengthIsSet_ = false;
    attackRuleId_ = "";
    attackRuleIdIsSet_ = false;
    hitTime_ = 0L;
    hitTimeIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    srcPort_ = 0;
    srcPortIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    dstPort_ = 0;
    dstPortIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    packet_ = "";
    packetIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    packetMessagesIsSet_ = false;
    srcRegionId_ = "";
    srcRegionIdIsSet_ = false;
    srcRegionName_ = "";
    srcRegionNameIsSet_ = false;
    dstRegionId_ = "";
    dstRegionIdIsSet_ = false;
    dstRegionName_ = "";
    dstRegionNameIsSet_ = false;
    srcProvinceId_ = "";
    srcProvinceIdIsSet_ = false;
    srcProvinceName_ = "";
    srcProvinceNameIsSet_ = false;
    srcCityId_ = "";
    srcCityIdIsSet_ = false;
    srcCityName_ = "";
    srcCityNameIsSet_ = false;
    dstProvinceId_ = "";
    dstProvinceIdIsSet_ = false;
    dstProvinceName_ = "";
    dstProvinceNameIsSet_ = false;
    dstCityId_ = "";
    dstCityIdIsSet_ = false;
    dstCityName_ = "";
    dstCityNameIsSet_ = false;
}

HttpQueryCfwAttackLogsResponseDTO_data_records::~HttpQueryCfwAttackLogsResponseDTO_data_records() = default;

void HttpQueryCfwAttackLogsResponseDTO_data_records::validate()
{
}

web::json::value HttpQueryCfwAttackLogsResponseDTO_data_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(eventTimeIsSet_) {
        val[utility::conversions::to_string_t("event_time")] = ModelBase::toJson(eventTime_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
    }
    if(attackRuleIsSet_) {
        val[utility::conversions::to_string_t("attack_rule")] = ModelBase::toJson(attackRule_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(packetLengthIsSet_) {
        val[utility::conversions::to_string_t("packet_length")] = ModelBase::toJson(packetLength_);
    }
    if(attackRuleIdIsSet_) {
        val[utility::conversions::to_string_t("attack_rule_id")] = ModelBase::toJson(attackRuleId_);
    }
    if(hitTimeIsSet_) {
        val[utility::conversions::to_string_t("hit_time")] = ModelBase::toJson(hitTime_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(srcPortIsSet_) {
        val[utility::conversions::to_string_t("src_port")] = ModelBase::toJson(srcPort_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(packetIsSet_) {
        val[utility::conversions::to_string_t("packet")] = ModelBase::toJson(packet_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(packetMessagesIsSet_) {
        val[utility::conversions::to_string_t("packetMessages")] = ModelBase::toJson(packetMessages_);
    }
    if(srcRegionIdIsSet_) {
        val[utility::conversions::to_string_t("src_region_id")] = ModelBase::toJson(srcRegionId_);
    }
    if(srcRegionNameIsSet_) {
        val[utility::conversions::to_string_t("src_region_name")] = ModelBase::toJson(srcRegionName_);
    }
    if(dstRegionIdIsSet_) {
        val[utility::conversions::to_string_t("dst_region_id")] = ModelBase::toJson(dstRegionId_);
    }
    if(dstRegionNameIsSet_) {
        val[utility::conversions::to_string_t("dst_region_name")] = ModelBase::toJson(dstRegionName_);
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

    return val;
}
bool HttpQueryCfwAttackLogsResponseDTO_data_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("attack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("packet_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packet_length"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacketLength(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacket(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("packetMessages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packetMessages"));
        if(!fieldValue.is_null())
        {
            std::vector<PacketMessage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacketMessages(refVal);
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
    return ok;
}


std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDirection() const
{
    return direction_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::directionIsSet() const
{
    return directionIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdirection()
{
    directionIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getAction() const
{
    return action_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::actionIsSet() const
{
    return actionIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetaction()
{
    actionIsSet_ = false;
}

int64_t HttpQueryCfwAttackLogsResponseDTO_data_records::getEventTime() const
{
    return eventTime_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setEventTime(int64_t value)
{
    eventTime_ = value;
    eventTimeIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::eventTimeIsSet() const
{
    return eventTimeIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unseteventTime()
{
    eventTimeIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getAttackType() const
{
    return attackType_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setAttackType(const std::string& value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetattackType()
{
    attackTypeIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getAttackRule() const
{
    return attackRule_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setAttackRule(const std::string& value)
{
    attackRule_ = value;
    attackRuleIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::attackRuleIsSet() const
{
    return attackRuleIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetattackRule()
{
    attackRuleIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getLevel() const
{
    return level_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::levelIsSet() const
{
    return levelIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetlevel()
{
    levelIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSource() const
{
    return source_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::sourceIsSet() const
{
    return sourceIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsource()
{
    sourceIsSet_ = false;
}

int64_t HttpQueryCfwAttackLogsResponseDTO_data_records::getPacketLength() const
{
    return packetLength_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setPacketLength(int64_t value)
{
    packetLength_ = value;
    packetLengthIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::packetLengthIsSet() const
{
    return packetLengthIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetpacketLength()
{
    packetLengthIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getAttackRuleId() const
{
    return attackRuleId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setAttackRuleId(const std::string& value)
{
    attackRuleId_ = value;
    attackRuleIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::attackRuleIdIsSet() const
{
    return attackRuleIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetattackRuleId()
{
    attackRuleIdIsSet_ = false;
}

int64_t HttpQueryCfwAttackLogsResponseDTO_data_records::getHitTime() const
{
    return hitTime_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setHitTime(int64_t value)
{
    hitTime_ = value;
    hitTimeIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::hitTimeIsSet() const
{
    return hitTimeIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsethitTime()
{
    hitTimeIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getLogId() const
{
    return logId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::logIdIsSet() const
{
    return logIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetlogId()
{
    logIdIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcIp() const
{
    return srcIp_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

int32_t HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcPort() const
{
    return srcPort_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDstIp() const
{
    return dstIp_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t HttpQueryCfwAttackLogsResponseDTO_data_records::getDstPort() const
{
    return dstPort_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getProtocol() const
{
    return protocol_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::protocolIsSet() const
{
    return protocolIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getPacket() const
{
    return packet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setPacket(const std::string& value)
{
    packet_ = value;
    packetIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::packetIsSet() const
{
    return packetIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetpacket()
{
    packetIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getApp() const
{
    return app_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::appIsSet() const
{
    return appIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetapp()
{
    appIsSet_ = false;
}

std::vector<PacketMessage>& HttpQueryCfwAttackLogsResponseDTO_data_records::getPacketMessages()
{
    return packetMessages_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setPacketMessages(const std::vector<PacketMessage>& value)
{
    packetMessages_ = value;
    packetMessagesIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::packetMessagesIsSet() const
{
    return packetMessagesIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetpacketMessages()
{
    packetMessagesIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcRegionId() const
{
    return srcRegionId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcRegionId(const std::string& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcRegionName() const
{
    return srcRegionName_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcRegionName(const std::string& value)
{
    srcRegionName_ = value;
    srcRegionNameIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcRegionNameIsSet() const
{
    return srcRegionNameIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcRegionName()
{
    srcRegionNameIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDstRegionId() const
{
    return dstRegionId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstRegionId(const std::string& value)
{
    dstRegionId_ = value;
    dstRegionIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstRegionIdIsSet() const
{
    return dstRegionIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstRegionId()
{
    dstRegionIdIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDstRegionName() const
{
    return dstRegionName_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstRegionName(const std::string& value)
{
    dstRegionName_ = value;
    dstRegionNameIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstRegionNameIsSet() const
{
    return dstRegionNameIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstRegionName()
{
    dstRegionNameIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcProvinceId() const
{
    return srcProvinceId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcProvinceId(const std::string& value)
{
    srcProvinceId_ = value;
    srcProvinceIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcProvinceIdIsSet() const
{
    return srcProvinceIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcProvinceId()
{
    srcProvinceIdIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcProvinceName() const
{
    return srcProvinceName_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcProvinceName(const std::string& value)
{
    srcProvinceName_ = value;
    srcProvinceNameIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcProvinceNameIsSet() const
{
    return srcProvinceNameIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcProvinceName()
{
    srcProvinceNameIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcCityId() const
{
    return srcCityId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcCityId(const std::string& value)
{
    srcCityId_ = value;
    srcCityIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcCityIdIsSet() const
{
    return srcCityIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcCityId()
{
    srcCityIdIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getSrcCityName() const
{
    return srcCityName_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setSrcCityName(const std::string& value)
{
    srcCityName_ = value;
    srcCityNameIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::srcCityNameIsSet() const
{
    return srcCityNameIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetsrcCityName()
{
    srcCityNameIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDstProvinceId() const
{
    return dstProvinceId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstProvinceId(const std::string& value)
{
    dstProvinceId_ = value;
    dstProvinceIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstProvinceIdIsSet() const
{
    return dstProvinceIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstProvinceId()
{
    dstProvinceIdIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDstProvinceName() const
{
    return dstProvinceName_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstProvinceName(const std::string& value)
{
    dstProvinceName_ = value;
    dstProvinceNameIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstProvinceNameIsSet() const
{
    return dstProvinceNameIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstProvinceName()
{
    dstProvinceNameIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDstCityId() const
{
    return dstCityId_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstCityId(const std::string& value)
{
    dstCityId_ = value;
    dstCityIdIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstCityIdIsSet() const
{
    return dstCityIdIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstCityId()
{
    dstCityIdIsSet_ = false;
}

std::string HttpQueryCfwAttackLogsResponseDTO_data_records::getDstCityName() const
{
    return dstCityName_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::setDstCityName(const std::string& value)
{
    dstCityName_ = value;
    dstCityNameIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data_records::dstCityNameIsSet() const
{
    return dstCityNameIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data_records::unsetdstCityName()
{
    dstCityNameIsSet_ = false;
}

}
}
}
}
}


