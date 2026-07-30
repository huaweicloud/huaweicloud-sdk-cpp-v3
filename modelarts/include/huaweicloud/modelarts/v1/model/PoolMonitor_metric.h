
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metric_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metric_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PoolMonitor_metric_dimensions.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：监控指标描述。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMonitor_metric
    : public ModelBase
{
public:
    PoolMonitor_metric();
    virtual ~PoolMonitor_metric();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMonitor_metric members

    /// <summary>
    /// **参数解释**：指标维度信息。
    /// </summary>

    std::vector<PoolMonitor_metric_dimensions>& getDimensions();
    bool dimensionsIsSet() const;
    void unsetdimensions();
    void setDimensions(const std::vector<PoolMonitor_metric_dimensions>& value);

    /// <summary>
    /// **参数解释**：指标名称。 **取值范围**：可选值如下： - cpuUsage：CPU使用量。 - memUsedRate：内存利用率。 - gpuUtil：GPU显卡使用量。 - gpuMemUsage：GPU显存使用量。 - npuUtil：NPU显卡使用量。 - npuMemUsage：NPU显存使用量。 - diskCapacity：磁盘容量。 - diskAvailableCapacity：磁盘可用容量。 - diskUsedRate：磁盘利用率。
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// **参数解释**：指标命名空间。 **取值范围**：可选值如下： -  PAAS.CONTAINER：组件指标、实例指标、进程指标和容器指标的命名空间 - PAAS.NODE： 主机指标、网络指标、磁盘指标和文件系统指标的命名空间 -  PAAS.SLA：SLA指标的命名空间 - PAAS.AGGR：集群指标的命名空间 - CUSTOMMETRICS：默认的自定义指标的命名空间
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);


protected:
    std::vector<PoolMonitor_metric_dimensions> dimensions_;
    bool dimensionsIsSet_;
    std::string metricName_;
    bool metricNameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metric_H_
