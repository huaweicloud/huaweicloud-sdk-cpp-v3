
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddActionReq_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddActionReq_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/ChannelDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建规则动作请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddActionReq
    : public ModelBase
{
public:
    AddActionReq();
    virtual ~AddActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddActionReq members

    /// <summary>
    /// **参数说明**：规则触发条件ID，用于唯一标识一条规则触发条件，在创建规则时由物联网平台分配获得。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数说明**：规则动作的类型。 **取值范围**： - HTTP_FORWARDING：HTTP服务消息类型。 - DIS_FORWARDING：转发DIS服务消息类型。 - OBS_FORWARDING：转发OBS服务消息类型。 - AMQP_FORWARDING：转发AMQP服务消息类型。 - DMS_KAFKA_FORWARDING：转发kafka消息类型。[ - ROMA_FORWARDING：转发Roma消息类型。（仅企业版支持） - INFLUXDB_FORWARDING：转发InfluxDB消息类型。（仅标准版和企业版支持） - MYSQL_FORWARDING：转发MySQL消息类型。（仅标准版和企业版支持） - FUNCTIONGRAPH_FORWARDING：转发FunctionGraph消息类型。（仅标准版和企业版支持） - MRS_KAFKA_FORWARDING：转发MRS_KAFKA消息类型。（仅企业版支持） - DMS_ROCKETMQ_FORWARDING：转发RocketMQ消息类型。（仅标准版和企业版支持） - MQTT_DEVICE_FORWARDING：转发设备消息类型。（仅标准版和企业版支持）](tag:hws)[ - INFLUXDB_FORWARDING：转发InfluxDB消息类型。 - MYSQL_FORWARDING：转发MySQL消息类型。 - FUNCTIONGRAPH_FORWARDING：转发FunctionGraph消息类型。 - MQTT_DEVICE_FORWARDING：转发设备消息类型。](tag:hws_hk)
    /// </summary>

    std::string getChannel() const;
    bool channelIsSet() const;
    void unsetchannel();
    void setChannel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChannelDetail getChannelDetail() const;
    bool channelDetailIsSet() const;
    void unsetchannelDetail();
    void setChannelDetail(const ChannelDetail& value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string channel_;
    bool channelIsSet_;
    ChannelDetail channelDetail_;
    bool channelDetailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddActionReq_H_
