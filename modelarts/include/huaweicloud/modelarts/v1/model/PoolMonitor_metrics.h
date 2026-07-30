
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metrics_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metrics_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolMonitor_metric.h>
#include <huaweicloud/modelarts/v1/model/PoolMonitor_dataPoints.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMonitor_metrics
    : public ModelBase
{
public:
    PoolMonitor_metrics();
    virtual ~PoolMonitor_metrics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMonitor_metrics members

    /// <summary>
    /// 
    /// </summary>

    PoolMonitor_metric getMetric() const;
    bool metricIsSet() const;
    void unsetmetric();
    void setMetric(const PoolMonitor_metric& value);

    /// <summary>
    /// **参数解释**：监控指标数据。
    /// </summary>

    std::vector<PoolMonitor_dataPoints>& getDataPoints();
    bool dataPointsIsSet() const;
    void unsetdataPoints();
    void setDataPoints(const std::vector<PoolMonitor_dataPoints>& value);


protected:
    PoolMonitor_metric metric_;
    bool metricIsSet_;
    std::vector<PoolMonitor_dataPoints> dataPoints_;
    bool dataPointsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metrics_H_
