
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_QueueInfo_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_QueueInfo_H_


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
/// 添加时队列结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  QueueInfo
    : public ModelBase
{
public:
    QueueInfo();
    virtual ~QueueInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueueInfo members

    /// <summary>
    /// **参数说明**：队列名称，同一租户不允许重复。 **取值范围**：长度不低于8不超过128，只允许字母、数字、下划线（_）、连接符（-）、间隔号（.）、冒号（:）的组合。
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_QueueInfo_H_
