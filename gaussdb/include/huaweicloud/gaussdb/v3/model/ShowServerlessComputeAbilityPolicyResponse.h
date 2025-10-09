
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowServerlessComputeAbilityPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowServerlessComputeAbilityPolicyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowServerlessComputeAbilityPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerlessComputeAbilityPolicyResponse();
    virtual ~ShowServerlessComputeAbilityPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerlessComputeAbilityPolicyResponse members

    /// <summary>
    /// **参数描述**：  当前算力。  **取值范围**：  介于最大算力和最小算力之间。
    /// </summary>

    std::string getCurrentVcpus() const;
    bool currentVcpusIsSet() const;
    void unsetcurrentVcpus();
    void setCurrentVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：  最小算力。  **取值范围**：  ≥0.5。
    /// </summary>

    std::string getMinVcpus() const;
    bool minVcpusIsSet() const;
    void unsetminVcpus();
    void setMinVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：  最大算力。  **取值范围**：  ≥4。
    /// </summary>

    std::string getMaxVcpus() const;
    bool maxVcpusIsSet() const;
    void unsetmaxVcpus();
    void setMaxVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**:  增删只读节点开关。  **取值范围**： - true: 开启增删只读节点。 - false: 关闭增删只读节点。
    /// </summary>

    bool isScaleOutSwitch() const;
    bool scaleOutSwitchIsSet() const;
    void unsetscaleOutSwitch();
    void setScaleOutSwitch(bool value);

    /// <summary>
    /// **参数解释**：  最大只读节点个数。  **取值范围**：  ≥2。
    /// </summary>

    int32_t getMaxReadonlyNodeCount() const;
    bool maxReadonlyNodeCountIsSet() const;
    void unsetmaxReadonlyNodeCount();
    void setMaxReadonlyNodeCount(int32_t value);

    /// <summary>
    /// **参数解释**：  最小只读节点个数。  **取值范围**：  ≥1。    
    /// </summary>

    int32_t getMinReadonlyNodeCount() const;
    bool minReadonlyNodeCountIsSet() const;
    void unsetminReadonlyNodeCount();
    void setMinReadonlyNodeCount(int32_t value);


protected:
    std::string currentVcpus_;
    bool currentVcpusIsSet_;
    std::string minVcpus_;
    bool minVcpusIsSet_;
    std::string maxVcpus_;
    bool maxVcpusIsSet_;
    bool scaleOutSwitch_;
    bool scaleOutSwitchIsSet_;
    int32_t maxReadonlyNodeCount_;
    bool maxReadonlyNodeCountIsSet_;
    int32_t minReadonlyNodeCount_;
    bool minReadonlyNodeCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowServerlessComputeAbilityPolicyResponse_H_
