
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAttackLogsResponseDTO_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAttackLogsResponseDTO_data_records_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/PacketMessage.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  HttpQueryCfwAttackLogsResponseDTO_data_records
    : public ModelBase
{
public:
    HttpQueryCfwAttackLogsResponseDTO_data_records();
    virtual ~HttpQueryCfwAttackLogsResponseDTO_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpQueryCfwAttackLogsResponseDTO_data_records members

    /// <summary>
    /// 方向，包含in2out，out2in
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 动作包含permit，deny
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 事件时间，以毫秒为单位的时间戳，如1718936272648
    /// </summary>

    int64_t getEventTime() const;
    bool eventTimeIsSet() const;
    void unseteventTime();
    void setEventTime(int64_t value);

    /// <summary>
    /// 攻击类型
    /// </summary>

    std::string getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(const std::string& value);

    /// <summary>
    /// 攻击规则
    /// </summary>

    std::string getAttackRule() const;
    bool attackRuleIsSet() const;
    void unsetattackRule();
    void setAttackRule(const std::string& value);

    /// <summary>
    /// 威胁等级，包括CRITICAL、HIGH、MEDIUM、LOW
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 来源
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 报文长度
    /// </summary>

    int64_t getPacketLength() const;
    bool packetLengthIsSet() const;
    void unsetpacketLength();
    void setPacketLength(int64_t value);

    /// <summary>
    /// 攻击规则id
    /// </summary>

    std::string getAttackRuleId() const;
    bool attackRuleIdIsSet() const;
    void unsetattackRuleId();
    void setAttackRuleId(const std::string& value);

    /// <summary>
    /// 命中时间，以毫秒为单位的时间戳，如1718936272648
    /// </summary>

    int64_t getHitTime() const;
    bool hitTimeIsSet() const;
    void unsethitTime();
    void setHitTime(int64_t value);

    /// <summary>
    /// 日志ID
    /// </summary>

    std::string getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(const std::string& value);

    /// <summary>
    /// 源IP
    /// </summary>

    std::string getSrcIp() const;
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::string& value);

    /// <summary>
    /// 源端口
    /// </summary>

    int32_t getSrcPort() const;
    bool srcPortIsSet() const;
    void unsetsrcPort();
    void setSrcPort(int32_t value);

    /// <summary>
    /// 目的IP
    /// </summary>

    std::string getDstIp() const;
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::string& value);

    /// <summary>
    /// 目的端口
    /// </summary>

    int32_t getDstPort() const;
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(int32_t value);

    /// <summary>
    /// 协议类型，包含TCP, UDP,ICMP,ICMPV6等。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 攻击日志报文
    /// </summary>

    std::string getPacket() const;
    bool packetIsSet() const;
    void unsetpacket();
    void setPacket(const std::string& value);

    /// <summary>
    /// 规则应用类型包括：“HTTP”，\&quot;HTTPS\&quot;，\&quot;TLS1\&quot;，“DNS”，“SSH”，“MYSQL”，“SMTP”，“RDP”，“RDPS”，“VNC”，“POP3”，“IMAP4”，“SMTPS”，“POP3S”，“FTPS”，“ANY”,“BGP”等。
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 攻击报文信息
    /// </summary>

    std::vector<PacketMessage>& getPacketMessages();
    bool packetMessagesIsSet() const;
    void unsetpacketMessages();
    void setPacketMessages(const std::vector<PacketMessage>& value);

    /// <summary>
    /// 源区域id
    /// </summary>

    std::string getSrcRegionId() const;
    bool srcRegionIdIsSet() const;
    void unsetsrcRegionId();
    void setSrcRegionId(const std::string& value);

    /// <summary>
    /// 源区域名称
    /// </summary>

    std::string getSrcRegionName() const;
    bool srcRegionNameIsSet() const;
    void unsetsrcRegionName();
    void setSrcRegionName(const std::string& value);

    /// <summary>
    /// 目的区域id
    /// </summary>

    std::string getDstRegionId() const;
    bool dstRegionIdIsSet() const;
    void unsetdstRegionId();
    void setDstRegionId(const std::string& value);

    /// <summary>
    /// 目的区域名称
    /// </summary>

    std::string getDstRegionName() const;
    bool dstRegionNameIsSet() const;
    void unsetdstRegionName();
    void setDstRegionName(const std::string& value);

    /// <summary>
    /// 源省份id
    /// </summary>

    std::string getSrcProvinceId() const;
    bool srcProvinceIdIsSet() const;
    void unsetsrcProvinceId();
    void setSrcProvinceId(const std::string& value);

    /// <summary>
    /// 源省份名称
    /// </summary>

    std::string getSrcProvinceName() const;
    bool srcProvinceNameIsSet() const;
    void unsetsrcProvinceName();
    void setSrcProvinceName(const std::string& value);

    /// <summary>
    /// 源城市id
    /// </summary>

    std::string getSrcCityId() const;
    bool srcCityIdIsSet() const;
    void unsetsrcCityId();
    void setSrcCityId(const std::string& value);

    /// <summary>
    /// 源城市名称
    /// </summary>

    std::string getSrcCityName() const;
    bool srcCityNameIsSet() const;
    void unsetsrcCityName();
    void setSrcCityName(const std::string& value);

    /// <summary>
    /// 目的省份id
    /// </summary>

    std::string getDstProvinceId() const;
    bool dstProvinceIdIsSet() const;
    void unsetdstProvinceId();
    void setDstProvinceId(const std::string& value);

    /// <summary>
    /// 目的省份名称
    /// </summary>

    std::string getDstProvinceName() const;
    bool dstProvinceNameIsSet() const;
    void unsetdstProvinceName();
    void setDstProvinceName(const std::string& value);

    /// <summary>
    /// 目的城市id
    /// </summary>

    std::string getDstCityId() const;
    bool dstCityIdIsSet() const;
    void unsetdstCityId();
    void setDstCityId(const std::string& value);

    /// <summary>
    /// 目的城市名称
    /// </summary>

    std::string getDstCityName() const;
    bool dstCityNameIsSet() const;
    void unsetdstCityName();
    void setDstCityName(const std::string& value);


protected:
    std::string direction_;
    bool directionIsSet_;
    std::string action_;
    bool actionIsSet_;
    int64_t eventTime_;
    bool eventTimeIsSet_;
    std::string attackType_;
    bool attackTypeIsSet_;
    std::string attackRule_;
    bool attackRuleIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string source_;
    bool sourceIsSet_;
    int64_t packetLength_;
    bool packetLengthIsSet_;
    std::string attackRuleId_;
    bool attackRuleIdIsSet_;
    int64_t hitTime_;
    bool hitTimeIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    std::string srcIp_;
    bool srcIpIsSet_;
    int32_t srcPort_;
    bool srcPortIsSet_;
    std::string dstIp_;
    bool dstIpIsSet_;
    int32_t dstPort_;
    bool dstPortIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string packet_;
    bool packetIsSet_;
    std::string app_;
    bool appIsSet_;
    std::vector<PacketMessage> packetMessages_;
    bool packetMessagesIsSet_;
    std::string srcRegionId_;
    bool srcRegionIdIsSet_;
    std::string srcRegionName_;
    bool srcRegionNameIsSet_;
    std::string dstRegionId_;
    bool dstRegionIdIsSet_;
    std::string dstRegionName_;
    bool dstRegionNameIsSet_;
    std::string srcProvinceId_;
    bool srcProvinceIdIsSet_;
    std::string srcProvinceName_;
    bool srcProvinceNameIsSet_;
    std::string srcCityId_;
    bool srcCityIdIsSet_;
    std::string srcCityName_;
    bool srcCityNameIsSet_;
    std::string dstProvinceId_;
    bool dstProvinceIdIsSet_;
    std::string dstProvinceName_;
    bool dstProvinceNameIsSet_;
    std::string dstCityId_;
    bool dstCityIdIsSet_;
    std::string dstCityName_;
    bool dstCityNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAttackLogsResponseDTO_data_records_H_
