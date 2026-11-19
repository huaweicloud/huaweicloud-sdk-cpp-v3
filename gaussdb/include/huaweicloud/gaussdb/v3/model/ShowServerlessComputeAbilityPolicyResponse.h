
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

    /// <summary>
    /// **参数解释**：  Scale to Zero开关。  **取值范围**： - true: 开启Scale to Zero。 - false: 关闭Scale to Zero。
    /// </summary>

    bool isScaleToZero() const;
    bool scaleToZeroIsSet() const;
    void unsetscaleToZero();
    void setScaleToZero(bool value);

    /// <summary>
    /// **参数解释**：  空闲持续时长阈值，单位是秒。  所有节点活跃连接数为0且持续达到该阈值时触发Scale to Zero（停止计算计费）。  **取值范围**：  300-3600。
    /// </summary>

    int32_t getIdleDurationSeconds() const;
    bool idleDurationSecondsIsSet() const;
    void unsetidleDurationSeconds();
    void setIdleDurationSeconds(int32_t value);

    /// <summary>
    /// **参数解释**：  Scale to Zero开启后实例的运行状态。  **取值范围**： - ACTIVE：实例已唤醒，正常计费。 - SCALED_TO_ZERO：计算资源停止计费。
    /// </summary>

    std::string getScaleToZeroStatus() const;
    bool scaleToZeroStatusIsSet() const;
    void unsetscaleToZeroStatus();
    void setScaleToZeroStatus(const std::string& value);


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
    bool scaleToZero_;
    bool scaleToZeroIsSet_;
    int32_t idleDurationSeconds_;
    bool idleDurationSecondsIsSet_;
    std::string scaleToZeroStatus_;
    bool scaleToZeroStatusIsSet_;

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
