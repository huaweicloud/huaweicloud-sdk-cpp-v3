
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TacticsConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TacticsConfig_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/CronConfig.h>
#include <huaweicloud/functiongraph/v2/model/MetricConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  TacticsConfig
    : public ModelBase
{
public:
    TacticsConfig();
    virtual ~TacticsConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TacticsConfig members

    /// <summary>
    /// 定时配置列表
    /// </summary>

    std::vector<CronConfig>& getCronConfigs();
    bool cronConfigsIsSet() const;
    void unsetcronConfigs();
    void setCronConfigs(const std::vector<CronConfig>& value);

    /// <summary>
    /// 流量配置列表
    /// </summary>

    std::vector<MetricConfig>& getMetricConfigs();
    bool metricConfigsIsSet() const;
    void unsetmetricConfigs();
    void setMetricConfigs(const std::vector<MetricConfig>& value);


protected:
    std::vector<CronConfig> cronConfigs_;
    bool cronConfigsIsSet_;
    std::vector<MetricConfig> metricConfigs_;
    bool metricConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TacticsConfig_H_
