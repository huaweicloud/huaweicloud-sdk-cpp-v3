
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessComputeAbilityPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessComputeAbilityPolicy_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  设置serverless算力配置策略请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateServerlessComputeAbilityPolicy
    : public ModelBase
{
public:
    UpdateServerlessComputeAbilityPolicy();
    virtual ~UpdateServerlessComputeAbilityPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerlessComputeAbilityPolicy members

    /// <summary>
    /// **参数解释**：  单节点VCPUs伸缩下限。  **约束限制**：  不涉及。  **取值范围**：  取值范围可根据[查询数据库规格](https://support.huaweicloud.com/api-taurusdb/ShowGaussMySqlFlavors.html)接口获取。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMinVcpus() const;
    bool minVcpusIsSet() const;
    void unsetminVcpus();
    void setMinVcpus(int32_t value);

    /// <summary>
    /// **参数解释**：  单节点VCPUs伸缩上限。  **约束限制**：  不涉及。  **取值范围**：  ≥4。取值范围可根据[查询数据库规格](https://support.huaweicloud.com/api-taurusdb/ShowGaussMySqlFlavors.html)接口获取。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMaxVcpus() const;
    bool maxVcpusIsSet() const;
    void unsetmaxVcpus();
    void setMaxVcpus(int32_t value);

    /// <summary>
    /// **参数解释**：  节点算力同步，修改算力范围的同时，是否将小于最小算力的节点的当前算力同步至最小算力。  **约束限制**：  不涉及。  **取值范围**： - true: 节点算力同步。 - false: 节点算力不同步。  **默认取值**： false。
    /// </summary>

    bool isNeedUpdateNodesComputeAbility() const;
    bool needUpdateNodesComputeAbilityIsSet() const;
    void unsetneedUpdateNodesComputeAbility();
    void setNeedUpdateNodesComputeAbility(bool value);

    /// <summary>
    /// **参数解释**：  是否增删只读节点。  **约束限制**：  - 存在数据库代理时，才可以使用增删只读节点功能。  - 使用增删节点功能时，避免使用读内网地址连接应用。  - 打开增删只读节点后，数据库代理的路由模式会变为负载均衡模式。  **取值范围**： - true: 开启增删只读节点。 - false: 不开启增删只读节点。  **默认取值**：  false。
    /// </summary>

    bool isScaleOutSwitch() const;
    bool scaleOutSwitchIsSet() const;
    void unsetscaleOutSwitch();
    void setScaleOutSwitch(bool value);

    /// <summary>
    /// **参数解释**：  只读节点数量上限。  **约束限制**：  开启增删只读节点时才会生效, 且开启增删只读节点时该参数必选。  **取值范围**：  2-7。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMaxReadonlyNodeCount() const;
    bool maxReadonlyNodeCountIsSet() const;
    void unsetmaxReadonlyNodeCount();
    void setMaxReadonlyNodeCount(int32_t value);

    /// <summary>
    /// **参数解释**：  只读节点数量上限。  **约束限制**：  开启增删只读节点时才会生效, 且开启增删只读节点时该参数必选。  **取值范围**：  1-6。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMinReadonlyNodeCount() const;
    bool minReadonlyNodeCountIsSet() const;
    void unsetminReadonlyNodeCount();
    void setMinReadonlyNodeCount(int32_t value);


protected:
    int32_t minVcpus_;
    bool minVcpusIsSet_;
    int32_t maxVcpus_;
    bool maxVcpusIsSet_;
    bool needUpdateNodesComputeAbility_;
    bool needUpdateNodesComputeAbilityIsSet_;
    bool scaleOutSwitch_;
    bool scaleOutSwitchIsSet_;
    int32_t maxReadonlyNodeCount_;
    bool maxReadonlyNodeCountIsSet_;
    int32_t minReadonlyNodeCount_;
    bool minReadonlyNodeCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessComputeAbilityPolicy_H_
