
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChannelDetail_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChannelDetail_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/HttpForwarding.h>
#include <huaweicloud/iotda/v5/model/MrsKafkaForwarding.h>
#include <huaweicloud/iotda/v5/model/AmqpForwarding.h>
#include <huaweicloud/iotda/v5/model/FunctionGraphForwarding.h>
#include <huaweicloud/iotda/v5/model/MysqlForwarding.h>
#include <huaweicloud/iotda/v5/model/DmsKafkaForwarding.h>
#include <huaweicloud/iotda/v5/model/DmsRocketMQForwarding.h>
#include <huaweicloud/iotda/v5/model/InfluxDBForwarding.h>
#include <huaweicloud/iotda/v5/model/ObsForwarding.h>
#include <huaweicloud/iotda/v5/model/DisForwarding.h>
#include <huaweicloud/iotda/v5/model/RomaForwarding.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 物联网平台转发数据的通道配置参数。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ChannelDetail
    : public ModelBase
{
public:
    ChannelDetail();
    virtual ~ChannelDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChannelDetail members

    /// <summary>
    /// 
    /// </summary>

    HttpForwarding getHttpForwarding() const;
    bool httpForwardingIsSet() const;
    void unsethttpForwarding();
    void setHttpForwarding(const HttpForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    DisForwarding getDisForwarding() const;
    bool disForwardingIsSet() const;
    void unsetdisForwarding();
    void setDisForwarding(const DisForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    ObsForwarding getObsForwarding() const;
    bool obsForwardingIsSet() const;
    void unsetobsForwarding();
    void setObsForwarding(const ObsForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    AmqpForwarding getAmqpForwarding() const;
    bool amqpForwardingIsSet() const;
    void unsetamqpForwarding();
    void setAmqpForwarding(const AmqpForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    DmsKafkaForwarding getDmsKafkaForwarding() const;
    bool dmsKafkaForwardingIsSet() const;
    void unsetdmsKafkaForwarding();
    void setDmsKafkaForwarding(const DmsKafkaForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    RomaForwarding getRomaForwarding() const;
    bool romaForwardingIsSet() const;
    void unsetromaForwarding();
    void setRomaForwarding(const RomaForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlForwarding getMysqlForwarding() const;
    bool mysqlForwardingIsSet() const;
    void unsetmysqlForwarding();
    void setMysqlForwarding(const MysqlForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    InfluxDBForwarding getInfluxdbForwarding() const;
    bool influxdbForwardingIsSet() const;
    void unsetinfluxdbForwarding();
    void setInfluxdbForwarding(const InfluxDBForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    FunctionGraphForwarding getFunctiongraphForwarding() const;
    bool functiongraphForwardingIsSet() const;
    void unsetfunctiongraphForwarding();
    void setFunctiongraphForwarding(const FunctionGraphForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    MrsKafkaForwarding getMrsKafkaForwarding() const;
    bool mrsKafkaForwardingIsSet() const;
    void unsetmrsKafkaForwarding();
    void setMrsKafkaForwarding(const MrsKafkaForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    DmsRocketMQForwarding getDmsRocketmqForwarding() const;
    bool dmsRocketmqForwardingIsSet() const;
    void unsetdmsRocketmqForwarding();
    void setDmsRocketmqForwarding(const DmsRocketMQForwarding& value);


protected:
    HttpForwarding httpForwarding_;
    bool httpForwardingIsSet_;
    DisForwarding disForwarding_;
    bool disForwardingIsSet_;
    ObsForwarding obsForwarding_;
    bool obsForwardingIsSet_;
    AmqpForwarding amqpForwarding_;
    bool amqpForwardingIsSet_;
    DmsKafkaForwarding dmsKafkaForwarding_;
    bool dmsKafkaForwardingIsSet_;
    RomaForwarding romaForwarding_;
    bool romaForwardingIsSet_;
    MysqlForwarding mysqlForwarding_;
    bool mysqlForwardingIsSet_;
    InfluxDBForwarding influxdbForwarding_;
    bool influxdbForwardingIsSet_;
    FunctionGraphForwarding functiongraphForwarding_;
    bool functiongraphForwardingIsSet_;
    MrsKafkaForwarding mrsKafkaForwarding_;
    bool mrsKafkaForwardingIsSet_;
    DmsRocketMQForwarding dmsRocketmqForwarding_;
    bool dmsRocketmqForwardingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChannelDetail_H_
