
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateActionReq_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateActionReq_H_


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
/// 修改规则动作请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateActionReq
    : public ModelBase
{
public:
    UpdateActionReq();
    virtual ~UpdateActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateActionReq members

    /// <summary>
    /// **参数说明**：规则动作的类型。 **取值范围**： - HTTP_FORWARDING：HTTP服务消息类型。 - DIS_FORWARDING：转发DIS服务消息类型。 - OBS_FORWARDING：转发OBS服务消息类型。 - AMQP_FORWARDING：转发AMQP服务消息类型。 - DMS_KAFKA_FORWARDING：转发kafka消息类型。[ - ROMA_FORWARDING：转发Roma消息类型。（仅企业版支持） - INFLUXDB_FORWARDING：转发InfluxDB消息类型。（仅标准版和企业版支持） - MYSQL_FORWARDING：转发MySQL消息类型。（仅标准版和企业版支持） - FUNCTIONGRAPH_FORWARDING：转发FunctionGraph消息类型。（仅标准版和企业版支持） - MRS_KAFKA_FORWARDING：转发MRS_KAFKA消息类型。（仅企业版支持） - DMS_ROCKETMQ_FORWARDING：转发RocketMQ消息类型。（仅标准版和企业版支持）](tag:hws)[ - INFLUXDB_FORWARDING：转发InfluxDB消息类型。 - MYSQL_FORWARDING：转发MySQL消息类型。 - FUNCTIONGRAPH_FORWARDING：转发FunctionGraph消息类型。](tag:hws_hk)
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateActionReq_H_
