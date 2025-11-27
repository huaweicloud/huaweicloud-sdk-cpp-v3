
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowRuleActionResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowRuleActionResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowRuleActionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRuleActionResponse();
    virtual ~ShowRuleActionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRuleActionResponse members

    /// <summary>
    /// 规则动作ID，用于唯一标识一条规则动作，在创建规则动作时由物联网平台分配获得，创建时无需携带，由平台统一分配唯一的action_id。
    /// </summary>

    std::string getActionId() const;
    bool actionIdIsSet() const;
    void unsetactionId();
    void setActionId(const std::string& value);

    /// <summary>
    /// 规则动作对应的的规则触发条件ID。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 资源空间ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 规则动作的类型，取值范围： - HTTP_FORWARDING：HTTP服务消息类型。 - DIS_FORWARDING：转发DIS服务消息类型。 - OBS_FORWARDING：转发OBS服务消息类型。 - AMQP_FORWARDING：转发AMQP服务消息类型。 - DMS_KAFKA_FORWARDING：转发kafka消息类型。 [- ROMA_FORWARDING: 转发Roma消息类型。（仅企业版支持）](tag:hws) - INFLUXDB_FORWARDING：转发InfluxDB消息类型。[（仅标准版和企业版支持）](tag:hws) - MYSQL_FORWARDING：转发MySQL消息类型。[（仅标准版和企业版支持）](tag:hws) - FUNCTIONGRAPH_FORWARDING：转发FunctionGraph消息类型。[（仅标准版和企业版支持）](tag:hws) - MQTT_DEVICE_FORWARDING：转发设备消息类型。[（仅标准版和企业版支持）](tag:hws) [- MRS_KAFKA_FORWARDING：转发MRS_KAFKA消息类型。（仅企业版支持）](tag:hws) [- DMS_ROCKETMQ_FORWARDING：转发RocketMQ消息类型。（仅标准版和企业版支持）](tag:hws)
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
    std::string actionId_;
    bool actionIdIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string channel_;
    bool channelIsSet_;
    ChannelDetail channelDetail_;
    bool channelDetailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowRuleActionResponse_H_
