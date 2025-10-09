
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateHtapQueryQueueControlReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateHtapQueryQueueControlReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  开启/关闭查询队列参数体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OperateHtapQueryQueueControlReq
    : public ModelBase
{
public:
    OperateHtapQueryQueueControlReq();
    virtual ~OperateHtapQueryQueueControlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateHtapQueryQueueControlReq members

    /// <summary>
    /// **参数解释**：  查询队列的开关状态。  **约束限制**：  不涉及。  **取值范围**：  - true：表示开启。 - false：表示关闭。  **默认值**：  false。
    /// </summary>

    std::string getEnableQueryQueueSelect() const;
    bool enableQueryQueueSelectIsSet() const;
    void unsetenableQueryQueueSelect();
    void setEnableQueryQueueSelect(const std::string& value);


protected:
    std::string enableQueryQueueSelect_;
    bool enableQueryQueueSelectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateHtapQueryQueueControlReq_H_
