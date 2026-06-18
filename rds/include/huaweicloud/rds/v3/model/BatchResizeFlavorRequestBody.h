
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchResizeFlavorRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchResizeFlavorRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量规格变更请求体请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchResizeFlavorRequestBody
    : public ModelBase
{
public:
    BatchResizeFlavorRequestBody();
    virtual ~BatchResizeFlavorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeFlavorRequestBody members

    /// <summary>
    /// **参数解释**：   实例ID列表。   **约束限制**：  一次最多下发10个实例。   **取值范围**：  不涉及。  **默认取值**：   不涉及。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  资源规格编码。  **约束限制**：   不涉及。   **取值范围**：  不涉及。   **默认取值**：   不涉及。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否进行定时规格变更。  **约束限制**：   不涉及。   **取值范围**：  不涉及。   **默认取值**：   false
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);

    /// <summary>
    /// **参数解释**：  变更包周期实例的规格时可指定，表示是否自动从客户的账户中支付。  **约束限制**：   不涉及。   **取值范围**：  不涉及。   **默认取值**：   false
    /// </summary>

    bool isAutoPay() const;
    bool autoPayIsSet() const;
    void unsetautoPay();
    void setAutoPay(bool value);

    /// <summary>
    /// **参数解释**：  表示是否占用ip进行规格变更。  **约束限制**：   不涉及。   **取值范围**：  不涉及。   **默认取值**：   true
    /// </summary>

    bool isOccupyIp() const;
    bool occupyIpIsSet() const;
    void unsetoccupyIp();
    void setOccupyIp(bool value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    bool delay_;
    bool delayIsSet_;
    bool autoPay_;
    bool autoPayIsSet_;
    bool occupyIp_;
    bool occupyIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchResizeFlavorRequestBody_H_
