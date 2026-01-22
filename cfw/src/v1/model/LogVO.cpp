

#include "huaweicloud/cfw/v1/model/LogVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




LogVO::LogVO()
{
    app_ = "";
    appIsSet_ = false;
    bytes_ = 0.0;
    bytesIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    dstHost_ = "";
    dstHostIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    dstPort_ = 0;
    dstPortIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    packets_ = 0.0;
    packetsIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    srcPort_ = 0;
    srcPortIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
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
    sctpVerificationTag_ = 0L;
    sctpVerificationTagIsSet_ = false;
    sctpIsHandshakeFlow_ = "";
    sctpIsHandshakeFlowIsSet_ = false;
    qosRuleId_ = "";
    qosRuleIdIsSet_ = false;
    qosRuleName_ = "";
    qosRuleNameIsSet_ = false;
    qosChannelId_ = "";
    qosChannelIdIsSet_ = false;
    qosChannelName_ = "";
    qosChannelNameIsSet_ = false;
    qosDropPackets_ = 0.0;
    qosDropPacketsIsSet_ = false;
    qosDropBytes_ = 0.0;
    qosDropBytesIsSet_ = false;
    qosRuleType_ = 0;
    qosRuleTypeIsSet_ = false;
    qosChannelType_ = 0;
    qosChannelTypeIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    hitTime_ = 0L;
    hitTimeIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleType_ = 0;
    ruleTypeIsSet_ = false;
    attackRule_ = "";
    attackRuleIsSet_ = false;
    attackRuleId_ = "";
    attackRuleIdIsSet_ = false;
    attackType_ = "";
    attackTypeIsSet_ = false;
    eventTime_ = 0L;
    eventTimeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    packet_ = "";
    packetIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    realIp_ = "";
    realIpIsSet_ = false;
    tag_ = 0;
    tagIsSet_ = false;
}

LogVO::~LogVO() = default;

void LogVO::validate()
{
}

web::json::value LogVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(bytesIsSet_) {
        val[utility::conversions::to_string_t("bytes")] = ModelBase::toJson(bytes_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(dstHostIsSet_) {
        val[utility::conversions::to_string_t("dst_host")] = ModelBase::toJson(dstHost_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }
    if(packetsIsSet_) {
        val[utility::conversions::to_string_t("packets")] = ModelBase::toJson(packets_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(srcPortIsSet_) {
        val[utility::conversions::to_string_t("src_port")] = ModelBase::toJson(srcPort_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
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
    if(sctpVerificationTagIsSet_) {
        val[utility::conversions::to_string_t("sctp_verification_tag")] = ModelBase::toJson(sctpVerificationTag_);
    }
    if(sctpIsHandshakeFlowIsSet_) {
        val[utility::conversions::to_string_t("sctp_is_handshake_flow")] = ModelBase::toJson(sctpIsHandshakeFlow_);
    }
    if(qosRuleIdIsSet_) {
        val[utility::conversions::to_string_t("qos_rule_id")] = ModelBase::toJson(qosRuleId_);
    }
    if(qosRuleNameIsSet_) {
        val[utility::conversions::to_string_t("qos_rule_name")] = ModelBase::toJson(qosRuleName_);
    }
    if(qosChannelIdIsSet_) {
        val[utility::conversions::to_string_t("qos_channel_id")] = ModelBase::toJson(qosChannelId_);
    }
    if(qosChannelNameIsSet_) {
        val[utility::conversions::to_string_t("qos_channel_name")] = ModelBase::toJson(qosChannelName_);
    }
    if(qosDropPacketsIsSet_) {
        val[utility::conversions::to_string_t("qos_drop_packets")] = ModelBase::toJson(qosDropPackets_);
    }
    if(qosDropBytesIsSet_) {
        val[utility::conversions::to_string_t("qos_drop_bytes")] = ModelBase::toJson(qosDropBytes_);
    }
    if(qosRuleTypeIsSet_) {
        val[utility::conversions::to_string_t("qos_rule_type")] = ModelBase::toJson(qosRuleType_);
    }
    if(qosChannelTypeIsSet_) {
        val[utility::conversions::to_string_t("qos_channel_type")] = ModelBase::toJson(qosChannelType_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(hitTimeIsSet_) {
        val[utility::conversions::to_string_t("hit_time")] = ModelBase::toJson(hitTime_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
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
    if(eventTimeIsSet_) {
        val[utility::conversions::to_string_t("event_time")] = ModelBase::toJson(eventTime_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(packetIsSet_) {
        val[utility::conversions::to_string_t("packet")] = ModelBase::toJson(packet_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(realIpIsSet_) {
        val[utility::conversions::to_string_t("real_ip")] = ModelBase::toJson(realIp_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool LogVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBytes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dst_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstHost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("packets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packets"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sctp_verification_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sctp_verification_tag"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSctpVerificationTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sctp_is_handshake_flow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sctp_is_handshake_flow"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSctpIsHandshakeFlow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_channel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_channel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosChannelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_channel_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_channel_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosChannelName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_drop_packets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_drop_packets"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosDropPackets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_drop_bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_drop_bytes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosDropBytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_rule_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_channel_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_channel_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosChannelType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("packet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacket(refVal);
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
    return ok;
}


std::string LogVO::getApp() const
{
    return app_;
}

void LogVO::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool LogVO::appIsSet() const
{
    return appIsSet_;
}

void LogVO::unsetapp()
{
    appIsSet_ = false;
}

double LogVO::getBytes() const
{
    return bytes_;
}

void LogVO::setBytes(double value)
{
    bytes_ = value;
    bytesIsSet_ = true;
}

bool LogVO::bytesIsSet() const
{
    return bytesIsSet_;
}

void LogVO::unsetbytes()
{
    bytesIsSet_ = false;
}

std::string LogVO::getDirection() const
{
    return direction_;
}

void LogVO::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool LogVO::directionIsSet() const
{
    return directionIsSet_;
}

void LogVO::unsetdirection()
{
    directionIsSet_ = false;
}

std::string LogVO::getDstHost() const
{
    return dstHost_;
}

void LogVO::setDstHost(const std::string& value)
{
    dstHost_ = value;
    dstHostIsSet_ = true;
}

bool LogVO::dstHostIsSet() const
{
    return dstHostIsSet_;
}

void LogVO::unsetdstHost()
{
    dstHostIsSet_ = false;
}

std::string LogVO::getDstIp() const
{
    return dstIp_;
}

void LogVO::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool LogVO::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void LogVO::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t LogVO::getDstPort() const
{
    return dstPort_;
}

void LogVO::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool LogVO::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void LogVO::unsetdstPort()
{
    dstPortIsSet_ = false;
}

int64_t LogVO::getEndTime() const
{
    return endTime_;
}

void LogVO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool LogVO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void LogVO::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string LogVO::getLogId() const
{
    return logId_;
}

void LogVO::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool LogVO::logIdIsSet() const
{
    return logIdIsSet_;
}

void LogVO::unsetlogId()
{
    logIdIsSet_ = false;
}

double LogVO::getPackets() const
{
    return packets_;
}

void LogVO::setPackets(double value)
{
    packets_ = value;
    packetsIsSet_ = true;
}

bool LogVO::packetsIsSet() const
{
    return packetsIsSet_;
}

void LogVO::unsetpackets()
{
    packetsIsSet_ = false;
}

std::string LogVO::getProtocol() const
{
    return protocol_;
}

void LogVO::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool LogVO::protocolIsSet() const
{
    return protocolIsSet_;
}

void LogVO::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string LogVO::getSrcIp() const
{
    return srcIp_;
}

void LogVO::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool LogVO::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void LogVO::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

int32_t LogVO::getSrcPort() const
{
    return srcPort_;
}

void LogVO::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool LogVO::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void LogVO::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

int64_t LogVO::getStartTime() const
{
    return startTime_;
}

void LogVO::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LogVO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LogVO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string LogVO::getDstRegionId() const
{
    return dstRegionId_;
}

void LogVO::setDstRegionId(const std::string& value)
{
    dstRegionId_ = value;
    dstRegionIdIsSet_ = true;
}

bool LogVO::dstRegionIdIsSet() const
{
    return dstRegionIdIsSet_;
}

void LogVO::unsetdstRegionId()
{
    dstRegionIdIsSet_ = false;
}

std::string LogVO::getDstRegionName() const
{
    return dstRegionName_;
}

void LogVO::setDstRegionName(const std::string& value)
{
    dstRegionName_ = value;
    dstRegionNameIsSet_ = true;
}

bool LogVO::dstRegionNameIsSet() const
{
    return dstRegionNameIsSet_;
}

void LogVO::unsetdstRegionName()
{
    dstRegionNameIsSet_ = false;
}

std::string LogVO::getDstProvinceId() const
{
    return dstProvinceId_;
}

void LogVO::setDstProvinceId(const std::string& value)
{
    dstProvinceId_ = value;
    dstProvinceIdIsSet_ = true;
}

bool LogVO::dstProvinceIdIsSet() const
{
    return dstProvinceIdIsSet_;
}

void LogVO::unsetdstProvinceId()
{
    dstProvinceIdIsSet_ = false;
}

std::string LogVO::getDstProvinceName() const
{
    return dstProvinceName_;
}

void LogVO::setDstProvinceName(const std::string& value)
{
    dstProvinceName_ = value;
    dstProvinceNameIsSet_ = true;
}

bool LogVO::dstProvinceNameIsSet() const
{
    return dstProvinceNameIsSet_;
}

void LogVO::unsetdstProvinceName()
{
    dstProvinceNameIsSet_ = false;
}

std::string LogVO::getDstCityId() const
{
    return dstCityId_;
}

void LogVO::setDstCityId(const std::string& value)
{
    dstCityId_ = value;
    dstCityIdIsSet_ = true;
}

bool LogVO::dstCityIdIsSet() const
{
    return dstCityIdIsSet_;
}

void LogVO::unsetdstCityId()
{
    dstCityIdIsSet_ = false;
}

std::string LogVO::getDstCityName() const
{
    return dstCityName_;
}

void LogVO::setDstCityName(const std::string& value)
{
    dstCityName_ = value;
    dstCityNameIsSet_ = true;
}

bool LogVO::dstCityNameIsSet() const
{
    return dstCityNameIsSet_;
}

void LogVO::unsetdstCityName()
{
    dstCityNameIsSet_ = false;
}

std::string LogVO::getSrcRegionId() const
{
    return srcRegionId_;
}

void LogVO::setSrcRegionId(const std::string& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool LogVO::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void LogVO::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

std::string LogVO::getSrcRegionName() const
{
    return srcRegionName_;
}

void LogVO::setSrcRegionName(const std::string& value)
{
    srcRegionName_ = value;
    srcRegionNameIsSet_ = true;
}

bool LogVO::srcRegionNameIsSet() const
{
    return srcRegionNameIsSet_;
}

void LogVO::unsetsrcRegionName()
{
    srcRegionNameIsSet_ = false;
}

std::string LogVO::getSrcProvinceId() const
{
    return srcProvinceId_;
}

void LogVO::setSrcProvinceId(const std::string& value)
{
    srcProvinceId_ = value;
    srcProvinceIdIsSet_ = true;
}

bool LogVO::srcProvinceIdIsSet() const
{
    return srcProvinceIdIsSet_;
}

void LogVO::unsetsrcProvinceId()
{
    srcProvinceIdIsSet_ = false;
}

std::string LogVO::getSrcProvinceName() const
{
    return srcProvinceName_;
}

void LogVO::setSrcProvinceName(const std::string& value)
{
    srcProvinceName_ = value;
    srcProvinceNameIsSet_ = true;
}

bool LogVO::srcProvinceNameIsSet() const
{
    return srcProvinceNameIsSet_;
}

void LogVO::unsetsrcProvinceName()
{
    srcProvinceNameIsSet_ = false;
}

std::string LogVO::getSrcCityId() const
{
    return srcCityId_;
}

void LogVO::setSrcCityId(const std::string& value)
{
    srcCityId_ = value;
    srcCityIdIsSet_ = true;
}

bool LogVO::srcCityIdIsSet() const
{
    return srcCityIdIsSet_;
}

void LogVO::unsetsrcCityId()
{
    srcCityIdIsSet_ = false;
}

std::string LogVO::getSrcCityName() const
{
    return srcCityName_;
}

void LogVO::setSrcCityName(const std::string& value)
{
    srcCityName_ = value;
    srcCityNameIsSet_ = true;
}

bool LogVO::srcCityNameIsSet() const
{
    return srcCityNameIsSet_;
}

void LogVO::unsetsrcCityName()
{
    srcCityNameIsSet_ = false;
}

std::string LogVO::getVgwId() const
{
    return vgwId_;
}

void LogVO::setVgwId(const std::string& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool LogVO::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void LogVO::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

int64_t LogVO::getSctpVerificationTag() const
{
    return sctpVerificationTag_;
}

void LogVO::setSctpVerificationTag(int64_t value)
{
    sctpVerificationTag_ = value;
    sctpVerificationTagIsSet_ = true;
}

bool LogVO::sctpVerificationTagIsSet() const
{
    return sctpVerificationTagIsSet_;
}

void LogVO::unsetsctpVerificationTag()
{
    sctpVerificationTagIsSet_ = false;
}

std::string LogVO::getSctpIsHandshakeFlow() const
{
    return sctpIsHandshakeFlow_;
}

void LogVO::setSctpIsHandshakeFlow(const std::string& value)
{
    sctpIsHandshakeFlow_ = value;
    sctpIsHandshakeFlowIsSet_ = true;
}

bool LogVO::sctpIsHandshakeFlowIsSet() const
{
    return sctpIsHandshakeFlowIsSet_;
}

void LogVO::unsetsctpIsHandshakeFlow()
{
    sctpIsHandshakeFlowIsSet_ = false;
}

std::string LogVO::getQosRuleId() const
{
    return qosRuleId_;
}

void LogVO::setQosRuleId(const std::string& value)
{
    qosRuleId_ = value;
    qosRuleIdIsSet_ = true;
}

bool LogVO::qosRuleIdIsSet() const
{
    return qosRuleIdIsSet_;
}

void LogVO::unsetqosRuleId()
{
    qosRuleIdIsSet_ = false;
}

std::string LogVO::getQosRuleName() const
{
    return qosRuleName_;
}

void LogVO::setQosRuleName(const std::string& value)
{
    qosRuleName_ = value;
    qosRuleNameIsSet_ = true;
}

bool LogVO::qosRuleNameIsSet() const
{
    return qosRuleNameIsSet_;
}

void LogVO::unsetqosRuleName()
{
    qosRuleNameIsSet_ = false;
}

std::string LogVO::getQosChannelId() const
{
    return qosChannelId_;
}

void LogVO::setQosChannelId(const std::string& value)
{
    qosChannelId_ = value;
    qosChannelIdIsSet_ = true;
}

bool LogVO::qosChannelIdIsSet() const
{
    return qosChannelIdIsSet_;
}

void LogVO::unsetqosChannelId()
{
    qosChannelIdIsSet_ = false;
}

std::string LogVO::getQosChannelName() const
{
    return qosChannelName_;
}

void LogVO::setQosChannelName(const std::string& value)
{
    qosChannelName_ = value;
    qosChannelNameIsSet_ = true;
}

bool LogVO::qosChannelNameIsSet() const
{
    return qosChannelNameIsSet_;
}

void LogVO::unsetqosChannelName()
{
    qosChannelNameIsSet_ = false;
}

double LogVO::getQosDropPackets() const
{
    return qosDropPackets_;
}

void LogVO::setQosDropPackets(double value)
{
    qosDropPackets_ = value;
    qosDropPacketsIsSet_ = true;
}

bool LogVO::qosDropPacketsIsSet() const
{
    return qosDropPacketsIsSet_;
}

void LogVO::unsetqosDropPackets()
{
    qosDropPacketsIsSet_ = false;
}

double LogVO::getQosDropBytes() const
{
    return qosDropBytes_;
}

void LogVO::setQosDropBytes(double value)
{
    qosDropBytes_ = value;
    qosDropBytesIsSet_ = true;
}

bool LogVO::qosDropBytesIsSet() const
{
    return qosDropBytesIsSet_;
}

void LogVO::unsetqosDropBytes()
{
    qosDropBytesIsSet_ = false;
}

int32_t LogVO::getQosRuleType() const
{
    return qosRuleType_;
}

void LogVO::setQosRuleType(int32_t value)
{
    qosRuleType_ = value;
    qosRuleTypeIsSet_ = true;
}

bool LogVO::qosRuleTypeIsSet() const
{
    return qosRuleTypeIsSet_;
}

void LogVO::unsetqosRuleType()
{
    qosRuleTypeIsSet_ = false;
}

int32_t LogVO::getQosChannelType() const
{
    return qosChannelType_;
}

void LogVO::setQosChannelType(int32_t value)
{
    qosChannelType_ = value;
    qosChannelTypeIsSet_ = true;
}

bool LogVO::qosChannelTypeIsSet() const
{
    return qosChannelTypeIsSet_;
}

void LogVO::unsetqosChannelType()
{
    qosChannelTypeIsSet_ = false;
}

std::string LogVO::getAction() const
{
    return action_;
}

void LogVO::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool LogVO::actionIsSet() const
{
    return actionIsSet_;
}

void LogVO::unsetaction()
{
    actionIsSet_ = false;
}

std::string LogVO::getUrl() const
{
    return url_;
}

void LogVO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool LogVO::urlIsSet() const
{
    return urlIsSet_;
}

void LogVO::unseturl()
{
    urlIsSet_ = false;
}

int64_t LogVO::getHitTime() const
{
    return hitTime_;
}

void LogVO::setHitTime(int64_t value)
{
    hitTime_ = value;
    hitTimeIsSet_ = true;
}

bool LogVO::hitTimeIsSet() const
{
    return hitTimeIsSet_;
}

void LogVO::unsethitTime()
{
    hitTimeIsSet_ = false;
}

std::string LogVO::getRuleId() const
{
    return ruleId_;
}

void LogVO::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool LogVO::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void LogVO::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string LogVO::getRuleName() const
{
    return ruleName_;
}

void LogVO::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool LogVO::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void LogVO::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t LogVO::getRuleType() const
{
    return ruleType_;
}

void LogVO::setRuleType(int32_t value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool LogVO::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void LogVO::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string LogVO::getAttackRule() const
{
    return attackRule_;
}

void LogVO::setAttackRule(const std::string& value)
{
    attackRule_ = value;
    attackRuleIsSet_ = true;
}

bool LogVO::attackRuleIsSet() const
{
    return attackRuleIsSet_;
}

void LogVO::unsetattackRule()
{
    attackRuleIsSet_ = false;
}

std::string LogVO::getAttackRuleId() const
{
    return attackRuleId_;
}

void LogVO::setAttackRuleId(const std::string& value)
{
    attackRuleId_ = value;
    attackRuleIdIsSet_ = true;
}

bool LogVO::attackRuleIdIsSet() const
{
    return attackRuleIdIsSet_;
}

void LogVO::unsetattackRuleId()
{
    attackRuleIdIsSet_ = false;
}

std::string LogVO::getAttackType() const
{
    return attackType_;
}

void LogVO::setAttackType(const std::string& value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool LogVO::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void LogVO::unsetattackType()
{
    attackTypeIsSet_ = false;
}

int64_t LogVO::getEventTime() const
{
    return eventTime_;
}

void LogVO::setEventTime(int64_t value)
{
    eventTime_ = value;
    eventTimeIsSet_ = true;
}

bool LogVO::eventTimeIsSet() const
{
    return eventTimeIsSet_;
}

void LogVO::unseteventTime()
{
    eventTimeIsSet_ = false;
}

std::string LogVO::getLevel() const
{
    return level_;
}

void LogVO::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool LogVO::levelIsSet() const
{
    return levelIsSet_;
}

void LogVO::unsetlevel()
{
    levelIsSet_ = false;
}

std::string LogVO::getPacket() const
{
    return packet_;
}

void LogVO::setPacket(const std::string& value)
{
    packet_ = value;
    packetIsSet_ = true;
}

bool LogVO::packetIsSet() const
{
    return packetIsSet_;
}

void LogVO::unsetpacket()
{
    packetIsSet_ = false;
}

std::string LogVO::getSource() const
{
    return source_;
}

void LogVO::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool LogVO::sourceIsSet() const
{
    return sourceIsSet_;
}

void LogVO::unsetsource()
{
    sourceIsSet_ = false;
}

std::string LogVO::getRealIp() const
{
    return realIp_;
}

void LogVO::setRealIp(const std::string& value)
{
    realIp_ = value;
    realIpIsSet_ = true;
}

bool LogVO::realIpIsSet() const
{
    return realIpIsSet_;
}

void LogVO::unsetrealIp()
{
    realIpIsSet_ = false;
}

int32_t LogVO::getTag() const
{
    return tag_;
}

void LogVO::setTag(int32_t value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool LogVO::tagIsSet() const
{
    return tagIsSet_;
}

void LogVO::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


