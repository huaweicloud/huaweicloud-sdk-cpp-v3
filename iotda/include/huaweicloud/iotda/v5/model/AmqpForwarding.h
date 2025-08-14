
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AmqpForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AmqpForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// amqp queue配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AmqpForwarding
    : public ModelBase
{
public:
    AmqpForwarding();
    virtual ~AmqpForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AmqpForwarding members

    /// <summary>
    /// **参数说明**：用于接收满足规则条件数据的amqp queue。
    /// </summary>

    std::string getQueueName() const;
    bool queueNameIsSet() const;
    void unsetqueueName();
    void setQueueName(const std::string& value);


protected:
    std::string queueName_;
    bool queueNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AmqpForwarding_H_
