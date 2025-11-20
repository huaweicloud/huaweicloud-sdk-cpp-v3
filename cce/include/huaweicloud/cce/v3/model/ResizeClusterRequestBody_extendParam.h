
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterRequestBody_extendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterRequestBody_extendParam_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 变更集群规格扩展字段 **约束限制**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ResizeClusterRequestBody_extendParam
    : public ModelBase
{
public:
    ResizeClusterRequestBody_extendParam();
    virtual ~ResizeClusterRequestBody_extendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeClusterRequestBody_extendParam members

    /// <summary>
    /// **参数解释**： 专属云CCE集群可指定控制节点的规格 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getDecMasterFlavor() const;
    bool decMasterFlavorIsSet() const;
    void unsetdecMasterFlavor();
    void setDecMasterFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否自动扣款 **约束限制**： 不涉及 **取值范围**： - “true”：自动扣款 - “false”：不自动扣款 &gt; 包周期集群时生效，不填写此参数时默认不会自动扣款。  **默认取值**： 不涉及 
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    std::string decMasterFlavor_;
    bool decMasterFlavorIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterRequestBody_extendParam_H_
