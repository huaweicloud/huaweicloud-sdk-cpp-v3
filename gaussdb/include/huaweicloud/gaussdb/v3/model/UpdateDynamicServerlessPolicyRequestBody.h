
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDynamicServerlessPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDynamicServerlessPolicyRequestBody_H_


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
/// **参数解释**：  设置动态Serverless算力策略请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateDynamicServerlessPolicyRequestBody
    : public ModelBase
{
public:
    UpdateDynamicServerlessPolicyRequestBody();
    virtual ~UpdateDynamicServerlessPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDynamicServerlessPolicyRequestBody members

    /// <summary>
    /// **参数解释**：   最小动态Serverless算力。  **取值范围**：  取值范围可根据[查询动态Serverless算力策略](https://support.huaweicloud.com/api-taurusdb/ShowDynamicServerlessPolicy.html)接口获取，并且小于等于max_vcpus。
    /// </summary>

    std::string getMinVcpus() const;
    bool minVcpusIsSet() const;
    void unsetminVcpus();
    void setMinVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：   最大动态Serverless算力。  **取值范围**：  取值范围可根据[查询动态Serverless算力策略](https://support.huaweicloud.com/api-taurusdb/ShowDynamicServerlessPolicy.html)接口获取，并且大于等于min_vcpus。
    /// </summary>

    std::string getMaxVcpus() const;
    bool maxVcpusIsSet() const;
    void unsetmaxVcpus();
    void setMaxVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：  节点算力同步，修改算力范围的同时，是否将小于最小算力的节点的当前算力同步至最小算力。  **约束限制**：  不涉及。  **取值范围**： - true: 节点算力同步。 - false: 节点算力不同步。  **默认取值**：  false。
    /// </summary>

    bool isNeedUpdateNodesComputeAbility() const;
    bool needUpdateNodesComputeAbilityIsSet() const;
    void unsetneedUpdateNodesComputeAbility();
    void setNeedUpdateNodesComputeAbility(bool value);


protected:
    std::string minVcpus_;
    bool minVcpusIsSet_;
    std::string maxVcpus_;
    bool maxVcpusIsSet_;
    bool needUpdateNodesComputeAbility_;
    bool needUpdateNodesComputeAbilityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDynamicServerlessPolicyRequestBody_H_
