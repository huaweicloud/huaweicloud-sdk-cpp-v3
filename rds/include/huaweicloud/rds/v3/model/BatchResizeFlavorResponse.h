
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchResizeFlavorResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchResizeFlavorResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchResizeFlavorResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchResizeFlavorResponse();
    virtual ~BatchResizeFlavorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeFlavorResponse members

    /// <summary>
    /// **参数解释**：  批量任务ID，仅按需实例场景返回。该任务ID不会在任务中心显示，请前往任务中心查看每个实例的变更任务。  **约束限制**：   不涉及。   **取值范围**：  不涉及。   **默认取值**：   不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  订单ID。仅包周期实例场景返回。  **约束限制**：   不涉及。   **取值范围**：  不涉及。   **默认取值**：   不涉及。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchResizeFlavorResponse_H_
