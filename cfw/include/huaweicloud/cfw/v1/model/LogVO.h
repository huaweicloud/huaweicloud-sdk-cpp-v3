
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_LogVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_LogVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  LogVO
    : public ModelBase
{
public:
    LogVO();
    virtual ~LogVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogVO members

    /// <summary>
    /// **参数解释**： 应用 **取值范围**： 不涉及
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// **参数解释**： 流字节数，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    double getBytes() const;
    bool bytesIsSet() const;
    void unsetbytes();
    void setBytes(double value);

    /// <summary>
    /// **参数解释**： 会话方向 **取值范围**： out2in 外到内访问 in2out 内到外访问
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// **参数解释**： 流字节数，访问控制日志和流量日志中存在 **取值范围**： 目的网址
    /// </summary>

    std::string getDstHost() const;
    bool dstHostIsSet() const;
    void unsetdstHost();
    void setDstHost(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的IP **取值范围**： 不涉及
    /// </summary>

    std::string getDstIp() const;
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的端口 **取值范围**： 不涉及
    /// </summary>

    int32_t getDstPort() const;
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(int32_t value);

    /// <summary>
    /// **参数解释**： 会话结束时间，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 日志ID，用于分页查询 **取值范围**： 不涉及
    /// </summary>

    std::string getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流包数，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    double getPackets() const;
    bool packetsIsSet() const;
    void unsetpackets();
    void setPackets(double value);

    /// <summary>
    /// **参数解释**： 协议 **取值范围**： 不涉及
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// **参数解释**： 源Ip **取值范围**： 不涉及
    /// </summary>

    std::string getSrcIp() const;
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 源端口 **取值范围**： 不涉及
    /// </summary>

    int32_t getSrcPort() const;
    bool srcPortIsSet() const;
    void unsetsrcPort();
    void setSrcPort(int32_t value);

    /// <summary>
    /// **参数解释**： 会话开始时间，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 目的地区ID **取值范围**： 不涉及
    /// </summary>

    std::string getDstRegionId() const;
    bool dstRegionIdIsSet() const;
    void unsetdstRegionId();
    void setDstRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的地区名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDstRegionName() const;
    bool dstRegionNameIsSet() const;
    void unsetdstRegionName();
    void setDstRegionName(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的省份ID **取值范围**： 不涉及
    /// </summary>

    std::string getDstProvinceId() const;
    bool dstProvinceIdIsSet() const;
    void unsetdstProvinceId();
    void setDstProvinceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的省份名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDstProvinceName() const;
    bool dstProvinceNameIsSet() const;
    void unsetdstProvinceName();
    void setDstProvinceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的城市ID **取值范围**： 不涉及
    /// </summary>

    std::string getDstCityId() const;
    bool dstCityIdIsSet() const;
    void unsetdstCityId();
    void setDstCityId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的城市名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDstCityName() const;
    bool dstCityNameIsSet() const;
    void unsetdstCityName();
    void setDstCityName(const std::string& value);

    /// <summary>
    /// **参数解释**： 源地区ID **取值范围**： 不涉及
    /// </summary>

    std::string getSrcRegionId() const;
    bool srcRegionIdIsSet() const;
    void unsetsrcRegionId();
    void setSrcRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源地区名称 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcRegionName() const;
    bool srcRegionNameIsSet() const;
    void unsetsrcRegionName();
    void setSrcRegionName(const std::string& value);

    /// <summary>
    /// **参数解释**： 源省份ID **取值范围**： 不涉及
    /// </summary>

    std::string getSrcProvinceId() const;
    bool srcProvinceIdIsSet() const;
    void unsetsrcProvinceId();
    void setSrcProvinceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源省份名称 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcProvinceName() const;
    bool srcProvinceNameIsSet() const;
    void unsetsrcProvinceName();
    void setSrcProvinceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 源城市ID **取值范围**： 不涉及
    /// </summary>

    std::string getSrcCityId() const;
    bool srcCityIdIsSet() const;
    void unsetsrcCityId();
    void setSrcCityId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源城市名称 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcCityName() const;
    bool srcCityNameIsSet() const;
    void unsetsrcCityName();
    void setSrcCityName(const std::string& value);

    /// <summary>
    /// **参数解释**： 虚拟网关ID **取值范围**： 不涉及
    /// </summary>

    std::string getVgwId() const;
    bool vgwIdIsSet() const;
    void unsetvgwId();
    void setVgwId(const std::string& value);

    /// <summary>
    /// **参数解释**： sctp验证标签，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    int64_t getSctpVerificationTag() const;
    bool sctpVerificationTagIsSet() const;
    void unsetsctpVerificationTag();
    void setSctpVerificationTag(int64_t value);

    /// <summary>
    /// **参数解释**： sctp握手流，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getSctpIsHandshakeFlow() const;
    bool sctpIsHandshakeFlowIsSet() const;
    void unsetsctpIsHandshakeFlow();
    void setSctpIsHandshakeFlow(const std::string& value);

    /// <summary>
    /// **参数解释**： qos规则ID，流量日志、访问控制日志存在 **取值范围**： 不涉及
    /// </summary>

    std::string getQosRuleId() const;
    bool qosRuleIdIsSet() const;
    void unsetqosRuleId();
    void setQosRuleId(const std::string& value);

    /// <summary>
    /// **参数解释**： qos规则名称，流量日志、访问控制日志存在 **取值范围**： 不涉及
    /// </summary>

    std::string getQosRuleName() const;
    bool qosRuleNameIsSet() const;
    void unsetqosRuleName();
    void setQosRuleName(const std::string& value);

    /// <summary>
    /// **参数解释**： qos通道ID，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getQosChannelId() const;
    bool qosChannelIdIsSet() const;
    void unsetqosChannelId();
    void setQosChannelId(const std::string& value);

    /// <summary>
    /// **参数解释**： qos通道名称，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getQosChannelName() const;
    bool qosChannelNameIsSet() const;
    void unsetqosChannelName();
    void setQosChannelName(const std::string& value);

    /// <summary>
    /// **参数解释**： qos丢包数，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    double getQosDropPackets() const;
    bool qosDropPacketsIsSet() const;
    void unsetqosDropPackets();
    void setQosDropPackets(double value);

    /// <summary>
    /// **参数解释**： qos丢弃字节，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    double getQosDropBytes() const;
    bool qosDropBytesIsSet() const;
    void unsetqosDropBytes();
    void setQosDropBytes(double value);

    /// <summary>
    /// **参数解释**： qos规则类型，流量日志、访问控制日志存在 **取值范围**： 不涉及
    /// </summary>

    int32_t getQosRuleType() const;
    bool qosRuleTypeIsSet() const;
    void unsetqosRuleType();
    void setQosRuleType(int32_t value);

    /// <summary>
    /// **参数解释**： qos通道类型，流量日志字段 **取值范围**： 不涉及
    /// </summary>

    int32_t getQosChannelType() const;
    bool qosChannelTypeIsSet() const;
    void unsetqosChannelType();
    void setQosChannelType(int32_t value);

    /// <summary>
    /// **参数解释**： 动作，攻击日志、访问控制日志、URL日志存在 **取值范围**： 不涉及
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**： url，URL日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 命中时间，访问控制日志、URL日志存在 **取值范围**： 不涉及
    /// </summary>

    int64_t getHitTime() const;
    bool hitTimeIsSet() const;
    void unsethitTime();
    void setHitTime(int64_t value);

    /// <summary>
    /// **参数解释**： 规则ID，访问控制日志、URL日志存在 **取值范围**： 不涉及
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则名称，访问控制日志、URL日志存在 **取值范围**： 不涉及
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则类型，访问控制日志和URL日志字段 **取值范围**： 不涉及
    /// </summary>

    int32_t getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(int32_t value);

    /// <summary>
    /// **参数解释**： 规则类型，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getAttackRule() const;
    bool attackRuleIsSet() const;
    void unsetattackRule();
    void setAttackRule(const std::string& value);

    /// <summary>
    /// **参数解释**： 攻击规则ID，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getAttackRuleId() const;
    bool attackRuleIdIsSet() const;
    void unsetattackRuleId();
    void setAttackRuleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 攻击类型，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(const std::string& value);

    /// <summary>
    /// **参数解释**： 事件时间，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    int64_t getEventTime() const;
    bool eventTimeIsSet() const;
    void unseteventTime();
    void setEventTime(int64_t value);

    /// <summary>
    /// **参数解释**： 攻击等级，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则载荷，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getPacket() const;
    bool packetIsSet() const;
    void unsetpacket();
    void setPacket(const std::string& value);

    /// <summary>
    /// **参数解释**： 攻击来源，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释**： 真实IP，攻击日志字段 **取值范围**： 不涉及
    /// </summary>

    std::string getRealIp() const;
    bool realIpIsSet() const;
    void unsetrealIp();
    void setRealIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签类型，攻击日志字段 **取值范围**： 1 WAF回源IP
    /// </summary>

    int32_t getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(int32_t value);


protected:
    std::string app_;
    bool appIsSet_;
    double bytes_;
    bool bytesIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string dstHost_;
    bool dstHostIsSet_;
    std::string dstIp_;
    bool dstIpIsSet_;
    int32_t dstPort_;
    bool dstPortIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    double packets_;
    bool packetsIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string srcIp_;
    bool srcIpIsSet_;
    int32_t srcPort_;
    bool srcPortIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::string dstRegionId_;
    bool dstRegionIdIsSet_;
    std::string dstRegionName_;
    bool dstRegionNameIsSet_;
    std::string dstProvinceId_;
    bool dstProvinceIdIsSet_;
    std::string dstProvinceName_;
    bool dstProvinceNameIsSet_;
    std::string dstCityId_;
    bool dstCityIdIsSet_;
    std::string dstCityName_;
    bool dstCityNameIsSet_;
    std::string srcRegionId_;
    bool srcRegionIdIsSet_;
    std::string srcRegionName_;
    bool srcRegionNameIsSet_;
    std::string srcProvinceId_;
    bool srcProvinceIdIsSet_;
    std::string srcProvinceName_;
    bool srcProvinceNameIsSet_;
    std::string srcCityId_;
    bool srcCityIdIsSet_;
    std::string srcCityName_;
    bool srcCityNameIsSet_;
    std::string vgwId_;
    bool vgwIdIsSet_;
    int64_t sctpVerificationTag_;
    bool sctpVerificationTagIsSet_;
    std::string sctpIsHandshakeFlow_;
    bool sctpIsHandshakeFlowIsSet_;
    std::string qosRuleId_;
    bool qosRuleIdIsSet_;
    std::string qosRuleName_;
    bool qosRuleNameIsSet_;
    std::string qosChannelId_;
    bool qosChannelIdIsSet_;
    std::string qosChannelName_;
    bool qosChannelNameIsSet_;
    double qosDropPackets_;
    bool qosDropPacketsIsSet_;
    double qosDropBytes_;
    bool qosDropBytesIsSet_;
    int32_t qosRuleType_;
    bool qosRuleTypeIsSet_;
    int32_t qosChannelType_;
    bool qosChannelTypeIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string url_;
    bool urlIsSet_;
    int64_t hitTime_;
    bool hitTimeIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    int32_t ruleType_;
    bool ruleTypeIsSet_;
    std::string attackRule_;
    bool attackRuleIsSet_;
    std::string attackRuleId_;
    bool attackRuleIdIsSet_;
    std::string attackType_;
    bool attackTypeIsSet_;
    int64_t eventTime_;
    bool eventTimeIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string packet_;
    bool packetIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string realIp_;
    bool realIpIsSet_;
    int32_t tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_LogVO_H_
