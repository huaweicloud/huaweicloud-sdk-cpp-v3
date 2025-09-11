
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NetworkControlConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NetworkControlConfig_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/VpcConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数网络配置。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  NetworkControlConfig
    : public ModelBase
{
public:
    NetworkControlConfig();
    virtual ~NetworkControlConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkControlConfig members

    /// <summary>
    /// 禁止公网访问开关。
    /// </summary>

    bool isDisablePublicNetwork() const;
    bool disablePublicNetworkIsSet() const;
    void unsetdisablePublicNetwork();
    void setDisablePublicNetwork(bool value);

    /// <summary>
    /// 指定触发函数vpc配置。
    /// </summary>

    std::vector<VpcConfig>& getTriggerAccessVpcs();
    bool triggerAccessVpcsIsSet() const;
    void unsettriggerAccessVpcs();
    void setTriggerAccessVpcs(const std::vector<VpcConfig>& value);


protected:
    bool disablePublicNetwork_;
    bool disablePublicNetworkIsSet_;
    std::vector<VpcConfig> triggerAccessVpcs_;
    bool triggerAccessVpcsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_NetworkControlConfig_H_
