
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAttackLogsResponseDTO_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAttackLogsResponseDTO_data_records_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/PacketMessage.h>
#include <huaweicloud/cfw/v1/model/Packet.h>
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
    /// 方向，有内到外和外到内两种
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 动作
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 事件时间
    /// </summary>

    std::string getEventTime() const;
    bool eventTimeIsSet() const;
    void unseteventTime();
    void setEventTime(const std::string& value);

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
    /// 威胁等级
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

    int32_t getAttackRuleId() const;
    bool attackRuleIdIsSet() const;
    void unsetattackRuleId();
    void setAttackRuleId(int32_t value);

    /// <summary>
    /// 命中时间
    /// </summary>

    int32_t getHitTime() const;
    bool hitTimeIsSet() const;
    void unsethitTime();
    void setHitTime(int32_t value);

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
    /// 协议
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Packet getPacket() const;
    bool packetIsSet() const;
    void unsetpacket();
    void setPacket(const Packet& value);

    /// <summary>
    /// 应用协议
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


protected:
    std::string direction_;
    bool directionIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string eventTime_;
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
    int32_t attackRuleId_;
    bool attackRuleIdIsSet_;
    int32_t hitTime_;
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
    Packet packet_;
    bool packetIsSet_;
    std::string app_;
    bool appIsSet_;
    std::vector<PacketMessage> packetMessages_;
    bool packetMessagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAttackLogsResponseDTO_data_records_H_
