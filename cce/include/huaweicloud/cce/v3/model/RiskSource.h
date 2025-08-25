
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_RiskSource_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_RiskSource_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/DeprecatedAPIRisks.h>
#include <huaweicloud/cce/v3/model/NodeRisks.h>
#include <huaweicloud/cce/v3/model/ConfigurationRisks.h>
#include <huaweicloud/cce/v3/model/AddonRisks.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 风险项来源
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  RiskSource
    : public ModelBase
{
public:
    RiskSource();
    virtual ~RiskSource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RiskSource members

    /// <summary>
    /// 配置风险项
    /// </summary>

    std::vector<ConfigurationRisks>& getConfigurationRisks();
    bool configurationRisksIsSet() const;
    void unsetconfigurationRisks();
    void setConfigurationRisks(const std::vector<ConfigurationRisks>& value);

    /// <summary>
    /// 废弃API风险
    /// </summary>

    std::vector<DeprecatedAPIRisks>& getDeprecatedAPIRisks();
    bool deprecatedAPIRisksIsSet() const;
    void unsetdeprecatedAPIRisks();
    void setDeprecatedAPIRisks(const std::vector<DeprecatedAPIRisks>& value);

    /// <summary>
    /// 节点风险
    /// </summary>

    std::vector<NodeRisks>& getNodeRisks();
    bool nodeRisksIsSet() const;
    void unsetnodeRisks();
    void setNodeRisks(const std::vector<NodeRisks>& value);

    /// <summary>
    /// 插件风险
    /// </summary>

    std::vector<AddonRisks>& getAddonRisks();
    bool addonRisksIsSet() const;
    void unsetaddonRisks();
    void setAddonRisks(const std::vector<AddonRisks>& value);


protected:
    std::vector<ConfigurationRisks> configurationRisks_;
    bool configurationRisksIsSet_;
    std::vector<DeprecatedAPIRisks> deprecatedAPIRisks_;
    bool deprecatedAPIRisksIsSet_;
    std::vector<NodeRisks> nodeRisks_;
    bool nodeRisksIsSet_;
    std::vector<AddonRisks> addonRisks_;
    bool addonRisksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_RiskSource_H_
